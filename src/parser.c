#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  aux_sym_quoted_atom_token1 = 1,
  aux_sym_quoted_atom_token2 = 2,
  sym_unquoted_atom = 3,
  aux_sym_integer_token1 = 4,
  aux_sym_integer_token2 = 5,
  aux_sym_integer_token3 = 6,
  sym_float = 7,
  sym_char = 8,
  sym_string = 9,
  aux_sym_binary_string_token1 = 10,
  anon_sym_COMMA = 11,
  aux_sym_binary_string_token2 = 12,
  aux_sym_bin_sized_token1 = 13,
  aux_sym_bin_type_list_token1 = 14,
  anon_sym_DASH = 15,
  anon_sym_big = 16,
  anon_sym_binary = 17,
  anon_sym_bits = 18,
  anon_sym_bitstring = 19,
  anon_sym_bytes = 20,
  anon_sym_float = 21,
  anon_sym_integer = 22,
  anon_sym_little = 23,
  anon_sym_native = 24,
  anon_sym_signed = 25,
  anon_sym_unsigned = 26,
  anon_sym_utf16 = 27,
  anon_sym_utf32 = 28,
  anon_sym_utf8 = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_POUND_LBRACE = 34,
  anon_sym_EQ_GT = 35,
  sym_source_file = 36,
  sym__structure_item = 37,
  sym_term = 38,
  sym_atom = 39,
  sym_quoted_atom = 40,
  sym_integer = 41,
  sym_binary_string = 42,
  sym_bin_part = 43,
  sym_bin_sized = 44,
  sym_bin_type_list = 45,
  sym_bin_type = 46,
  sym_tuple = 47,
  sym_list = 48,
  sym_map = 49,
  sym_map_entry = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_binary_string_repeat1 = 52,
  aux_sym_bin_type_list_repeat1 = 53,
  aux_sym_tuple_repeat1 = 54,
  aux_sym_map_repeat1 = 55,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_source_file] = "source_file",
  [sym__structure_item] = "_structure_item",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_source_file] = sym_source_file,
  [sym__structure_item] = sym__structure_item,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__structure_item] = {
    .visible = false,
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
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == '2') ADVANCE(132);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == '2') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == '2') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == '2') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 60:
      if (lookahead == '{') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == '2') ADVANCE(132);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '3') ADVANCE(76);
      if (lookahead == '8') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '6') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '6') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == '2') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_big);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_little);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
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
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 71},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 71},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 71},
  [21] = {.lex_state = 71},
  [22] = {.lex_state = 71},
  [23] = {.lex_state = 71},
  [24] = {.lex_state = 71},
  [25] = {.lex_state = 71},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 71},
  [29] = {.lex_state = 71},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 63},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__structure_item] = STATE(3),
    [sym_term] = STATE(3),
    [sym_atom] = STATE(11),
    [sym_quoted_atom] = STATE(22),
    [sym_integer] = STATE(11),
    [sym_binary_string] = STATE(11),
    [sym_tuple] = STATE(11),
    [sym_list] = STATE(11),
    [sym_map] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_quoted_atom_token1] = ACTIONS(5),
    [sym_unquoted_atom] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(9),
    [aux_sym_integer_token3] = ACTIONS(9),
    [sym_float] = ACTIONS(11),
    [sym_char] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [aux_sym_binary_string_token1] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(26), 1,
      sym_unquoted_atom,
    ACTIONS(35), 1,
      aux_sym_binary_string_token1,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_POUND_LBRACE,
    STATE(22), 1,
      sym_quoted_atom,
    ACTIONS(29), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(32), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(2), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [48] = 12,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_quoted_atom,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(2), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [96] = 13,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_quoted_atom,
    STATE(37), 1,
      sym_map_entry,
    STATE(59), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [145] = 12,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym_quoted_atom,
    STATE(40), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [191] = 12,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND_LBRACE,
    STATE(22), 1,
      sym_quoted_atom,
    STATE(52), 1,
      sym_map_entry,
    STATE(59), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [237] = 12,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_quoted_atom,
    STATE(46), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [283] = 11,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND_LBRACE,
    STATE(22), 1,
      sym_quoted_atom,
    STATE(51), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [326] = 2,
    ACTIONS(57), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(55), 17,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      aux_sym_bin_sized_token1,
      aux_sym_bin_type_list_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [351] = 11,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND_LBRACE,
    STATE(22), 1,
      sym_quoted_atom,
    STATE(38), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(11), 6,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
  [394] = 2,
    ACTIONS(61), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(59), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [416] = 2,
    ACTIONS(65), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(63), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [438] = 2,
    ACTIONS(69), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(67), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [460] = 2,
    ACTIONS(73), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(71), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [482] = 2,
    ACTIONS(77), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(75), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [504] = 2,
    ACTIONS(81), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [526] = 2,
    ACTIONS(85), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(83), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [548] = 2,
    ACTIONS(89), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(87), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [570] = 2,
    ACTIONS(93), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(91), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [592] = 2,
    ACTIONS(97), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(95), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [614] = 2,
    ACTIONS(101), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(99), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [636] = 2,
    ACTIONS(105), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(103), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [658] = 2,
    ACTIONS(109), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [680] = 2,
    ACTIONS(113), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [702] = 2,
    ACTIONS(117), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(115), 14,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_GT,
  [724] = 3,
    ACTIONS(121), 1,
      anon_sym_bits,
    STATE(39), 1,
      sym_bin_type,
    ACTIONS(119), 13,
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
  [746] = 3,
    ACTIONS(121), 1,
      anon_sym_bits,
    STATE(31), 1,
      sym_bin_type,
    ACTIONS(119), 13,
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
  [768] = 5,
    ACTIONS(125), 1,
      aux_sym_binary_string_token2,
    STATE(30), 1,
      sym_integer,
    STATE(49), 1,
      sym_bin_part,
    ACTIONS(123), 2,
      sym_float,
      sym_string,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [787] = 4,
    STATE(30), 1,
      sym_integer,
    STATE(53), 1,
      sym_bin_part,
    ACTIONS(123), 2,
      sym_float,
      sym_string,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [803] = 5,
    ACTIONS(129), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(131), 1,
      aux_sym_bin_type_list_token1,
    STATE(34), 1,
      sym_bin_sized,
    STATE(55), 1,
      sym_bin_type_list,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [820] = 3,
    ACTIONS(135), 1,
      anon_sym_DASH,
    STATE(33), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [831] = 3,
    ACTIONS(139), 1,
      anon_sym_DASH,
    STATE(32), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [842] = 3,
    ACTIONS(135), 1,
      anon_sym_DASH,
    STATE(32), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [853] = 3,
    ACTIONS(131), 1,
      aux_sym_bin_type_list_token1,
    STATE(54), 1,
      sym_bin_type_list,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [864] = 3,
    ACTIONS(146), 1,
      aux_sym_integer_token2,
    STATE(42), 1,
      sym_integer,
    ACTIONS(9), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [875] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(151), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [886] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_map_repeat1,
  [896] = 1,
    ACTIONS(151), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [902] = 1,
    ACTIONS(137), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [908] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_tuple_repeat1,
  [918] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_map_repeat1,
  [928] = 1,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [934] = 1,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [940] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_tuple_repeat1,
  [950] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_map_repeat1,
  [960] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_tuple_repeat1,
  [970] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      aux_sym_binary_string_token2,
    STATE(47), 1,
      aux_sym_binary_string_repeat1,
  [980] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_tuple_repeat1,
  [990] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      aux_sym_binary_string_token2,
    STATE(50), 1,
      aux_sym_binary_string_repeat1,
  [1000] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      aux_sym_binary_string_token2,
    STATE(47), 1,
      aux_sym_binary_string_repeat1,
  [1010] = 1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1015] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1020] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1025] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1030] = 1,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1035] = 1,
    ACTIONS(193), 1,
      aux_sym_quoted_atom_token2,
  [1039] = 1,
    ACTIONS(195), 1,
      aux_sym_quoted_atom_token1,
  [1043] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [1047] = 1,
    ACTIONS(199), 1,
      anon_sym_EQ_GT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 191,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 283,
  [SMALL_STATE(9)] = 326,
  [SMALL_STATE(10)] = 351,
  [SMALL_STATE(11)] = 394,
  [SMALL_STATE(12)] = 416,
  [SMALL_STATE(13)] = 438,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 482,
  [SMALL_STATE(16)] = 504,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 548,
  [SMALL_STATE(19)] = 570,
  [SMALL_STATE(20)] = 592,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 636,
  [SMALL_STATE(23)] = 658,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 702,
  [SMALL_STATE(26)] = 724,
  [SMALL_STATE(27)] = 746,
  [SMALL_STATE(28)] = 768,
  [SMALL_STATE(29)] = 787,
  [SMALL_STATE(30)] = 803,
  [SMALL_STATE(31)] = 820,
  [SMALL_STATE(32)] = 831,
  [SMALL_STATE(33)] = 842,
  [SMALL_STATE(34)] = 853,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 875,
  [SMALL_STATE(37)] = 886,
  [SMALL_STATE(38)] = 896,
  [SMALL_STATE(39)] = 902,
  [SMALL_STATE(40)] = 908,
  [SMALL_STATE(41)] = 918,
  [SMALL_STATE(42)] = 928,
  [SMALL_STATE(43)] = 934,
  [SMALL_STATE(44)] = 940,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 960,
  [SMALL_STATE(47)] = 970,
  [SMALL_STATE(48)] = 980,
  [SMALL_STATE(49)] = 990,
  [SMALL_STATE(50)] = 1000,
  [SMALL_STATE(51)] = 1010,
  [SMALL_STATE(52)] = 1015,
  [SMALL_STATE(53)] = 1020,
  [SMALL_STATE(54)] = 1025,
  [SMALL_STATE(55)] = 1030,
  [SMALL_STATE(56)] = 1035,
  [SMALL_STATE(57)] = 1039,
  [SMALL_STATE(58)] = 1043,
  [SMALL_STATE(59)] = 1047,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(29),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
