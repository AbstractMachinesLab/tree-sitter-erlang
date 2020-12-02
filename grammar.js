///////////////////////////////////////////////////////////////////////////////
//
// Tokens
//
///////////////////////////////////////////////////////////////////////////////
const ARROW = "->";
const BINARY_LEFT = "<<";
const BINARY_RIGHT = ">>";
const BRACE_LEFT = "{";
const BRACE_RIGHT = "}";
const BRACKET_LEFT = "[";
const BRACKET_RIGHT = "]";
const COLON = ":";
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

///////////////////////////////////////////////////////////////////////////////
//
// Combinators
//
///////////////////////////////////////////////////////////////////////////////
const opt = optional;
const sepBy = (sep, x) => seq(x, repeat(seq(sep, x)));
const delim = (open, x, close) => seq(open, x, close);

const tuple = (x) => delim(BRACE_LEFT, opt(sepBy(COMMA, x)), BRACE_RIGHT);
const list = (x) =>
  delim(
    BRACKET_LEFT,
    opt(choice(sepBy(COMMA, x), sepBy(PIPE, x))),
    BRACKET_RIGHT
  );
const parens = (x) => delim(PARENS_LEFT, x, PARENS_RIGHT);
const args = (x) => field("arguments", parens(opt(sepBy(COMMA, x))));

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
      choice(
        $.expression,
        $.module_attribute,
        $.module_name,
        $.module_export,
        $.function_declaration
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
      prec(10, seq(field("name", $.atom), $.lambda_clause)),

    comment: ($) => /%.*\n/,

    ////////////////////////////////////////////////////////////////////////////
    //
    // Patterns
    //
    ////////////////////////////////////////////////////////////////////////////

    pattern: ($) =>
      prec(10, choice($.term, $.variable, $.pat_list, $.pat_tuple)),

    pat_list: ($) => prec(10, list($.pattern)),
    pat_tuple: ($) => prec(10, tuple($.pattern)),

    ////////////////////////////////////////////////////////////////////////////
    //
    // Expressions
    //
    ////////////////////////////////////////////////////////////////////////////

    expression: ($) =>
      choice(
        $.case,
        $.variable,
        $.term,
        $.macro_application,
        $.function_call,
        $.lambda,
        $.match
      ),

    case: ($) =>
      seq("case", $.expression, "of", sepBy(SEMI, $.case_clause), "end"),

    case_clause: ($) =>
      seq(
        field("pattern", $.pattern),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),

    match: ($) => prec.right(seq($.expression, EQUAL, $.expression)),

    lambda: ($) => seq("fun", sepBy(SEMI, $.lambda_clause), "end"),

    lambda_clause: ($) =>
      seq(
        field("arguments", args($.pattern)),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),

    function_call: ($) =>
      choice(
        seq(field("name", $.expression), args($.expression)),
        seq(
          $.expression,
          COLON,
          field("name", choice($.variable, $.atom, parens($.expression))),
          args($.expression)
        )
      ),

    macro_application: ($) =>
      prec.right(11, seq(QUESTION, $._macro_name, opt(args($.expression)))),

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
    map_entry: ($) => seq($.term, FAT_ARROW, $.expression),

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
