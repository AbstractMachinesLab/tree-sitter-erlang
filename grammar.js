module.exports = grammar({
  name: "erlang",
  rules: {
    source_file: ($) => repeat($._structure_item),

    _structure_item: ($) => choice($.term),

    term: ($) => choice($.atom, $.float, $.integer, $.binary_string),

    atom: ($) => field("value", choice($.quoted_atom, $.unquoted_atom)),
    quoted_atom: ($) => seq(/'/, /[\W!.!"_#%@^&\*\(\)\{\}\[\]]+/, /'/),
    unquoted_atom: ($) => /[a-z][a-zA-Z_0-9.]*/,

    integer: ($) => /\d+/,
    float: ($) => /\d+\.\d+(e\d+)?/,

    binary_string: ($) =>
      seq(
        /<</,
        optional(
          seq(
            choice($.integer, $.float),
            optional($.bin_sized),
            optional($.bin_type_list)
          )
        ),
        />>/
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
  },
});
