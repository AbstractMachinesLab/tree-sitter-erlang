#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_quoted_atom_token1 = 1,
  aux_sym_quoted_atom_token2 = 2,
  sym_unquoted_atom = 3,
  sym_integer = 4,
  sym_float = 5,
  aux_sym_binary_string_token1 = 6,
  aux_sym_binary_string_token2 = 7,
  aux_sym_bin_sized_token1 = 8,
  aux_sym_bin_type_list_token1 = 9,
  anon_sym_DASH = 10,
  anon_sym_big = 11,
  anon_sym_binary = 12,
  anon_sym_bits = 13,
  anon_sym_bitstring = 14,
  anon_sym_bytes = 15,
  anon_sym_float = 16,
  anon_sym_integer = 17,
  anon_sym_little = 18,
  anon_sym_native = 19,
  anon_sym_signed = 20,
  anon_sym_unsigned = 21,
  anon_sym_utf16 = 22,
  anon_sym_utf32 = 23,
  anon_sym_utf8 = 24,
  sym_source_file = 25,
  sym__structure_item = 26,
  sym_term = 27,
  sym_atom = 28,
  sym_quoted_atom = 29,
  sym_binary_string = 30,
  sym_bin_sized = 31,
  sym_bin_type_list = 32,
  sym_bin_type = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_bin_type_list_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_quoted_atom_token1] = "quoted_atom_token1",
  [aux_sym_quoted_atom_token2] = "quoted_atom_token2",
  [sym_unquoted_atom] = "unquoted_atom",
  [sym_integer] = "integer",
  [sym_float] = "float",
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
  [sym_source_file] = "source_file",
  [sym__structure_item] = "_structure_item",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_quoted_atom] = "quoted_atom",
  [sym_binary_string] = "binary_string",
  [sym_bin_sized] = "bin_sized",
  [sym_bin_type_list] = "bin_type_list",
  [sym_bin_type] = "bin_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_quoted_atom_token1] = aux_sym_quoted_atom_token1,
  [aux_sym_quoted_atom_token2] = aux_sym_quoted_atom_token2,
  [sym_unquoted_atom] = sym_unquoted_atom,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
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
  [sym_source_file] = sym_source_file,
  [sym__structure_item] = sym__structure_item,
  [sym_term] = sym_term,
  [sym_atom] = sym_atom,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_binary_string] = sym_binary_string,
  [sym_bin_sized] = sym_bin_sized,
  [sym_bin_type_list] = sym_bin_type_list,
  [sym_bin_type] = sym_bin_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_type_list_repeat1] = {
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
      if (eof) ADVANCE(57);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('!' <= lookahead && lookahead <= '#') ||
          ('%' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '3') ADVANCE(2);
      if (lookahead == '8') ADVANCE(149);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '6') ADVANCE(145);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(1);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '3') ADVANCE(60);
      if (lookahead == '8') ADVANCE(150);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == '2') ADVANCE(148);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == '6') ADVANCE(146);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'a') ADVANCE(94);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'a') ADVANCE(104);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'a') ADVANCE(101);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'd') ADVANCE(142);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'd') ADVANCE(144);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'e') ADVANCE(65);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'e') ADVANCE(138);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'e') ADVANCE(140);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'e') ADVANCE(78);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'e') ADVANCE(66);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'e') ADVANCE(98);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'e') ADVANCE(95);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'f') ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 't') ADVANCE(97);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'g') ADVANCE(130);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'g') ADVANCE(90);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'g') ADVANCE(73);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'g') ADVANCE(91);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'i') ADVANCE(77);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'i') ADVANCE(106);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'i') ADVANCE(105);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'i') ADVANCE(89);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'i') ADVANCE(79);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'l') ADVANCE(93);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'l') ADVANCE(68);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(74);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'n') ADVANCE(76);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'n') ADVANCE(67);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'n') ADVANCE(71);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'n') ADVANCE(103);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'o') ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'r') ADVANCE(107);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'r') ADVANCE(136);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'r') ADVANCE(84);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 's') ADVANCE(127);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 's') ADVANCE(132);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 's') ADVANCE(85);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 't') ADVANCE(72);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 't') ADVANCE(134);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 't') ADVANCE(87);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 't') ADVANCE(70);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 't') ADVANCE(82);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 't') ADVANCE(102);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'v') ADVANCE(69);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (lookahead == 'y') ADVANCE(126);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_big);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_binary);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(96);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_float);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_little);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_native);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_signed);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_quoted_atom_token1] = ACTIONS(1),
    [aux_sym_quoted_atom_token2] = ACTIONS(1),
    [sym_unquoted_atom] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__structure_item] = STATE(5),
    [sym_term] = STATE(5),
    [sym_atom] = STATE(12),
    [sym_quoted_atom] = STATE(7),
    [sym_binary_string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_quoted_atom_token1] = ACTIONS(5),
    [sym_unquoted_atom] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [aux_sym_binary_string_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(15), 1,
      anon_sym_bits,
    STATE(18), 1,
      sym_bin_type,
    ACTIONS(13), 13,
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
  [22] = 3,
    ACTIONS(15), 1,
      anon_sym_bits,
    STATE(17), 1,
      sym_bin_type,
    ACTIONS(13), 13,
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
  [44] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(22), 1,
      sym_unquoted_atom,
    ACTIONS(28), 1,
      aux_sym_binary_string_token1,
    STATE(7), 1,
      sym_quoted_atom,
    ACTIONS(25), 2,
      sym_integer,
      sym_float,
    STATE(12), 2,
      sym_atom,
      sym_binary_string,
    STATE(4), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
  [73] = 8,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(11), 1,
      aux_sym_binary_string_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_quoted_atom,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(12), 2,
      sym_atom,
      sym_binary_string,
    STATE(4), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
  [102] = 2,
    ACTIONS(35), 2,
      sym_integer,
      sym_float,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      aux_sym_binary_string_token1,
  [113] = 2,
    ACTIONS(39), 2,
      sym_integer,
      sym_float,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      aux_sym_binary_string_token1,
  [124] = 2,
    ACTIONS(43), 2,
      sym_integer,
      sym_float,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      aux_sym_binary_string_token1,
  [135] = 2,
    ACTIONS(47), 2,
      sym_integer,
      sym_float,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      aux_sym_binary_string_token1,
  [146] = 2,
    ACTIONS(51), 2,
      sym_integer,
      sym_float,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      aux_sym_binary_string_token1,
  [157] = 2,
    ACTIONS(55), 2,
      sym_integer,
      sym_float,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      aux_sym_binary_string_token1,
  [168] = 2,
    ACTIONS(59), 2,
      sym_integer,
      sym_float,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      aux_sym_binary_string_token1,
  [179] = 5,
    ACTIONS(61), 1,
      aux_sym_binary_string_token2,
    ACTIONS(63), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(65), 1,
      aux_sym_bin_type_list_token1,
    STATE(16), 1,
      sym_bin_sized,
    STATE(22), 1,
      sym_bin_type_list,
  [195] = 3,
    ACTIONS(67), 1,
      aux_sym_binary_string_token2,
    ACTIONS(69), 1,
      anon_sym_DASH,
    STATE(14), 1,
      aux_sym_bin_type_list_repeat1,
  [205] = 3,
    ACTIONS(72), 1,
      aux_sym_binary_string_token2,
    ACTIONS(74), 1,
      anon_sym_DASH,
    STATE(14), 1,
      aux_sym_bin_type_list_repeat1,
  [215] = 3,
    ACTIONS(65), 1,
      aux_sym_bin_type_list_token1,
    ACTIONS(76), 1,
      aux_sym_binary_string_token2,
    STATE(23), 1,
      sym_bin_type_list,
  [225] = 3,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(78), 1,
      aux_sym_binary_string_token2,
    STATE(15), 1,
      aux_sym_bin_type_list_repeat1,
  [235] = 1,
    ACTIONS(67), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [240] = 2,
    ACTIONS(80), 1,
      sym_integer,
    ACTIONS(82), 1,
      aux_sym_binary_string_token2,
  [247] = 1,
    ACTIONS(84), 2,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [252] = 1,
    ACTIONS(86), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [257] = 1,
    ACTIONS(76), 1,
      aux_sym_binary_string_token2,
  [261] = 1,
    ACTIONS(88), 1,
      aux_sym_binary_string_token2,
  [265] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [269] = 1,
    ACTIONS(92), 1,
      aux_sym_quoted_atom_token2,
  [273] = 1,
    ACTIONS(94), 1,
      sym_integer,
  [277] = 1,
    ACTIONS(96), 1,
      aux_sym_quoted_atom_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 157,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 205,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 225,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 247,
  [SMALL_STATE(21)] = 252,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 265,
  [SMALL_STATE(25)] = 269,
  [SMALL_STATE(26)] = 273,
  [SMALL_STATE(27)] = 277,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
