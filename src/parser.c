#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_comment = 1,
  sym__identifier = 2,
  aux_sym_variable_token1 = 3,
  aux_sym_quoted_atom_token1 = 4,
  aux_sym_quoted_atom_token2 = 5,
  sym_unquoted_atom = 6,
  aux_sym_integer_token1 = 7,
  aux_sym_integer_token2 = 8,
  aux_sym_integer_token3 = 9,
  sym_float = 10,
  sym_char = 11,
  sym_string = 12,
  aux_sym_binary_string_token1 = 13,
  anon_sym_COMMA = 14,
  aux_sym_binary_string_token2 = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  aux_sym_bin_sized_token1 = 18,
  aux_sym_bin_type_list_token1 = 19,
  anon_sym_DASH = 20,
  anon_sym_big = 21,
  anon_sym_binary = 22,
  anon_sym_bits = 23,
  anon_sym_bitstring = 24,
  anon_sym_bytes = 25,
  anon_sym_float = 26,
  anon_sym_integer = 27,
  anon_sym_little = 28,
  anon_sym_native = 29,
  anon_sym_signed = 30,
  anon_sym_unsigned = 31,
  anon_sym_utf16 = 32,
  anon_sym_utf32 = 33,
  anon_sym_utf8 = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_LBRACK = 37,
  anon_sym_RBRACK = 38,
  anon_sym_POUND_LBRACE = 39,
  anon_sym_EQ_GT = 40,
  anon_sym_POUND = 41,
  anon_sym_EQ = 42,
  sym_source_file = 43,
  sym__structure_item = 44,
  sym_expression = 45,
  sym_variable = 46,
  sym_term = 47,
  sym_atom = 48,
  sym_quoted_atom = 49,
  sym_integer = 50,
  sym_binary_string = 51,
  sym_bin_part = 52,
  sym_bin_sized = 53,
  sym_bin_type_list = 54,
  sym_bin_type = 55,
  sym_tuple = 56,
  sym_list = 57,
  sym_map = 58,
  sym_map_entry = 59,
  sym_record = 60,
  sym_record_field = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_binary_string_repeat1 = 63,
  aux_sym_bin_type_list_repeat1 = 64,
  aux_sym_tuple_repeat1 = 65,
  aux_sym_map_repeat1 = 66,
  aux_sym_record_repeat1 = 67,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__identifier] = "_identifier",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_quoted_atom_token1] = "quoted_atom_token1",
  [aux_sym_quoted_atom_token2] = "quoted_atom_token2",
  [sym_unquoted_atom] = "unquoted_atom",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [sym_float] = "float",
  [sym_char] = "char",
  [sym_string] = "string",
  [aux_sym_binary_string_token1] = "binary_string_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_binary_string_token2] = "binary_string_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_bin_sized_token1] = "bin_sized_token1",
  [aux_sym_bin_type_list_token1] = "bin_type_list_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_big] = "big",
  [anon_sym_binary] = "binary",
  [anon_sym_bits] = "bits",
  [anon_sym_bitstring] = "bitstring",
  [anon_sym_bytes] = "bytes",
  [anon_sym_float] = "float",
  [anon_sym_integer] = "integer",
  [anon_sym_little] = "little",
  [anon_sym_native] = "native",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_utf16] = "utf16",
  [anon_sym_utf32] = "utf32",
  [anon_sym_utf8] = "utf8",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_POUND] = "#",
  [anon_sym_EQ] = "=",
  [sym_source_file] = "source_file",
  [sym__structure_item] = "_structure_item",
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_quoted_atom] = "quoted_atom",
  [sym_integer] = "integer",
  [sym_binary_string] = "binary_string",
  [sym_bin_part] = "bin_part",
  [sym_bin_sized] = "bin_sized",
  [sym_bin_type_list] = "bin_type_list",
  [sym_bin_type] = "bin_type",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_map_entry] = "map_entry",
  [sym_record] = "record",
  [sym_record_field] = "record_field",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__identifier] = sym__identifier,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [aux_sym_quoted_atom_token1] = aux_sym_quoted_atom_token1,
  [aux_sym_quoted_atom_token2] = aux_sym_quoted_atom_token2,
  [sym_unquoted_atom] = sym_unquoted_atom,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [sym_float] = sym_float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [aux_sym_binary_string_token1] = aux_sym_binary_string_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_binary_string_token2] = aux_sym_binary_string_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_bin_sized_token1] = aux_sym_bin_sized_token1,
  [aux_sym_bin_type_list_token1] = aux_sym_bin_type_list_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_big] = anon_sym_big,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_bitstring] = anon_sym_bitstring,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_little] = anon_sym_little,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_utf16] = anon_sym_utf16,
  [anon_sym_utf32] = anon_sym_utf32,
  [anon_sym_utf8] = anon_sym_utf8,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_source_file] = sym_source_file,
  [sym__structure_item] = sym__structure_item,
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym_term] = sym_term,
  [sym_atom] = sym_atom,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_integer] = sym_integer,
  [sym_binary_string] = sym_binary_string,
  [sym_bin_part] = sym_bin_part,
  [sym_bin_sized] = sym_bin_sized,
  [sym_bin_type_list] = sym_bin_type_list,
  [sym_bin_type] = sym_bin_type,
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_map_entry] = sym_map_entry,
  [sym_record] = sym_record,
  [sym_record_field] = sym_record_field,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_atom_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_atom] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_binary_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bin_sized_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_type_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_big] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_little] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__structure_item] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_part] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_sized] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_record_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_value = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_quoted_atom_token2_character_set_1(int32_t lookahead) {
  return
    ('!' <= lookahead && lookahead <= '#') ||
    lookahead == '%' ||
    lookahead == '&' ||
    ('(' <= lookahead && lookahead <= '*') ||
    lookahead == '.' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('@' <= lookahead && lookahead <= '[') ||
    (']' <= lookahead && lookahead <= '_') ||
    ('a' <= lookahead && lookahead <= '{') ||
    lookahead == '}';
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(139);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '2') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '8') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(147);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(189);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(128);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(129);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '3') ADVANCE(79);
      if (lookahead == '8') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(128);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(129);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '6') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '6') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '*') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '2') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_big);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_little);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(189);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 71},
  [3] = {.lex_state = 71},
  [4] = {.lex_state = 71},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 71},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 71},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 71},
  [21] = {.lex_state = 71},
  [22] = {.lex_state = 71},
  [23] = {.lex_state = 71},
  [24] = {.lex_state = 71},
  [25] = {.lex_state = 71},
  [26] = {.lex_state = 71},
  [27] = {.lex_state = 71},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 71},
  [30] = {.lex_state = 71},
  [31] = {.lex_state = 71},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 71},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 71},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 71},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 8},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_quoted_atom_token1] = ACTIONS(1),
    [sym_unquoted_atom] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_binary_string_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_binary_string_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_bin_sized_token1] = ACTIONS(1),
    [aux_sym_bin_type_list_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_big] = ACTIONS(1),
    [anon_sym_binary] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_bitstring] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_little] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_utf16] = ACTIONS(1),
    [anon_sym_utf32] = ACTIONS(1),
    [anon_sym_utf8] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(82),
    [sym__structure_item] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_variable] = STATE(35),
    [sym_term] = STATE(35),
    [sym_atom] = STATE(32),
    [sym_quoted_atom] = STATE(18),
    [sym_integer] = STATE(32),
    [sym_binary_string] = STATE(32),
    [sym_tuple] = STATE(32),
    [sym_list] = STATE(32),
    [sym_map] = STATE(32),
    [sym_record] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [aux_sym_variable_token1] = ACTIONS(9),
    [aux_sym_quoted_atom_token1] = ACTIONS(11),
    [sym_unquoted_atom] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_integer_token3] = ACTIONS(15),
    [sym_float] = ACTIONS(17),
    [sym_char] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [aux_sym_binary_string_token1] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_POUND_LBRACE] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym__identifier,
    ACTIONS(37), 1,
      aux_sym_variable_token1,
    ACTIONS(40), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(43), 1,
      sym_unquoted_atom,
    ACTIONS(52), 1,
      aux_sym_binary_string_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(64), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(46), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(49), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(2), 3,
      sym__structure_item,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [65] = 17,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      aux_sym_variable_token1,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_comment,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(2), 3,
      sym__structure_item,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [130] = 16,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      aux_sym_variable_token1,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(55), 1,
      sym_expression,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [190] = 16,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      aux_sym_variable_token1,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(65), 1,
      sym_expression,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [250] = 15,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      aux_sym_variable_token1,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(78), 1,
      sym_expression,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [307] = 15,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      aux_sym_variable_token1,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(74), 1,
      sym_expression,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [364] = 15,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      aux_sym_variable_token1,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(70), 1,
      sym_expression,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [421] = 2,
    ACTIONS(77), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(75), 20,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_RPAREN,
      aux_sym_bin_sized_token1,
      aux_sym_bin_type_list_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [452] = 15,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      aux_sym_variable_token1,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(58), 1,
      sym_expression,
    STATE(35), 2,
      sym_variable,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [509] = 14,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(66), 1,
      sym_record_field,
    STATE(77), 1,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [562] = 14,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(61), 1,
      sym_map_entry,
    STATE(76), 1,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [615] = 2,
    ACTIONS(85), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(83), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [643] = 2,
    ACTIONS(89), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(87), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [671] = 2,
    ACTIONS(93), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(91), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [699] = 2,
    ACTIONS(97), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(95), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [727] = 2,
    ACTIONS(101), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(99), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [755] = 2,
    ACTIONS(105), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(103), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [783] = 13,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(75), 1,
      sym_record_field,
    STATE(77), 1,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [833] = 2,
    ACTIONS(109), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(107), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [861] = 2,
    ACTIONS(113), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [889] = 2,
    ACTIONS(117), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(115), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [917] = 2,
    ACTIONS(121), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(119), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [945] = 2,
    ACTIONS(125), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(123), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [973] = 2,
    ACTIONS(129), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(127), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [1001] = 2,
    ACTIONS(133), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(131), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [1029] = 2,
    ACTIONS(137), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(135), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [1057] = 13,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    ACTIONS(19), 1,
      aux_sym_binary_string_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(67), 1,
      sym_map_entry,
    STATE(76), 1,
      sym_term,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(17), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(32), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [1107] = 2,
    ACTIONS(141), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(139), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [1135] = 2,
    ACTIONS(145), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(143), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [1163] = 2,
    ACTIONS(149), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(147), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [1191] = 2,
    ACTIONS(153), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(151), 17,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [1219] = 2,
    ACTIONS(157), 5,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(155), 16,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
  [1245] = 2,
    ACTIONS(161), 5,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(159), 16,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
  [1271] = 2,
    ACTIONS(165), 5,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(163), 16,
      ts_builtin_sym_end,
      sym_comment,
      sym__identifier,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
  [1297] = 3,
    ACTIONS(169), 1,
      anon_sym_bits,
    STATE(43), 1,
      sym_bin_type,
    ACTIONS(167), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [1319] = 3,
    ACTIONS(169), 1,
      anon_sym_bits,
    STATE(53), 1,
      sym_bin_type,
    ACTIONS(167), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [1341] = 6,
    ACTIONS(173), 1,
      aux_sym_binary_string_token2,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_integer,
    STATE(59), 1,
      sym_bin_part,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1363] = 5,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_integer,
    STATE(71), 1,
      sym_bin_part,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(15), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1382] = 5,
    ACTIONS(179), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(181), 1,
      aux_sym_bin_type_list_token1,
    STATE(45), 1,
      sym_bin_sized,
    STATE(69), 1,
      sym_bin_type_list,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1399] = 5,
    ACTIONS(179), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(181), 1,
      aux_sym_bin_type_list_token1,
    STATE(47), 1,
      sym_bin_sized,
    STATE(68), 1,
      sym_bin_type_list,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1416] = 3,
    ACTIONS(185), 1,
      aux_sym_integer_token2,
    STATE(51), 1,
      sym_integer,
    ACTIONS(15), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [1427] = 3,
    ACTIONS(189), 1,
      anon_sym_DASH,
    STATE(44), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1438] = 3,
    ACTIONS(189), 1,
      anon_sym_DASH,
    STATE(49), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1449] = 3,
    ACTIONS(181), 1,
      aux_sym_bin_type_list_token1,
    STATE(73), 1,
      sym_bin_type_list,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1460] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1471] = 3,
    ACTIONS(181), 1,
      aux_sym_bin_type_list_token1,
    STATE(72), 1,
      sym_bin_type_list,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1482] = 4,
    ACTIONS(11), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(13), 1,
      sym_unquoted_atom,
    STATE(18), 1,
      sym_quoted_atom,
    STATE(81), 1,
      sym_atom,
  [1495] = 3,
    ACTIONS(204), 1,
      anon_sym_DASH,
    STATE(49), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1506] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_record_repeat1,
  [1516] = 1,
    ACTIONS(211), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [1522] = 1,
    ACTIONS(213), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [1528] = 1,
    ACTIONS(202), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [1534] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_record_repeat1,
  [1544] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_tuple_repeat1,
  [1554] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_map_repeat1,
  [1564] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      aux_sym_binary_string_token2,
    STATE(57), 1,
      aux_sym_binary_string_repeat1,
  [1574] = 1,
    ACTIONS(198), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1580] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      aux_sym_binary_string_token2,
    STATE(63), 1,
      aux_sym_binary_string_repeat1,
  [1590] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_tuple_repeat1,
  [1600] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_map_repeat1,
  [1610] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_tuple_repeat1,
  [1620] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      aux_sym_binary_string_token2,
    STATE(57), 1,
      aux_sym_binary_string_repeat1,
  [1630] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_map_repeat1,
  [1640] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_tuple_repeat1,
  [1650] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_record_repeat1,
  [1660] = 1,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1665] = 1,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1670] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1675] = 1,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1680] = 1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1685] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1690] = 1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1695] = 1,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1700] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1705] = 1,
    ACTIONS(260), 1,
      anon_sym_EQ_GT,
  [1709] = 1,
    ACTIONS(262), 1,
      anon_sym_EQ,
  [1713] = 1,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
  [1717] = 1,
    ACTIONS(266), 1,
      sym__identifier,
  [1721] = 1,
    ACTIONS(268), 1,
      aux_sym_quoted_atom_token1,
  [1725] = 1,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
  [1729] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [1733] = 1,
    ACTIONS(274), 1,
      aux_sym_quoted_atom_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 190,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 307,
  [SMALL_STATE(8)] = 364,
  [SMALL_STATE(9)] = 421,
  [SMALL_STATE(10)] = 452,
  [SMALL_STATE(11)] = 509,
  [SMALL_STATE(12)] = 562,
  [SMALL_STATE(13)] = 615,
  [SMALL_STATE(14)] = 643,
  [SMALL_STATE(15)] = 671,
  [SMALL_STATE(16)] = 699,
  [SMALL_STATE(17)] = 727,
  [SMALL_STATE(18)] = 755,
  [SMALL_STATE(19)] = 783,
  [SMALL_STATE(20)] = 833,
  [SMALL_STATE(21)] = 861,
  [SMALL_STATE(22)] = 889,
  [SMALL_STATE(23)] = 917,
  [SMALL_STATE(24)] = 945,
  [SMALL_STATE(25)] = 973,
  [SMALL_STATE(26)] = 1001,
  [SMALL_STATE(27)] = 1029,
  [SMALL_STATE(28)] = 1057,
  [SMALL_STATE(29)] = 1107,
  [SMALL_STATE(30)] = 1135,
  [SMALL_STATE(31)] = 1163,
  [SMALL_STATE(32)] = 1191,
  [SMALL_STATE(33)] = 1219,
  [SMALL_STATE(34)] = 1245,
  [SMALL_STATE(35)] = 1271,
  [SMALL_STATE(36)] = 1297,
  [SMALL_STATE(37)] = 1319,
  [SMALL_STATE(38)] = 1341,
  [SMALL_STATE(39)] = 1363,
  [SMALL_STATE(40)] = 1382,
  [SMALL_STATE(41)] = 1399,
  [SMALL_STATE(42)] = 1416,
  [SMALL_STATE(43)] = 1427,
  [SMALL_STATE(44)] = 1438,
  [SMALL_STATE(45)] = 1449,
  [SMALL_STATE(46)] = 1460,
  [SMALL_STATE(47)] = 1471,
  [SMALL_STATE(48)] = 1482,
  [SMALL_STATE(49)] = 1495,
  [SMALL_STATE(50)] = 1506,
  [SMALL_STATE(51)] = 1516,
  [SMALL_STATE(52)] = 1522,
  [SMALL_STATE(53)] = 1528,
  [SMALL_STATE(54)] = 1534,
  [SMALL_STATE(55)] = 1544,
  [SMALL_STATE(56)] = 1554,
  [SMALL_STATE(57)] = 1564,
  [SMALL_STATE(58)] = 1574,
  [SMALL_STATE(59)] = 1580,
  [SMALL_STATE(60)] = 1590,
  [SMALL_STATE(61)] = 1600,
  [SMALL_STATE(62)] = 1610,
  [SMALL_STATE(63)] = 1620,
  [SMALL_STATE(64)] = 1630,
  [SMALL_STATE(65)] = 1640,
  [SMALL_STATE(66)] = 1650,
  [SMALL_STATE(67)] = 1660,
  [SMALL_STATE(68)] = 1665,
  [SMALL_STATE(69)] = 1670,
  [SMALL_STATE(70)] = 1675,
  [SMALL_STATE(71)] = 1680,
  [SMALL_STATE(72)] = 1685,
  [SMALL_STATE(73)] = 1690,
  [SMALL_STATE(74)] = 1695,
  [SMALL_STATE(75)] = 1700,
  [SMALL_STATE(76)] = 1705,
  [SMALL_STATE(77)] = 1709,
  [SMALL_STATE(78)] = 1713,
  [SMALL_STATE(79)] = 1717,
  [SMALL_STATE(80)] = 1721,
  [SMALL_STATE(81)] = 1725,
  [SMALL_STATE(82)] = 1729,
  [SMALL_STATE(83)] = 1733,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 4),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(10),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(37),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(19),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(39),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(28),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_erlang(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
