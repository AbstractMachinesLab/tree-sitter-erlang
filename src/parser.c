#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__identifier = 1,
  aux_sym_variable_token1 = 2,
  aux_sym_quoted_atom_token1 = 3,
  aux_sym_quoted_atom_token2 = 4,
  sym_unquoted_atom = 5,
  aux_sym_integer_token1 = 6,
  aux_sym_integer_token2 = 7,
  aux_sym_integer_token3 = 8,
  sym_float = 9,
  sym_char = 10,
  sym_string = 11,
  aux_sym_binary_string_token1 = 12,
  anon_sym_COMMA = 13,
  aux_sym_binary_string_token2 = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  aux_sym_bin_sized_token1 = 17,
  aux_sym_bin_type_list_token1 = 18,
  anon_sym_DASH = 19,
  anon_sym_big = 20,
  anon_sym_binary = 21,
  anon_sym_bits = 22,
  anon_sym_bitstring = 23,
  anon_sym_bytes = 24,
  anon_sym_float = 25,
  anon_sym_integer = 26,
  anon_sym_little = 27,
  anon_sym_native = 28,
  anon_sym_signed = 29,
  anon_sym_unsigned = 30,
  anon_sym_utf16 = 31,
  anon_sym_utf32 = 32,
  anon_sym_utf8 = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  anon_sym_POUND_LBRACE = 38,
  anon_sym_EQ_GT = 39,
  anon_sym_POUND = 40,
  anon_sym_EQ = 41,
  sym_source_file = 42,
  sym__structure_item = 43,
  sym_expression = 44,
  sym_variable = 45,
  sym_term = 46,
  sym_atom = 47,
  sym_quoted_atom = 48,
  sym_integer = 49,
  sym_binary_string = 50,
  sym_bin_part = 51,
  sym_bin_sized = 52,
  sym_bin_type_list = 53,
  sym_bin_type = 54,
  sym_tuple = 55,
  sym_list = 56,
  sym_map = 57,
  sym_map_entry = 58,
  sym_record = 59,
  sym_record_field = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_binary_string_repeat1 = 62,
  aux_sym_bin_type_list_repeat1 = 63,
  aux_sym_tuple_repeat1 = 64,
  aux_sym_map_repeat1 = 65,
  aux_sym_record_repeat1 = 66,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '}') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '}') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(137);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '2') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '8') ADVANCE(180);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(178);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(176);
      END_STATE();
    case 12:
      if (lookahead == '<') ADVANCE(145);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(187);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(127);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '}') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == '3') ADVANCE(77);
      if (lookahead == '8') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(127);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '6') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '6') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '2') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_big);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_little);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 70},
  [8] = {.lex_state = 70},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 70},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 70},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 7},
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
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym__structure_item] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_variable] = STATE(34),
    [sym_term] = STATE(34),
    [sym_atom] = STATE(20),
    [sym_quoted_atom] = STATE(17),
    [sym_integer] = STATE(20),
    [sym_binary_string] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [aux_sym_variable_token1] = ACTIONS(7),
    [aux_sym_quoted_atom_token1] = ACTIONS(9),
    [sym_unquoted_atom] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_integer_token3] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [sym_char] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [aux_sym_binary_string_token1] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_POUND_LBRACE] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(3), 3,
      sym__structure_item,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [62] = 16,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(34), 1,
      aux_sym_variable_token1,
    ACTIONS(37), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(40), 1,
      sym_unquoted_atom,
    ACTIONS(49), 1,
      aux_sym_binary_string_token1,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(61), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(43), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(46), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(3), 3,
      sym__structure_item,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [124] = 16,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(54), 1,
      sym_expression,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [184] = 16,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(51), 1,
      sym_expression,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [244] = 15,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(73), 1,
      sym_expression,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [301] = 15,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(70), 1,
      sym_expression,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [358] = 15,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(58), 1,
      sym_expression,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [415] = 15,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(78), 1,
      sym_expression,
    STATE(34), 2,
      sym_variable,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [472] = 2,
    ACTIONS(70), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(68), 19,
      ts_builtin_sym_end,
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
  [502] = 14,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(66), 1,
      sym_record_field,
    STATE(76), 1,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [555] = 14,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(64), 1,
      sym_map_entry,
    STATE(79), 1,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [608] = 13,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(74), 1,
      sym_record_field,
    STATE(76), 1,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [658] = 13,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    ACTIONS(17), 1,
      aux_sym_binary_string_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(69), 1,
      sym_map_entry,
    STATE(79), 1,
      sym_term,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(15), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [708] = 2,
    ACTIONS(78), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(76), 16,
      ts_builtin_sym_end,
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
  [735] = 2,
    ACTIONS(82), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(80), 16,
      ts_builtin_sym_end,
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
  [762] = 2,
    ACTIONS(86), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(84), 16,
      ts_builtin_sym_end,
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
  [789] = 2,
    ACTIONS(90), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(88), 16,
      ts_builtin_sym_end,
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
  [816] = 2,
    ACTIONS(94), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(92), 16,
      ts_builtin_sym_end,
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
  [843] = 2,
    ACTIONS(98), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(96), 16,
      ts_builtin_sym_end,
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
  [870] = 2,
    ACTIONS(102), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(100), 16,
      ts_builtin_sym_end,
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
  [897] = 2,
    ACTIONS(106), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(104), 16,
      ts_builtin_sym_end,
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
  [924] = 2,
    ACTIONS(110), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
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
  [951] = 2,
    ACTIONS(114), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(112), 16,
      ts_builtin_sym_end,
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
  [978] = 2,
    ACTIONS(118), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
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
  [1005] = 2,
    ACTIONS(122), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
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
  [1032] = 2,
    ACTIONS(126), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
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
  [1059] = 2,
    ACTIONS(130), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
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
  [1086] = 2,
    ACTIONS(134), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(132), 16,
      ts_builtin_sym_end,
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
  [1113] = 2,
    ACTIONS(138), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(136), 16,
      ts_builtin_sym_end,
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
  [1140] = 2,
    ACTIONS(142), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(140), 16,
      ts_builtin_sym_end,
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
  [1167] = 2,
    ACTIONS(146), 6,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(144), 16,
      ts_builtin_sym_end,
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
  [1194] = 2,
    ACTIONS(150), 5,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(148), 15,
      ts_builtin_sym_end,
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
  [1219] = 2,
    ACTIONS(154), 5,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(152), 15,
      ts_builtin_sym_end,
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
  [1244] = 2,
    ACTIONS(158), 5,
      aux_sym_variable_token1,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(156), 15,
      ts_builtin_sym_end,
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
  [1269] = 3,
    ACTIONS(162), 1,
      anon_sym_bits,
    STATE(45), 1,
      sym_bin_type,
    ACTIONS(160), 13,
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
  [1291] = 3,
    ACTIONS(162), 1,
      anon_sym_bits,
    STATE(55), 1,
      sym_bin_type,
    ACTIONS(160), 13,
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
  [1313] = 6,
    ACTIONS(166), 1,
      aux_sym_binary_string_token2,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_integer,
    STATE(53), 1,
      sym_bin_part,
    ACTIONS(164), 2,
      sym_float,
      sym_string,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1335] = 5,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_integer,
    STATE(71), 1,
      sym_bin_part,
    ACTIONS(164), 2,
      sym_float,
      sym_string,
    ACTIONS(13), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1354] = 5,
    ACTIONS(172), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(174), 1,
      aux_sym_bin_type_list_token1,
    STATE(42), 1,
      sym_bin_sized,
    STATE(67), 1,
      sym_bin_type_list,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1371] = 5,
    ACTIONS(172), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(174), 1,
      aux_sym_bin_type_list_token1,
    STATE(48), 1,
      sym_bin_sized,
    STATE(68), 1,
      sym_bin_type_list,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1388] = 3,
    ACTIONS(174), 1,
      aux_sym_bin_type_list_token1,
    STATE(75), 1,
      sym_bin_type_list,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1399] = 3,
    ACTIONS(180), 1,
      aux_sym_integer_token2,
    STATE(50), 1,
      sym_integer,
    ACTIONS(13), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [1410] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1421] = 3,
    ACTIONS(189), 1,
      anon_sym_DASH,
    STATE(46), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1432] = 3,
    ACTIONS(189), 1,
      anon_sym_DASH,
    STATE(49), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1443] = 4,
    ACTIONS(9), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(11), 1,
      sym_unquoted_atom,
    STATE(17), 1,
      sym_quoted_atom,
    STATE(77), 1,
      sym_atom,
  [1456] = 3,
    ACTIONS(174), 1,
      aux_sym_bin_type_list_token1,
    STATE(72), 1,
      sym_bin_type_list,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1467] = 3,
    ACTIONS(197), 1,
      anon_sym_DASH,
    STATE(49), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1478] = 1,
    ACTIONS(200), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [1484] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_tuple_repeat1,
  [1494] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_record_repeat1,
  [1504] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      aux_sym_binary_string_token2,
    STATE(61), 1,
      aux_sym_binary_string_repeat1,
  [1514] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_tuple_repeat1,
  [1524] = 1,
    ACTIONS(195), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [1530] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_map_repeat1,
  [1540] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      aux_sym_binary_string_token2,
    STATE(57), 1,
      aux_sym_binary_string_repeat1,
  [1550] = 1,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1556] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_tuple_repeat1,
  [1566] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_tuple_repeat1,
  [1576] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      aux_sym_binary_string_token2,
    STATE(57), 1,
      aux_sym_binary_string_repeat1,
  [1586] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_record_repeat1,
  [1596] = 1,
    ACTIONS(236), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [1602] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_map_repeat1,
  [1612] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_map_repeat1,
  [1622] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_record_repeat1,
  [1632] = 1,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1637] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1642] = 1,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1647] = 1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1652] = 1,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1657] = 1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1662] = 1,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1667] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1672] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1677] = 1,
    ACTIONS(253), 1,
      anon_sym_EQ,
  [1681] = 1,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [1685] = 1,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
  [1689] = 1,
    ACTIONS(259), 1,
      anon_sym_EQ_GT,
  [1693] = 1,
    ACTIONS(261), 1,
      aux_sym_quoted_atom_token2,
  [1697] = 1,
    ACTIONS(263), 1,
      sym__identifier,
  [1701] = 1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
  [1705] = 1,
    ACTIONS(267), 1,
      aux_sym_quoted_atom_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 184,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 301,
  [SMALL_STATE(8)] = 358,
  [SMALL_STATE(9)] = 415,
  [SMALL_STATE(10)] = 472,
  [SMALL_STATE(11)] = 502,
  [SMALL_STATE(12)] = 555,
  [SMALL_STATE(13)] = 608,
  [SMALL_STATE(14)] = 658,
  [SMALL_STATE(15)] = 708,
  [SMALL_STATE(16)] = 735,
  [SMALL_STATE(17)] = 762,
  [SMALL_STATE(18)] = 789,
  [SMALL_STATE(19)] = 816,
  [SMALL_STATE(20)] = 843,
  [SMALL_STATE(21)] = 870,
  [SMALL_STATE(22)] = 897,
  [SMALL_STATE(23)] = 924,
  [SMALL_STATE(24)] = 951,
  [SMALL_STATE(25)] = 978,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1032,
  [SMALL_STATE(28)] = 1059,
  [SMALL_STATE(29)] = 1086,
  [SMALL_STATE(30)] = 1113,
  [SMALL_STATE(31)] = 1140,
  [SMALL_STATE(32)] = 1167,
  [SMALL_STATE(33)] = 1194,
  [SMALL_STATE(34)] = 1219,
  [SMALL_STATE(35)] = 1244,
  [SMALL_STATE(36)] = 1269,
  [SMALL_STATE(37)] = 1291,
  [SMALL_STATE(38)] = 1313,
  [SMALL_STATE(39)] = 1335,
  [SMALL_STATE(40)] = 1354,
  [SMALL_STATE(41)] = 1371,
  [SMALL_STATE(42)] = 1388,
  [SMALL_STATE(43)] = 1399,
  [SMALL_STATE(44)] = 1410,
  [SMALL_STATE(45)] = 1421,
  [SMALL_STATE(46)] = 1432,
  [SMALL_STATE(47)] = 1443,
  [SMALL_STATE(48)] = 1456,
  [SMALL_STATE(49)] = 1467,
  [SMALL_STATE(50)] = 1478,
  [SMALL_STATE(51)] = 1484,
  [SMALL_STATE(52)] = 1494,
  [SMALL_STATE(53)] = 1504,
  [SMALL_STATE(54)] = 1514,
  [SMALL_STATE(55)] = 1524,
  [SMALL_STATE(56)] = 1530,
  [SMALL_STATE(57)] = 1540,
  [SMALL_STATE(58)] = 1550,
  [SMALL_STATE(59)] = 1556,
  [SMALL_STATE(60)] = 1566,
  [SMALL_STATE(61)] = 1576,
  [SMALL_STATE(62)] = 1586,
  [SMALL_STATE(63)] = 1596,
  [SMALL_STATE(64)] = 1602,
  [SMALL_STATE(65)] = 1612,
  [SMALL_STATE(66)] = 1622,
  [SMALL_STATE(67)] = 1632,
  [SMALL_STATE(68)] = 1637,
  [SMALL_STATE(69)] = 1642,
  [SMALL_STATE(70)] = 1647,
  [SMALL_STATE(71)] = 1652,
  [SMALL_STATE(72)] = 1657,
  [SMALL_STATE(73)] = 1662,
  [SMALL_STATE(74)] = 1667,
  [SMALL_STATE(75)] = 1672,
  [SMALL_STATE(76)] = 1677,
  [SMALL_STATE(77)] = 1681,
  [SMALL_STATE(78)] = 1685,
  [SMALL_STATE(79)] = 1689,
  [SMALL_STATE(80)] = 1693,
  [SMALL_STATE(81)] = 1697,
  [SMALL_STATE(82)] = 1701,
  [SMALL_STATE(83)] = 1705,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(37),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(39),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(14),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
