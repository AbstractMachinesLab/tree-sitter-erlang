#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_quoted_atom_token1 = 1,
  aux_sym_quoted_atom_token2 = 2,
  sym_unquoted_atom = 3,
  sym_integer = 4,
  sym_float = 5,
  sym_char = 6,
  sym_string = 7,
  aux_sym_binary_string_token1 = 8,
  aux_sym_binary_string_token2 = 9,
  aux_sym_bin_sized_token1 = 10,
  aux_sym_bin_type_list_token1 = 11,
  anon_sym_DASH = 12,
  anon_sym_big = 13,
  anon_sym_binary = 14,
  anon_sym_bits = 15,
  anon_sym_bitstring = 16,
  anon_sym_bytes = 17,
  anon_sym_float = 18,
  anon_sym_integer = 19,
  anon_sym_little = 20,
  anon_sym_native = 21,
  anon_sym_signed = 22,
  anon_sym_unsigned = 23,
  anon_sym_utf16 = 24,
  anon_sym_utf32 = 25,
  anon_sym_utf8 = 26,
  anon_sym_LBRACE = 27,
  anon_sym_COMMA = 28,
  anon_sym_RBRACE = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  sym_source_file = 32,
  sym__structure_item = 33,
  sym_term = 34,
  sym_atom = 35,
  sym_quoted_atom = 36,
  sym_binary_string = 37,
  sym_bin_sized = 38,
  sym_bin_type_list = 39,
  sym_bin_type = 40,
  sym_tuple = 41,
  sym_list = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_bin_type_list_repeat1 = 44,
  aux_sym_tuple_repeat1 = 45,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_quoted_atom_token1] = "quoted_atom_token1",
  [aux_sym_quoted_atom_token2] = "quoted_atom_token2",
  [sym_unquoted_atom] = "unquoted_atom",
  [sym_integer] = "integer",
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
  [sym_integer] = sym_integer,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead == '}') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '8') ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(146);
      END_STATE();
    case 4:
      if (lookahead == '6') ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(154);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead == '}') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == '3') ADVANCE(63);
      if (lookahead == '8') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
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
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_big);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_little);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_quoted_atom_token1] = ACTIONS(1),
    [sym_unquoted_atom] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
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
    [sym_source_file] = STATE(42),
    [sym__structure_item] = STATE(2),
    [sym_term] = STATE(2),
    [sym_atom] = STATE(20),
    [sym_quoted_atom] = STATE(11),
    [sym_binary_string] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_quoted_atom_token1] = ACTIONS(5),
    [sym_unquoted_atom] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
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
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_quoted_atom,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(3), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(20), 4,
      sym_atom,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [41] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(26), 1,
      sym_unquoted_atom,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(35), 1,
      aux_sym_binary_string_token1,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_quoted_atom,
    ACTIONS(32), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(3), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(20), 4,
      sym_atom,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [82] = 11,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_quoted_atom,
    STATE(33), 1,
      sym_term,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 4,
      sym_atom,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [121] = 11,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_quoted_atom,
    STATE(32), 1,
      sym_term,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 4,
      sym_atom,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [160] = 3,
    ACTIONS(50), 1,
      anon_sym_bits,
    STATE(36), 1,
      sym_bin_type,
    ACTIONS(48), 13,
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
  [182] = 10,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_quoted_atom,
    STATE(29), 1,
      sym_term,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(20), 4,
      sym_atom,
      sym_binary_string,
      sym_tuple,
      sym_list,
  [218] = 3,
    ACTIONS(50), 1,
      anon_sym_bits,
    STATE(28), 1,
      sym_bin_type,
    ACTIONS(48), 13,
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
  [240] = 2,
    ACTIONS(54), 1,
      sym_integer,
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
  [258] = 2,
    ACTIONS(58), 1,
      sym_integer,
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
  [276] = 2,
    ACTIONS(62), 1,
      sym_integer,
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
  [294] = 2,
    ACTIONS(66), 1,
      sym_integer,
    ACTIONS(64), 12,
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
  [312] = 2,
    ACTIONS(70), 1,
      sym_integer,
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
  [330] = 2,
    ACTIONS(74), 1,
      sym_integer,
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
  [348] = 2,
    ACTIONS(78), 1,
      sym_integer,
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
  [366] = 2,
    ACTIONS(82), 1,
      sym_integer,
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
  [384] = 2,
    ACTIONS(86), 1,
      sym_integer,
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
  [402] = 2,
    ACTIONS(90), 1,
      sym_integer,
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
  [420] = 2,
    ACTIONS(94), 1,
      sym_integer,
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
  [438] = 2,
    ACTIONS(98), 1,
      sym_integer,
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
  [456] = 2,
    ACTIONS(102), 1,
      sym_integer,
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
  [474] = 5,
    ACTIONS(104), 1,
      aux_sym_binary_string_token2,
    ACTIONS(106), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(108), 1,
      aux_sym_bin_type_list_token1,
    STATE(25), 1,
      sym_bin_sized,
    STATE(38), 1,
      sym_bin_type_list,
  [490] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [501] = 3,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(119), 1,
      aux_sym_binary_string_token2,
    ACTIONS(117), 2,
      sym_float,
      sym_string,
  [512] = 3,
    ACTIONS(108), 1,
      aux_sym_bin_type_list_token1,
    ACTIONS(121), 1,
      aux_sym_binary_string_token2,
    STATE(39), 1,
      sym_bin_type_list,
  [522] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_tuple_repeat1,
  [532] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_tuple_repeat1,
  [542] = 3,
    ACTIONS(129), 1,
      aux_sym_binary_string_token2,
    ACTIONS(131), 1,
      anon_sym_DASH,
    STATE(31), 1,
      aux_sym_bin_type_list_repeat1,
  [552] = 1,
    ACTIONS(113), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [558] = 3,
    ACTIONS(133), 1,
      aux_sym_binary_string_token2,
    ACTIONS(135), 1,
      anon_sym_DASH,
    STATE(30), 1,
      aux_sym_bin_type_list_repeat1,
  [568] = 3,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(138), 1,
      aux_sym_binary_string_token2,
    STATE(30), 1,
      aux_sym_bin_type_list_repeat1,
  [578] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_tuple_repeat1,
  [588] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_tuple_repeat1,
  [598] = 1,
    ACTIONS(144), 2,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [603] = 1,
    ACTIONS(146), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [608] = 1,
    ACTIONS(133), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [613] = 1,
    ACTIONS(148), 1,
      aux_sym_quoted_atom_token1,
  [617] = 1,
    ACTIONS(121), 1,
      aux_sym_binary_string_token2,
  [621] = 1,
    ACTIONS(150), 1,
      aux_sym_binary_string_token2,
  [625] = 1,
    ACTIONS(152), 1,
      aux_sym_quoted_atom_token2,
  [629] = 1,
    ACTIONS(154), 1,
      sym_integer,
  [633] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 276,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 312,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 384,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 490,
  [SMALL_STATE(24)] = 501,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 532,
  [SMALL_STATE(28)] = 542,
  [SMALL_STATE(29)] = 552,
  [SMALL_STATE(30)] = 558,
  [SMALL_STATE(31)] = 568,
  [SMALL_STATE(32)] = 578,
  [SMALL_STATE(33)] = 588,
  [SMALL_STATE(34)] = 598,
  [SMALL_STATE(35)] = 603,
  [SMALL_STATE(36)] = 608,
  [SMALL_STATE(37)] = 613,
  [SMALL_STATE(38)] = 617,
  [SMALL_STATE(39)] = 621,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 629,
  [SMALL_STATE(42)] = 633,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
