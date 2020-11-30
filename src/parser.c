#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  anon_sym_POUND = 36,
  anon_sym_EQ = 37,
  sym_source_file = 38,
  sym__structure_item = 39,
  sym_term = 40,
  sym_atom = 41,
  sym_quoted_atom = 42,
  sym_integer = 43,
  sym_binary_string = 44,
  sym_bin_part = 45,
  sym_bin_sized = 46,
  sym_bin_type_list = 47,
  sym_bin_type = 48,
  sym_tuple = 49,
  sym_list = 50,
  sym_map = 51,
  sym_map_entry = 52,
  sym_record = 53,
  sym_record_field = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_binary_string_repeat1 = 56,
  aux_sym_bin_type_list_repeat1 = 57,
  aux_sym_tuple_repeat1 = 58,
  aux_sym_map_repeat1 = 59,
  aux_sym_record_repeat1 = 60,
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
  [anon_sym_POUND] = "#",
  [anon_sym_EQ] = "=",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ] = anon_sym_EQ,
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
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(131);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '1') ADVANCE(129);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '1') ADVANCE(129);
      if (lookahead == '2') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '=') ADVANCE(12);
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
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(176);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(183);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(145);
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
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(166);
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
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(156);
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
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(160);
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
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 60:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(124);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
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
          lookahead == '_') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(131);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '3') ADVANCE(75);
      if (lookahead == '8') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'y') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(124);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '6') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '6') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_big);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_little);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(183);
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
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 70},
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
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym__structure_item] = STATE(3),
    [sym_term] = STATE(3),
    [sym_atom] = STATE(24),
    [sym_quoted_atom] = STATE(23),
    [sym_integer] = STATE(24),
    [sym_binary_string] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_list] = STATE(24),
    [sym_map] = STATE(24),
    [sym_record] = STATE(24),
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
    [anon_sym_POUND] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(28), 1,
      sym_unquoted_atom,
    ACTIONS(37), 1,
      aux_sym_binary_string_token1,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(49), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_quoted_atom,
    ACTIONS(31), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(34), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(2), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [52] = 13,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
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
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [104] = 14,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(60), 1,
      sym_record_field,
    STATE(72), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [157] = 14,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(56), 1,
      sym_map_entry,
    STATE(70), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [210] = 13,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(62), 1,
      sym_record_field,
    STATE(72), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [260] = 13,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(65), 1,
      sym_map_entry,
    STATE(70), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [310] = 13,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(54), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [360] = 13,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(47), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [410] = 12,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(66), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [457] = 2,
    ACTIONS(64), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(62), 17,
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
  [484] = 12,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(61), 1,
      sym_term,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [531] = 12,
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
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(23), 1,
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
    STATE(24), 7,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_tuple,
      sym_list,
      sym_map,
      sym_record,
  [578] = 2,
    ACTIONS(68), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(66), 14,
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
  [602] = 2,
    ACTIONS(72), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(70), 14,
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
  [626] = 2,
    ACTIONS(76), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(74), 14,
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
  [650] = 2,
    ACTIONS(80), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(78), 14,
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
  [674] = 2,
    ACTIONS(84), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(82), 14,
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
  [698] = 2,
    ACTIONS(88), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(86), 14,
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
  [722] = 2,
    ACTIONS(92), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(90), 14,
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
  [746] = 2,
    ACTIONS(96), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(94), 14,
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
  [770] = 2,
    ACTIONS(100), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(98), 14,
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
  [794] = 2,
    ACTIONS(104), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(102), 14,
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
  [818] = 2,
    ACTIONS(108), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(106), 14,
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
  [842] = 2,
    ACTIONS(112), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(110), 14,
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
  [866] = 2,
    ACTIONS(116), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(114), 14,
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
  [890] = 2,
    ACTIONS(120), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(118), 14,
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
  [914] = 2,
    ACTIONS(124), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(122), 14,
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
  [938] = 2,
    ACTIONS(128), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(126), 14,
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
  [962] = 2,
    ACTIONS(132), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(130), 14,
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
  [986] = 2,
    ACTIONS(136), 5,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(134), 14,
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
  [1010] = 3,
    ACTIONS(140), 1,
      anon_sym_bits,
    STATE(48), 1,
      sym_bin_type,
    ACTIONS(138), 13,
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
  [1032] = 3,
    ACTIONS(140), 1,
      anon_sym_bits,
    STATE(38), 1,
      sym_bin_type,
    ACTIONS(138), 13,
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
  [1054] = 5,
    ACTIONS(144), 1,
      aux_sym_binary_string_token2,
    STATE(36), 1,
      sym_integer,
    STATE(46), 1,
      sym_bin_part,
    ACTIONS(142), 2,
      sym_float,
      sym_string,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1073] = 4,
    STATE(36), 1,
      sym_integer,
    STATE(67), 1,
      sym_bin_part,
    ACTIONS(142), 2,
      sym_float,
      sym_string,
    ACTIONS(9), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1089] = 5,
    ACTIONS(148), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(150), 1,
      aux_sym_bin_type_list_token1,
    STATE(37), 1,
      sym_bin_sized,
    STATE(63), 1,
      sym_bin_type_list,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1106] = 3,
    ACTIONS(150), 1,
      aux_sym_bin_type_list_token1,
    STATE(64), 1,
      sym_bin_type_list,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1117] = 3,
    ACTIONS(156), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1128] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(161), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1139] = 3,
    ACTIONS(163), 1,
      aux_sym_integer_token2,
    STATE(49), 1,
      sym_integer,
    ACTIONS(9), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [1150] = 3,
    ACTIONS(156), 1,
      anon_sym_DASH,
    STATE(43), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1161] = 4,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    STATE(23), 1,
      sym_quoted_atom,
    STATE(69), 1,
      sym_atom,
  [1174] = 3,
    ACTIONS(169), 1,
      anon_sym_DASH,
    STATE(43), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1185] = 3,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_map_repeat1,
  [1195] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      aux_sym_binary_string_token2,
    STATE(50), 1,
      aux_sym_binary_string_repeat1,
  [1205] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      aux_sym_binary_string_token2,
    STATE(45), 1,
      aux_sym_binary_string_repeat1,
  [1215] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_tuple_repeat1,
  [1225] = 1,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [1231] = 1,
    ACTIONS(186), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [1237] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym_binary_string_token2,
    STATE(50), 1,
      aux_sym_binary_string_repeat1,
  [1247] = 1,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1253] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_record_repeat1,
  [1263] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_tuple_repeat1,
  [1273] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_tuple_repeat1,
  [1283] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_record_repeat1,
  [1293] = 3,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_map_repeat1,
  [1303] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_tuple_repeat1,
  [1313] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_map_repeat1,
  [1323] = 1,
    ACTIONS(215), 3,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [1329] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_record_repeat1,
  [1339] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1344] = 1,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1349] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1354] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1359] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1364] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1369] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      aux_sym_binary_string_token2,
  [1374] = 1,
    ACTIONS(225), 1,
      aux_sym_quoted_atom_token2,
  [1378] = 1,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
  [1382] = 1,
    ACTIONS(229), 1,
      anon_sym_EQ_GT,
  [1386] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1390] = 1,
    ACTIONS(233), 1,
      anon_sym_EQ,
  [1394] = 1,
    ACTIONS(235), 1,
      aux_sym_quoted_atom_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 210,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 410,
  [SMALL_STATE(11)] = 457,
  [SMALL_STATE(12)] = 484,
  [SMALL_STATE(13)] = 531,
  [SMALL_STATE(14)] = 578,
  [SMALL_STATE(15)] = 602,
  [SMALL_STATE(16)] = 626,
  [SMALL_STATE(17)] = 650,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 698,
  [SMALL_STATE(20)] = 722,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 770,
  [SMALL_STATE(23)] = 794,
  [SMALL_STATE(24)] = 818,
  [SMALL_STATE(25)] = 842,
  [SMALL_STATE(26)] = 866,
  [SMALL_STATE(27)] = 890,
  [SMALL_STATE(28)] = 914,
  [SMALL_STATE(29)] = 938,
  [SMALL_STATE(30)] = 962,
  [SMALL_STATE(31)] = 986,
  [SMALL_STATE(32)] = 1010,
  [SMALL_STATE(33)] = 1032,
  [SMALL_STATE(34)] = 1054,
  [SMALL_STATE(35)] = 1073,
  [SMALL_STATE(36)] = 1089,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1117,
  [SMALL_STATE(39)] = 1128,
  [SMALL_STATE(40)] = 1139,
  [SMALL_STATE(41)] = 1150,
  [SMALL_STATE(42)] = 1161,
  [SMALL_STATE(43)] = 1174,
  [SMALL_STATE(44)] = 1185,
  [SMALL_STATE(45)] = 1195,
  [SMALL_STATE(46)] = 1205,
  [SMALL_STATE(47)] = 1215,
  [SMALL_STATE(48)] = 1225,
  [SMALL_STATE(49)] = 1231,
  [SMALL_STATE(50)] = 1237,
  [SMALL_STATE(51)] = 1247,
  [SMALL_STATE(52)] = 1253,
  [SMALL_STATE(53)] = 1263,
  [SMALL_STATE(54)] = 1273,
  [SMALL_STATE(55)] = 1283,
  [SMALL_STATE(56)] = 1293,
  [SMALL_STATE(57)] = 1303,
  [SMALL_STATE(58)] = 1313,
  [SMALL_STATE(59)] = 1323,
  [SMALL_STATE(60)] = 1329,
  [SMALL_STATE(61)] = 1339,
  [SMALL_STATE(62)] = 1344,
  [SMALL_STATE(63)] = 1349,
  [SMALL_STATE(64)] = 1354,
  [SMALL_STATE(65)] = 1359,
  [SMALL_STATE(66)] = 1364,
  [SMALL_STATE(67)] = 1369,
  [SMALL_STATE(68)] = 1374,
  [SMALL_STATE(69)] = 1378,
  [SMALL_STATE(70)] = 1382,
  [SMALL_STATE(71)] = 1386,
  [SMALL_STATE(72)] = 1390,
  [SMALL_STATE(73)] = 1394,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(13),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(32),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(7),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
