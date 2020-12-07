///////////////////////////////////////////////////////////////////////////////
//
// Tokens
//
///////////////////////////////////////////////////////////////////////////////
const ARROW = "->";
const BANG = "!";
const BINARY_LEFT = "<<";
const BINARY_RIGHT = ">>";
const BRACE_LEFT = "{";
const BRACE_RIGHT = "}";
const BRACKET_LEFT = "[";
const BRACKET_RIGHT = "]";
const COLON = ":";
const COLON_EQUAL = ":=";
const COMMA = ",";
const DASH = "-";
const DOT = ".";
const EQUAL = "=";
const FAT_ARROW = "=>";
const HASH = "#";
const PARENS_LEFT = "(";
const PARENS_RIGHT = ")";
const PIPE = "|";
const QUESTION = "?";
const SEMI = ";";
const SLASH = "/";

const OP1 = ["+", "-", "bnot", "not"];
const OP2_LEFT_ASSOC = [
  "*",
  "+",
  "-",
  "/",
  "/=",
  "<",
  "=/=",
  "=:=",
  "=<",
  "==",
  ">",
  ">=",
  "and",
  "andalso",
  "band",
  "bor",
  "bsl",
  "bsr",
  "bxor",
  "div",
  "or",
  "orelse",
  "rem",
  "xor",
];
const OP2_RIGHT_ASSOC = ["=!", "++", "--"];

///////////////////////////////////////////////////////////////////////////////
//
// Precedences
//
///////////////////////////////////////////////////////////////////////////////
const PREC = {
  UNARY_OP: 10,
  BINARY_OP: 9,
  MODULE_DECLARATION: 8,
  FUNCTION_CLAUSE: 7,
  FUNCTION_NAME: 5,
  PARENTHESIZED_EXPRESSION: 6,
  EXPR_LIST_CONS: 5,
  EXPRESSION: 4,
  PATTERN: 3,
  MACRO_APPLICATION: 1,
  MATCH: -1, // prefer other expressions to matches
};

///////////////////////////////////////////////////////////////////////////////
//
// Combinators
//
///////////////////////////////////////////////////////////////////////////////
const opt = optional;
const sepBy = (sep, x) => seq(x, repeat(seq(sep, x)));
const delim = (open, x, close) => seq(open, x, close);

const tuple = (x) => delim(BRACE_LEFT, opt(sepBy(COMMA, x)), BRACE_RIGHT);
const list = (x) => delim(BRACKET_LEFT, opt(sepBy(COMMA, x)), BRACKET_RIGHT);
const parens = (x) => delim(PARENS_LEFT, x, PARENS_RIGHT);
const args = (x) => field("arguments", parens(opt(sepBy(COMMA, x))));

const oneOf = (x) => choice.apply(null, x);

///////////////////////////////////////////////////////////////////////////////
//
// Grammar
//
///////////////////////////////////////////////////////////////////////////////
module.exports = grammar({
  name: "erlang",

  word: ($) => $.unquoted_atom,

  extras: ($) => [/[\x00-\x20\x80-\xA0]/, $.comment],

  rules: {
    source_file: ($) => repeat($._structure_item),

    _structure_item: ($) =>
      prec(
        PREC.MODULE_DECLARATION,
        choice(
          $.expression,
          $.function_declaration,
          $.module_attribute,
          $.module_name,
          $.module_export
        )
      ),

    ////////////////////////////////////////////////////////////////////////////
    //
    // Modules
    //
    ////////////////////////////////////////////////////////////////////////////

    module_attribute: ($) =>
      seq(DASH, $.atom, delim(PARENS_LEFT, $.expression, PARENS_RIGHT), DOT),

    module_name: ($) =>
      seq(DASH, "module", delim(PARENS_LEFT, $.atom, PARENS_RIGHT), DOT),

    module_export: ($) =>
      seq(
        DASH,
        choice("export", "export_type"),
        delim(PARENS_LEFT, list(seq($.atom, SLASH, $.integer)), PARENS_RIGHT),
        DOT
      ),

    function_declaration: ($) => seq(sepBy(SEMI, $.function_clause), DOT),

    function_clause: ($) =>
      prec(PREC.FUNCTION_CLAUSE, seq(field("name", $.atom), $.lambda_clause)),

    comment: ($) => /%.*\n/,

    ////////////////////////////////////////////////////////////////////////////
    //
    // Patterns
    //
    ////////////////////////////////////////////////////////////////////////////

    pattern: ($) =>
      prec(PREC.PATTERN, choice($.term, $.variable, $.pat_list, $.pat_tuple)),

    pat_list: ($) => prec(PREC.PATTERN, list($.pattern)),
    pat_tuple: ($) => prec(PREC.PATTERN, tuple($.pattern)),
    pat_map: ($) =>
      seq(HASH, BRACE_LEFT, opt(sepBy(COMMA, $.pat_map_entry)), BRACE_RIGHT),
    pat_map_entry: ($) => seq($.term, COLON_EQUAL, $.pattern),

    ////////////////////////////////////////////////////////////////////////////
    //
    // Expressions
    //
    ////////////////////////////////////////////////////////////////////////////

    expression: ($) =>
      choice(
        prec(PREC.PARENTHESIZED_EXPRESSION, parens($._expression)),
        prec(PREC.EXPRESSION, $._expression)
      ),

    _expression: ($) =>
      choice(
        $.expr_operator,
        $.expr_receive,
        $.expr_send,
        $.expr_if,
        $.expr_list,
        $.case,
        $.variable,
        $.term,
        $.macro_application,
        $.function_call,
        $.lambda,
        $.match
      ),

    expr_operator: ($) => choice($.expr_operator_unary, $.expr_operator_binary),

    expr_operator_unary: ($) =>
      prec(
        PREC.UNARY_OP,
        seq(field("operator", oneOf(OP1)), field("operand", $.expression))
      ),

    expr_operator_binary: ($) =>
      choice(
        prec.left(
          PREC.BINARY_OP,
          seq(
            field("lhs", $.expression),
            field("operator", oneOf(OP2_LEFT_ASSOC)),
            field("rhs", $.expression)
          )
        ),
        prec.right(
          PREC.BINARY_OP,
          seq(
            field("lhs", $.expression),
            field("operator", oneOf(OP2_RIGHT_ASSOC)),
            field("rhs", $.expression)
          )
        )
      ),

    expr_send: ($) => prec.right(seq($.expression, BANG, $.expression)),

    expr_receive: ($) =>
      seq(
        "receive",
        field("branches", opt(sepBy(SEMI, $.case_clause))),
        opt($.expr_receive_after),
        "end"
      ),

    expr_receive_after: ($) => seq("after", $.case_clause),

    expr_if: ($) => seq("if", sepBy(SEMI, $.if_clause), "end"),

    if_clause: ($) =>
      seq(
        field("condition", $.guard_seq),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),

    expr_list: ($) =>
      prec(PREC.EXPR_LIST_CONS, choice(list($.expression), $.expr_list_cons)),

    expr_list_cons: ($) =>
      delim(
        BRACKET_LEFT,
        seq(
          field("init", sepBy(COMMA, $.expression)),
          PIPE,
          field("tail", $.expression)
        ),
        BRACKET_RIGHT
      ),

    case: ($) =>
      seq("case", $.expression, "of", sepBy(SEMI, $.case_clause), "end"),

    case_clause: ($) =>
      seq(
        field("pattern", $.pattern),
        opt($.guard_clause),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),

    guard_clause: ($) => seq("when", $.guard_seq),
    guard_seq: ($) => sepBy(SEMI, $.guard),
    guard: ($) => sepBy(COMMA, $.expression),

    match: ($) =>
      prec.right(PREC.MATCH, seq($.expression, EQUAL, $.expression)),

    lambda: ($) => seq("fun", sepBy(SEMI, $.lambda_clause), "end"),

    lambda_clause: ($) =>
      seq(
        field("arguments", args($.pattern)),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),

    function_call: ($) =>
      seq(field("name", $._function_name), args($.expression)),

    _function_name: ($) =>
      prec(
        PREC.FUNCTION_NAME,
        choice($.computed_function_name, $.qualified_function_name)
      ),

    qualified_function_name: ($) =>
      seq(
        field("module_name", choice($.variable, $.atom, parens($.expression))),
        COLON,
        field("function_name", choice($.variable, $.atom, parens($.expression)))
      ),

    computed_function_name: ($) =>
      prec(
        PREC.FUNCTION_NAME,
        choice($.variable, $.atom, parens($.expression))
      ),

    macro_application: ($) =>
      prec.right(
        PREC.MACRO_APPLICATION,
        seq(QUESTION, $._macro_name, opt(args($.expression)))
      ),

    _macro_name: ($) => choice($.variable, $.atom),

    variable: ($) =>
      /[_A-Z\xC0-\xD6\xD8-\xDE][_@a-zA-Z0-9\xC0-\xD6\xD8-\xDE\xDF-\xF6\xF8-\xFF]*/,

    term: ($) =>
      choice(
        $.atom,
        $.binary_string,
        $.char,
        $.float,
        $.integer,
        $.list,
        $.tuple,
        $.map,
        $.record,
        $.string
      ),

    list: ($) => list($.expression),
    tuple: ($) => tuple($.expression),

    atom: ($) => field("value", choice($.unquoted_atom, $.quoted_atom)),
    unquoted_atom: ($) =>
      /[a-z\xDF-\xF6\xF8-\xFF][_@a-zA-Z0-9\xC0-\xD6\xD8-\xDE\xDF-\xF6\xF8-\xFF]*/,
    quoted_atom: ($) => seq("'", repeat(choice(/[^'\\]+/, $._escape)), "'"),

    integer: ($) =>
      choice(
        // binary syntax
        /-?2#[01_]+/,
        // hex syntax
        /-?16#[a-fA-F0-9_]+/,
        // regular "other base" syntax
        /-?([\d*_]*#)?[\d_]+/
      ),
    float: ($) => /-?([\d_]*#)?[\d_]+\.[\d_]+(e-?[\d_]+)?/,

    string: ($) => seq('"', repeat(choice(/[^"\\]+/, $._escape)), '"'),

    char: ($) => seq("$", choice(/[^\\]/, $._escape)),

    _escape: ($) =>
      token(
        seq(
          "\\",
          choice(
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /x{[0-9a-fA-F]+}/,
            "\n",
            /[nrtvbfesd]/
          )
        )
      ),

    binary_string: ($) =>
      seq(BINARY_LEFT, opt(sepBy(COMMA, $.bin_part)), BINARY_RIGHT),
    bin_part: ($) =>
      choice(
        seq(
          choice($.integer, $.float, $.string),
          opt($.bin_sized),
          opt($.bin_type_list)
        ),
        seq(
          PARENS_LEFT,
          $.expression,
          PARENS_RIGHT,
          opt($.bin_sized),
          opt($.bin_type_list)
        )
      ),
    bin_sized: ($) => seq(/:/, $.integer),
    bin_type_list: ($) => seq(/\//, sepBy(DASH, $.bin_type)),
    bin_type: ($) =>
      choice(
        "big",
        "binary",
        "bits",
        "bitstring",
        "bytes",
        "float",
        "integer",
        "little",
        "native",
        "signed",
        "unsigned",
        "utf16",
        "utf32",
        "utf8"
      ),

    map: ($) =>
      seq(HASH, BRACE_LEFT, opt(sepBy(COMMA, $.map_entry)), BRACE_RIGHT),
    map_entry: ($) => seq($.term, choice(FAT_ARROW, COLON_EQUAL), $.expression),

    record: ($) =>
      seq(
        HASH,
        $.atom,
        BRACE_LEFT,
        opt(sepBy(COMMA, $.record_field)),
        BRACE_RIGHT
      ),
    record_field: ($) => seq($.term, EQUAL, $.expression),
  },
});
