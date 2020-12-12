///////////////////////////////////////////////////////////////////////////////
//
// Tokens
//
///////////////////////////////////////////////////////////////////////////////
const ARROW = "->";
const REV_ARROW = "<-";
const BANG = "!";
const BINARY_LEFT = "<<";
const BINARY_RIGHT = ">>";
const BRACE_LEFT = "{";
const BRACE_RIGHT = "}";
const BRACKET_LEFT = "[";
const BRACKET_RIGHT = "]";
const COLON = ":";
const DOUBLE_COLON = "::";
const COLON_EQUAL = ":=";
const COMMA = ",";
const DASH = "-";
const DOT = ".";
const DOT_DOT = "..";
const DOT_DOT_DOT = "...";
const EQUAL = "=";
const FAT_ARROW = "=>";
const REV_FAT_ARROW = "<=";
const HASH = "#";
const PARENS_LEFT = "(";
const PARENS_RIGHT = ")";
const PIPE = "|";
const DOUBLE_PIPE = "||";
const QUESTION = "?";
const SEMI = ";";
const SLASH = "/";
const UNDERSCORE = "_";
const STAR = "*";

const OP1 = ["+", "-", "bnot", "not"];
const OP2_LEFT_ASSOC = [
  STAR,
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
  EXPR_MAP_UPDATE: 101,
  TOP_LEVEL_EXPRESSION: 100,
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

  word: ($) => $._unquoted_atom,

  extras: ($) => [/[\x00-\x20\x80-\xA0]/, $.comment],

  inline: ($) => [$.term, $.expression],

  conflicts: ($) => [
    [$._structure_item, $._expr_operator_binary],
    [
      $._structure_item,
      $.expr_map_update,
      $.expr_record_access,
      $.expr_record_update,
    ],
  ],

  rules: {
    source_file: ($) => repeat($._structure_item),

    _structure_item: ($) =>
      choice(
        prec(PREC.TOP_LEVEL_EXPRESSION, $.expression),
        prec(PREC.MODULE_DECLARATION, $._module)
      ),

    ////////////////////////////////////////////////////////////////////////////
    //
    // Modules
    //
    ////////////////////////////////////////////////////////////////////////////

    _module: ($) =>
      choice(
        $.type_declaration,
        $.function_spec,
        $.function_declaration,
        $.module_attribute,
        $.module_name,
        $.module_export
      ),

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
    // Types
    //
    ////////////////////////////////////////////////////////////////////////////

    type_declaration: ($) =>
      seq(
        DASH,
        choice("type", "opaque"),
        field("name", $.atom),
        args($.variable),
        DOUBLE_COLON,
        field("def", $.type_expression),
        DOT
      ),

    function_spec: ($) =>
      seq(
        DASH,
        choice("spec", "callback"),
        field("name", $.atom),
        args($.type_expression),
        ARROW,
        field("def", $.type_expression),
        DOT
      ),

    type_expression: ($) =>
      sepBy(
        PIPE,
        choice(
          $.type_atom,
          $.type_application,
          $.type_bitstring,
          $.type_fun,
          $.type_integer,
          $.type_map,
          $.type_record,
          $.type_tuple,
          $.type_variable,
          $._type_list
        )
      ),

    type_variable: ($) => $.variable,

    type_atom: ($) => $.atom,

    type_application: ($) =>
      prec.right(
        PREC.MACRO_APPLICATION,
        seq(opt(seq($.atom, COLON)), $.atom, args($.type_expression))
      ),

    type_bitstring: ($) =>
      seq(
        BINARY_LEFT,
        choice(
          seq(UNDERSCORE, COLON, $.variable),
          seq(UNDERSCORE, COLON, UNDERSCORE, STAR, $.variable),
          seq(
            UNDERSCORE,
            COLON,
            $.variable,
            UNDERSCORE,
            COLON,
            UNDERSCORE,
            STAR,
            $.variable
          ),
          BINARY_RIGHT
        )
      ),

    type_fun: ($) =>
      seq(
        "fun",
        parens(
          opt(
            choice(
              seq(parens(DOT_DOT_DOT), ARROW, $.type_expression),
              seq(args($.type_expression), ARROW, $.type_expression)
            )
          )
        )
      ),
    type_integer: ($) => choice($.integer, seq($.integer, DOT_DOT, $.integer)),

    _type_list: ($) => choice($.type_list, $.type_nonempty_list),

    type_list: ($) => delim(BRACKET_LEFT, $.type_expression, BRACKET_RIGHT),

    type_nonempty_list: ($) =>
      delim(
        BRACKET_LEFT,
        seq($.type_expression, COMMA, DOT_DOT_DOT),
        BRACKET_RIGHT
      ),

    type_tuple: ($) => tuple($.type_expression),

    type_map: ($) =>
      seq(HASH, BRACE_LEFT, opt(sepBy(COMMA, $.type_map_entry)), BRACE_RIGHT),
    type_map_entry: ($) =>
      seq($.type_expression, choice(FAT_ARROW, COLON_EQUAL), $.type_expression),

    type_record: ($) =>
      seq(
        HASH,
        $.atom,
        BRACE_LEFT,
        opt(sepBy(COMMA, $.type_record_field)),
        BRACE_RIGHT
      ),
    type_record_field: ($) =>
      seq($.type_expression, DOUBLE_COLON, $.type_expression),

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
        prec(PREC.PARENTHESIZED_EXPRESSION, parens($._expr)),
        prec(PREC.EXPRESSION, $._expr)
      ),

    _expr: ($) =>
      choice(
        $.expr_begin_block,
        $.expr_bitstring_comprehension,
        $.expr_case,
        $.expr_catch,
        $.expr_function_call,
        $.expr_if,
        $.expr_lambda,
        $.expr_list,
        $.expr_list_comprehension,
        $.expr_macro_application,
        $.expr_map_update,
        $.expr_match,
        $.expr_receive,
        $.expr_record_access,
        $.expr_record_update,
        $.expr_send,
        $.expr_throw,
        $.expr_try,
        $.expr_op,
        $.term,
        $.variable
      ),

    expr_map_update: ($) =>
      prec.left(PREC.EXPR_MAP_UPDATE, seq($.expression, $.map)),

    expr_record_access: ($) =>
      prec.left(
        PREC.EXPR_MAP_UPDATE,
        seq($.expression, HASH, $.atom, DOT, $.atom)
      ),

    expr_record_update: ($) =>
      prec.left(PREC.EXPR_MAP_UPDATE, seq($.expression, $.record)),

    expr_try: ($) =>
      seq(
        "try",
        $.expression,
        opt(seq("of", sepBy(SEMI, $.case_clause))),
        choice($.expr_try_catch, $.expr_try_after, $._expr_try_catch_after),
        "end"
      ),

    expr_try_catch: ($) => seq("catch", sepBy(SEMI, $.catch_clause)),
    expr_try_after: ($) => seq("after", $.expression),
    _expr_try_catch_after: ($) => seq($.expr_try_catch, $.expr_try_after),
    catch_clause: ($) =>
      seq(
        field("pattern", $.catch_pattern),
        opt($.guard_clause),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),
    catch_pattern: ($) =>
      seq(
        field("class", $.pattern),
        field("exception", opt(seq(COLON, $.pattern))),
        field("stacktrace", opt(seq(COLON, $.variable)))
      ),

    expr_catch: ($) => prec.left(seq("catch", $.expression)),
    expr_throw: ($) => prec.left(seq("throw", $.expression)),

    expr_begin_block: ($) => seq("begin", sepBy(COMMA, $.expression), "end"),

    expr_list_comprehension: ($) =>
      seq(
        BRACKET_LEFT,
        $.expression,
        DOUBLE_PIPE,
        $.expr_list_generator,
        opt(seq(COMMA, $.expr_list_filter)),
        BRACKET_RIGHT
      ),

    expr_list_generator: ($) => seq($.expression, REV_ARROW, $.expression),
    expr_list_filter: ($) => sepBy(COMMA, $.expression),

    expr_bitstring_comprehension: ($) =>
      seq(
        BINARY_LEFT,
        $.term,
        DOUBLE_PIPE,
        $.expr_bitstring_generator,
        opt(seq(COMMA, $.expr_bitstring_filter)),
        BINARY_RIGHT
      ),

    expr_bitstring_generator: ($) =>
      seq(BINARY_LEFT, $.expression, BINARY_RIGHT, REV_FAT_ARROW, $.expression),
    expr_bitstring_filter: ($) => sepBy(COMMA, $.expression),

    expr_op: ($) => choice($._expr_operator_unary, $._expr_operator_binary),

    _expr_operator_unary: ($) =>
      prec.right(
        PREC.UNARY_OP,
        seq(field("operator", oneOf(OP1)), field("operand", $.expression))
      ),

    _expr_operator_binary: ($) =>
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

    expr_case: ($) =>
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

    expr_match: ($) =>
      prec.right(PREC.MATCH, seq($.expression, EQUAL, $.expression)),

    expr_lambda: ($) => seq("fun", sepBy(SEMI, $.lambda_clause), "end"),

    lambda_clause: ($) =>
      seq(
        field("arguments", args($.pattern)),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),

    expr_function_call: ($) =>
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

    expr_macro_application: ($) =>
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

    atom: ($) => field("value", choice($._unquoted_atom, $._quoted_atom)),
    _unquoted_atom: ($) =>
      /[a-z\xDF-\xF6\xF8-\xFF][_@a-zA-Z0-9\xC0-\xD6\xD8-\xDE\xDF-\xF6\xF8-\xFF]*/,
    _quoted_atom: ($) => seq("'", repeat(choice(/[^'\\]+/, $._escape)), "'"),

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
