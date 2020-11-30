module.exports = grammar({
  name: "erlang",
  rules: {
    source_file: $ => repeat($._structure_item),

    _structure_item: $ => choice(
      $.term,
    ),

    term: $ => choice(
      $.atom,
      $.float,
      $.integer,
    ),

    atom: $ => choice(
      $.quoted_atom,
      $.unquoted_atom
    ),
    quoted_atom: $ => seq(/'/, /[\W!.!"_#%@^&\*\(\)\{\}\[\]]+/, /'/),
    unquoted_atom: $ => /[a-z][a-zA-Z_0-9.]*/,

    integer: $ => /\d+/,
    float: $ => /\d+.\d+(e\d+)?/,
  }
})
