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
const COMMA = ",";
const DASH = "-";
const DOT = ".";
const EQUAL = "=";
const FAT_ARROW = "=>";
const HASH = "#";
const PARENS_LEFT = "(";
const PARENS_RIGHT = ")";
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
const list = (x) => delim(BRACKET_LEFT, opt(sepBy(COMMA, x)), BRACKET_RIGHT);
const args = (x) => delim(PARENS_LEFT, opt(sepBy(COMMA, x)), PARENS_RIGHT);

///////////////////////////////////////////////////////////////////////////////
//
// Grammar
//
///////////////////////////////////////////////////////////////////////////////
module.exports = grammar({
  name: "erlang",
  rules: {
    source_file: ($) => repeat($._structure_item),

    _structure_item: ($) =>
      choice(
        $.comment,
        $.expression,
        $.module_attribute,
        $.module_name,
        $.module_export,
        $.function_declaration
      ),

    _identifier: ($) => /(_|[A-Z])[a-zA-Z0-9@_]*/,

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
        "export",
        delim(PARENS_LEFT, list(seq($.atom, SLASH, $.integer)), PARENS_RIGHT),
        DOT
      ),

    function_declaration: ($) => seq(sepBy(SEMI, $.function_clause), DOT),

    function_clause: ($) =>
      seq(
        field("name", $.atom),
        field("arguments", args($.pattern)),
        ARROW,
        field("body", sepBy(COMMA, $.expression))
      ),

    comment: ($) => /%.*\n/,

    ////////////////////////////////////////////////////////////////////////////
    //
    // Patterns
    //
    ////////////////////////////////////////////////////////////////////////////

    pattern: ($) => choice($.variable, $.pat_list, $.pat_tuple),

    pat_list: ($) => list($.pattern),
    pat_tuple: ($) => tuple($.pattern),

    ////////////////////////////////////////////////////////////////////////////
    //
    // Expressions
    //
    ////////////////////////////////////////////////////////////////////////////

    expression: ($) => choice($.variable, $.term, $.macro_application),

    macro_application: ($) =>
      seq(QUESTION, $._identifier, opt(args($.expression))),

    variable: ($) => $._identifier,

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

    atom: ($) => field("value", choice($.quoted_atom, $.unquoted_atom)),
    quoted_atom: ($) => /'[\W!\.!"_#%@^&\*\(\)\{\}\[\]]+'/,
    unquoted_atom: ($) => /[a-z][a-zA-Z_0-9]*/,

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

    char: ($) => /\$./,
    /// NOTE(@ostera): this is an obviously incomplete regex for strings
    string: ($) => /".*"/,

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
