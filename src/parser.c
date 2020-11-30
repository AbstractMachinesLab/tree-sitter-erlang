#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  aux_sym_binary_string_token2 = 11,
  aux_sym_bin_sized_token1 = 12,
  aux_sym_bin_type_list_token1 = 13,
  anon_sym_DASH = 14,
  anon_sym_big = 15,
  anon_sym_binary = 16,
  anon_sym_bits = 17,
  anon_sym_bitstring = 18,
  anon_sym_bytes = 19,
  anon_sym_float = 20,
  anon_sym_integer = 21,
  anon_sym_little = 22,
  anon_sym_native = 23,
  anon_sym_signed = 24,
  anon_sym_unsigned = 25,
  anon_sym_utf16 = 26,
  anon_sym_utf32 = 27,
  anon_sym_utf8 = 28,
  anon_sym_LBRACE = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACE = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  sym_source_file = 34,
  sym__structure_item = 35,
  sym_term = 36,
  sym_atom = 37,
  sym_quoted_atom = 38,
  sym_integer = 39,
  sym_binary_string = 40,
  sym_bin_sized = 41,
  sym_bin_type_list = 42,
  sym_bin_type = 43,
  sym_tuple = 44,
  sym_list = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_bin_type_list_repeat1 = 47,
  aux_sym_tuple_repeat1 = 48,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__structure_item] = "_structure_item",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_quoted_atom] = "quoted_atom",
  [sym_integer] = "integer",
  [sym_binary_string] = "binary_string",
  [sym_bin_sized] = "bin_sized",
  [sym_bin_type_list] = "bin_type_list",
  [sym_bin_type] = "bin_type",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__structure_item] = sym__structure_item,
  [sym_term] = sym_term,
  [sym_atom] = sym_atom,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_integer] = sym_integer,
  [sym_binary_string] = sym_binary_string,
  [sym_bin_sized] = sym_bin_sized,
  [sym_bin_type_list] = sym_bin_type_list,
  [sym_bin_type] = sym_bin_type,
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
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
  [anon_sym_COMMA] = {
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
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '1') ADVANCE(127);
      if (lookahead == '2') ADVANCE(129);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '1') ADVANCE(127);
      if (lookahead == '2') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(173);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(171);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(169);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(141);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 59:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 60:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(123);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '1') ADVANCE(127);
      if (lookahead == '2') ADVANCE(129);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '3') ADVANCE(73);
      if (lookahead == '8') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(123);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '6') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '6') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '1') ADVANCE(127);
      if (lookahead == '2') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_big);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_little);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 68},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__structure_item] = STATE(3),
    [sym_term] = STATE(3),
    [sym_atom] = STATE(21),
    [sym_quoted_atom] = STATE(9),
    [sym_integer] = STATE(21),
    [sym_binary_string] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_list] = STATE(21),
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
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(24), 1,
      sym_unquoted_atom,
    ACTIONS(33), 1,
      aux_sym_binary_string_token1,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_quoted_atom,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(30), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(2), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(21), 5,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [44] = 11,
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
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
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
    STATE(21), 5,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [88] = 11,
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
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_quoted_atom,
    STATE(28), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(21), 5,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [130] = 11,
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
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_quoted_atom,
    STATE(32), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(21), 5,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [172] = 10,
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
    STATE(9), 1,
      sym_quoted_atom,
    STATE(31), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(21), 5,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [211] = 2,
    ACTIONS(50), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(48), 15,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      aux_sym_binary_string_token2,
      aux_sym_bin_sized_token1,
      aux_sym_bin_type_list_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [234] = 2,
    ACTIONS(54), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(52), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [254] = 2,
    ACTIONS(58), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(56), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [274] = 2,
    ACTIONS(62), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(60), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [294] = 3,
    ACTIONS(66), 1,
      anon_sym_bits,
    STATE(38), 1,
      sym_bin_type,
    ACTIONS(64), 13,
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
  [316] = 2,
    ACTIONS(70), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(68), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [336] = 2,
    ACTIONS(74), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(72), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [356] = 2,
    ACTIONS(78), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [376] = 2,
    ACTIONS(82), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [396] = 2,
    ACTIONS(86), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [416] = 2,
    ACTIONS(90), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [436] = 2,
    ACTIONS(94), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [456] = 2,
    ACTIONS(98), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(96), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [476] = 2,
    ACTIONS(102), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(100), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [496] = 2,
    ACTIONS(106), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(104), 12,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [516] = 3,
    ACTIONS(66), 1,
      anon_sym_bits,
    STATE(30), 1,
      sym_bin_type,
    ACTIONS(64), 13,
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
  [538] = 4,
    ACTIONS(110), 1,
      aux_sym_binary_string_token2,
    STATE(24), 1,
      sym_integer,
    ACTIONS(108), 2,
      sym_float,
      sym_string,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [554] = 5,
    ACTIONS(112), 1,
      aux_sym_binary_string_token2,
    ACTIONS(114), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(116), 1,
      aux_sym_bin_type_list_token1,
    STATE(33), 1,
      sym_bin_sized,
    STATE(40), 1,
      sym_bin_type_list,
  [570] = 3,
    ACTIONS(118), 1,
      aux_sym_integer_token2,
    STATE(36), 1,
      sym_integer,
    ACTIONS(9), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [581] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [592] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_tuple_repeat1,
  [602] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_tuple_repeat1,
  [612] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_tuple_repeat1,
  [622] = 3,
    ACTIONS(133), 1,
      aux_sym_binary_string_token2,
    ACTIONS(135), 1,
      anon_sym_DASH,
    STATE(34), 1,
      aux_sym_bin_type_list_repeat1,
  [632] = 1,
    ACTIONS(123), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [638] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_tuple_repeat1,
  [648] = 3,
    ACTIONS(116), 1,
      aux_sym_bin_type_list_token1,
    ACTIONS(139), 1,
      aux_sym_binary_string_token2,
    STATE(41), 1,
      sym_bin_type_list,
  [658] = 3,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      aux_sym_binary_string_token2,
    STATE(35), 1,
      aux_sym_bin_type_list_repeat1,
  [668] = 3,
    ACTIONS(143), 1,
      aux_sym_binary_string_token2,
    ACTIONS(145), 1,
      anon_sym_DASH,
    STATE(35), 1,
      aux_sym_bin_type_list_repeat1,
  [678] = 1,
    ACTIONS(148), 2,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [683] = 1,
    ACTIONS(150), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [688] = 1,
    ACTIONS(143), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [693] = 1,
    ACTIONS(152), 1,
      aux_sym_quoted_atom_token2,
  [697] = 1,
    ACTIONS(139), 1,
      aux_sym_binary_string_token2,
  [701] = 1,
    ACTIONS(154), 1,
      aux_sym_binary_string_token2,
  [705] = 1,
    ACTIONS(156), 1,
      aux_sym_quoted_atom_token1,
  [709] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 336,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 396,
  [SMALL_STATE(17)] = 416,
  [SMALL_STATE(18)] = 436,
  [SMALL_STATE(19)] = 456,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 496,
  [SMALL_STATE(22)] = 516,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 554,
  [SMALL_STATE(25)] = 570,
  [SMALL_STATE(26)] = 581,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 602,
  [SMALL_STATE(29)] = 612,
  [SMALL_STATE(30)] = 622,
  [SMALL_STATE(31)] = 632,
  [SMALL_STATE(32)] = 638,
  [SMALL_STATE(33)] = 648,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 668,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 683,
  [SMALL_STATE(38)] = 688,
  [SMALL_STATE(39)] = 693,
  [SMALL_STATE(40)] = 697,
  [SMALL_STATE(41)] = 701,
  [SMALL_STATE(42)] = 705,
  [SMALL_STATE(43)] = 709,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(11),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
