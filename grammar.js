module.exports = grammar({
  name: "erlang",
  rules: {
    source_file: ($) => repeat($._structure_item),

    _structure_item: ($) => choice($.expression),

    expression: ($) => choice($.variable, $.term),

    _identifier: ($) => /[A-Z][a-zA-Z0-9@_]*/,

    variable: ($) => seq(optional(/_/), $._identifier),

    term: ($) =>
      choice(
        $.atom,
        $.binary_string,
        $.char,
        $.float,
        $.integer,
        $.list,
        $.map,
        $.record,
        $.string,
        $.tuple
      ),

    atom: ($) => field("value", choice($.quoted_atom, $.unquoted_atom)),
    quoted_atom: ($) => seq(/'/, /[\W!.!"_#%@^&\*\(\)\{\}\[\]]+/, /'/),
    unquoted_atom: ($) => /[a-z][a-zA-Z_0-9.]*/,

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
      seq(/<</, optional(seq($.bin_part, repeat(seq(",", $.bin_part)))), />>/),
    bin_part: ($) =>
      seq(
        choice($.integer, $.float, $.string),
        optional($.bin_sized),
        optional($.bin_type_list)
      ),
    bin_sized: ($) => seq(/:/, $.integer),
    bin_type_list: ($) =>
      seq(/\//, seq($.bin_type, repeat(seq("-", $.bin_type)))),
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

    tuple: ($) =>
      seq("{", optional(seq($.expression, repeat(seq(",", $.expression)))), "}"),

    list: ($) => seq("[", optional(seq($.expression, repeat(seq(",", $.expression)))), "]"),

    map: ($) =>
      seq("#{", optional(seq($.map_entry, repeat(seq(",", $.map_entry)))), "}"),
    map_entry: ($) => seq($.term, "=>", $.expression),

    record: ($) =>
      seq(
        "#",
        $.atom,
        "{",
        optional(seq($.record_field, repeat(seq(",", $.record_field)))),
        "}"
      ),
    record_field: ($) => seq($.term, "=", $.expression),
  },
});
