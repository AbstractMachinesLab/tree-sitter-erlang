#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  sym__identifier = 1,
  anon_sym_DASH = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DOT = 5,
  anon_sym_module = 6,
  anon_sym_export = 7,
  anon_sym_LBRACK = 8,
  anon_sym_SLASH = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_SEMI = 12,
  anon_sym_DASH_GT = 13,
  sym_comment = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_QMARK = 17,
  sym_quoted_atom = 18,
  sym_unquoted_atom = 19,
  aux_sym_integer_token1 = 20,
  aux_sym_integer_token2 = 21,
  aux_sym_integer_token3 = 22,
  sym_float = 23,
  sym_char = 24,
  sym_string = 25,
  anon_sym_LT_LT = 26,
  anon_sym_GT_GT = 27,
  aux_sym_bin_sized_token1 = 28,
  aux_sym_bin_type_list_token1 = 29,
  anon_sym_big = 30,
  anon_sym_binary = 31,
  anon_sym_bits = 32,
  anon_sym_bitstring = 33,
  anon_sym_bytes = 34,
  anon_sym_float = 35,
  anon_sym_integer = 36,
  anon_sym_little = 37,
  anon_sym_native = 38,
  anon_sym_signed = 39,
  anon_sym_unsigned = 40,
  anon_sym_utf16 = 41,
  anon_sym_utf32 = 42,
  anon_sym_utf8 = 43,
  anon_sym_POUND = 44,
  anon_sym_EQ_GT = 45,
  anon_sym_EQ = 46,
  sym_source_file = 47,
  sym__structure_item = 48,
  sym_module_attribute = 49,
  sym_module_name = 50,
  sym_module_export = 51,
  sym_function_declaration = 52,
  sym_function_clause = 53,
  sym_pattern = 54,
  sym_pat_list = 55,
  sym_pat_tuple = 56,
  sym_expression = 57,
  sym_macro_application = 58,
  sym_variable = 59,
  sym_term = 60,
  sym_list = 61,
  sym_tuple = 62,
  sym_atom = 63,
  sym_integer = 64,
  sym_binary_string = 65,
  sym_bin_part = 66,
  sym_bin_sized = 67,
  sym_bin_type_list = 68,
  sym_bin_type = 69,
  sym_map = 70,
  sym_map_entry = 71,
  sym_record = 72,
  sym_record_field = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_module_export_repeat1 = 75,
  aux_sym_function_declaration_repeat1 = 76,
  aux_sym_function_clause_repeat1 = 77,
  aux_sym_function_clause_repeat2 = 78,
  aux_sym_binary_string_repeat1 = 79,
  aux_sym_bin_type_list_repeat1 = 80,
  aux_sym_map_repeat1 = 81,
  aux_sym_record_repeat1 = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_module] = "module",
  [anon_sym_export] = "export",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SLASH] = "/",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH_GT] = "->",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "\?",
  [sym_quoted_atom] = "quoted_atom",
  [sym_unquoted_atom] = "unquoted_atom",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [sym_float] = "float",
  [sym_char] = "char",
  [sym_string] = "string",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_bin_sized_token1] = "bin_sized_token1",
  [aux_sym_bin_type_list_token1] = "bin_type_list_token1",
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
  [anon_sym_POUND] = "#",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ] = "=",
  [sym_source_file] = "source_file",
  [sym__structure_item] = "_structure_item",
  [sym_module_attribute] = "module_attribute",
  [sym_module_name] = "module_name",
  [sym_module_export] = "module_export",
  [sym_function_declaration] = "function_declaration",
  [sym_function_clause] = "function_clause",
  [sym_pattern] = "pattern",
  [sym_pat_list] = "pat_list",
  [sym_pat_tuple] = "pat_tuple",
  [sym_expression] = "expression",
  [sym_macro_application] = "macro_application",
  [sym_variable] = "variable",
  [sym_term] = "term",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_atom] = "atom",
  [sym_integer] = "integer",
  [sym_binary_string] = "binary_string",
  [sym_bin_part] = "bin_part",
  [sym_bin_sized] = "bin_sized",
  [sym_bin_type_list] = "bin_type_list",
  [sym_bin_type] = "bin_type",
  [sym_map] = "map",
  [sym_map_entry] = "map_entry",
  [sym_record] = "record",
  [sym_record_field] = "record_field",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_export_repeat1] = "module_export_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_function_clause_repeat1] = "function_clause_repeat1",
  [aux_sym_function_clause_repeat2] = "function_clause_repeat2",
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_unquoted_atom] = sym_unquoted_atom,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [sym_float] = sym_float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_bin_sized_token1] = aux_sym_bin_sized_token1,
  [aux_sym_bin_type_list_token1] = aux_sym_bin_type_list_token1,
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_source_file] = sym_source_file,
  [sym__structure_item] = sym__structure_item,
  [sym_module_attribute] = sym_module_attribute,
  [sym_module_name] = sym_module_name,
  [sym_module_export] = sym_module_export,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_clause] = sym_function_clause,
  [sym_pattern] = sym_pattern,
  [sym_pat_list] = sym_pat_list,
  [sym_pat_tuple] = sym_pat_tuple,
  [sym_expression] = sym_expression,
  [sym_macro_application] = sym_macro_application,
  [sym_variable] = sym_variable,
  [sym_term] = sym_term,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_atom] = sym_atom,
  [sym_integer] = sym_integer,
  [sym_binary_string] = sym_binary_string,
  [sym_bin_part] = sym_bin_part,
  [sym_bin_sized] = sym_bin_sized,
  [sym_bin_type_list] = sym_bin_type_list,
  [sym_bin_type] = sym_bin_type,
  [sym_map] = sym_map,
  [sym_map_entry] = sym_map_entry,
  [sym_record] = sym_record,
  [sym_record_field] = sym_record_field,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_export_repeat1] = aux_sym_module_export_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_function_clause_repeat1] = aux_sym_function_clause_repeat1,
  [aux_sym_function_clause_repeat2] = aux_sym_function_clause_repeat2,
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
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
  [anon_sym_DASH] = {
    .visible = true,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_atom] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [sym_module_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_export] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_list] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_application] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
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
  [aux_sym_module_export_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_clause_repeat2] = {
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
  field_arguments = 1,
  field_body = 2,
  field_name = 3,
  field_value = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[8] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 4},
  [3] = {.index = 5, .length = 5},
  [4] = {.index = 10, .length = 5},
  [5] = {.index = 15, .length = 6},
  [6] = {.index = 21, .length = 6},
  [7] = {.index = 27, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
  [1] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_body, 4},
    {field_name, 0},
  [5] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_body, 4},
    {field_body, 5},
    {field_name, 0},
  [10] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_body, 5},
    {field_name, 0},
  [15] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_body, 5},
    {field_body, 6},
    {field_name, 0},
  [21] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_body, 6},
    {field_name, 0},
  [27] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_body, 6},
    {field_body, 7},
    {field_name, 0},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '1') ADVANCE(161);
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '1') ADVANCE(161);
      if (lookahead == '2') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '>') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(95);
      if (('!' <= lookahead && lookahead <= '#') ||
          ('%' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '8') ADVANCE(205);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(201);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(175);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(176);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 63:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(156);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 64:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(157);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(169);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(170);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(171);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(172);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 71:
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(8);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(76);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '>') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_quoted_atom);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '8') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'p') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'u') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'x') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(156);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(157);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '6') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '6') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '*') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_big);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_binary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_little);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_signed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(169);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 74},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 74},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 74},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 74},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 74},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 74},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 74},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 74},
  [46] = {.lex_state = 74},
  [47] = {.lex_state = 74},
  [48] = {.lex_state = 74},
  [49] = {.lex_state = 74},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 74},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 74},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 74},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 74},
  [89] = {.lex_state = 74},
  [90] = {.lex_state = 74},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 74},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 74},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 74},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 74},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 73},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 73},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_quoted_atom] = ACTIONS(1),
    [sym_unquoted_atom] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym_bin_sized_token1] = ACTIONS(1),
    [aux_sym_bin_type_list_token1] = ACTIONS(1),
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(155),
    [sym__structure_item] = STATE(2),
    [sym_module_attribute] = STATE(2),
    [sym_module_name] = STATE(2),
    [sym_module_export] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [sym_function_clause] = STATE(103),
    [sym_expression] = STATE(2),
    [sym_macro_application] = STATE(37),
    [sym_variable] = STATE(37),
    [sym_term] = STATE(37),
    [sym_list] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_atom] = STATE(43),
    [sym_integer] = STATE(18),
    [sym_binary_string] = STATE(18),
    [sym_map] = STATE(18),
    [sym_record] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [sym_quoted_atom] = ACTIONS(17),
    [sym_unquoted_atom] = ACTIONS(17),
    [aux_sym_integer_token1] = ACTIONS(19),
    [aux_sym_integer_token2] = ACTIONS(19),
    [aux_sym_integer_token3] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [sym_char] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_comment,
    STATE(43), 1,
      sym_atom,
    STATE(103), 1,
      sym_function_clause,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 6,
      sym_list,
      sym_tuple,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
    STATE(3), 7,
      sym__structure_item,
      sym_module_attribute,
      sym_module_name,
      sym_module_export,
      sym_function_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
  [70] = 17,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(36), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      anon_sym_QMARK,
    ACTIONS(60), 1,
      anon_sym_LT_LT,
    ACTIONS(63), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_atom,
    STATE(103), 1,
      sym_function_clause,
    ACTIONS(51), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(54), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(57), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 6,
      sym_list,
      sym_tuple,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
    STATE(3), 7,
      sym__structure_item,
      sym_module_attribute,
      sym_module_name,
      sym_module_export,
      sym_function_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
  [140] = 2,
    ACTIONS(68), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(66), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_bin_sized_token1,
      aux_sym_bin_type_list_token1,
      anon_sym_EQ_GT,
  [173] = 2,
    ACTIONS(72), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(70), 20,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [205] = 13,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [258] = 13,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [311] = 13,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [364] = 2,
    ACTIONS(82), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(80), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [394] = 2,
    ACTIONS(86), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(84), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [424] = 2,
    ACTIONS(90), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(88), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [454] = 2,
    ACTIONS(94), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(92), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [484] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [534] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [584] = 2,
    ACTIONS(98), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(96), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [614] = 2,
    ACTIONS(102), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(100), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [644] = 2,
    ACTIONS(106), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(104), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [674] = 2,
    ACTIONS(110), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(108), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [704] = 2,
    ACTIONS(114), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(112), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [734] = 2,
    ACTIONS(118), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(116), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [764] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [814] = 2,
    ACTIONS(122), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(120), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [844] = 2,
    ACTIONS(126), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(124), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [874] = 2,
    ACTIONS(130), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(128), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [904] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [954] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1004] = 2,
    ACTIONS(134), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(132), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [1034] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1084] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1134] = 2,
    ACTIONS(138), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(136), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [1164] = 12,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(37), 3,
      sym_macro_application,
      sym_variable,
      sym_term,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1214] = 2,
    ACTIONS(142), 7,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
      anon_sym_EQ,
    ACTIONS(140), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_EQ_GT,
  [1244] = 3,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(144), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1275] = 2,
    ACTIONS(152), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(150), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1303] = 2,
    ACTIONS(156), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(154), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1331] = 2,
    ACTIONS(160), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(158), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1359] = 2,
    ACTIONS(164), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(162), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1387] = 2,
    ACTIONS(168), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(166), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1415] = 11,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_record_field,
    STATE(153), 1,
      sym_term,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1460] = 11,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_map_entry,
    STATE(146), 1,
      sym_term,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1505] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_record_field,
    STATE(153), 1,
      sym_term,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1547] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_LT,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_map_entry,
    STATE(146), 1,
      sym_term,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    ACTIONS(21), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(18), 7,
      sym_list,
      sym_tuple,
      sym_atom,
      sym_integer,
      sym_binary_string,
      sym_map,
      sym_record,
  [1589] = 3,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(108), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1614] = 2,
    ACTIONS(178), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(176), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1636] = 2,
    ACTIONS(182), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(180), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1658] = 2,
    ACTIONS(186), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1680] = 2,
    ACTIONS(190), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1702] = 2,
    ACTIONS(194), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(192), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1724] = 2,
    ACTIONS(198), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(196), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1746] = 2,
    ACTIONS(202), 6,
      sym__identifier,
      anon_sym_DASH,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_POUND,
    ACTIONS(200), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      sym_quoted_atom,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      anon_sym_LT_LT,
  [1768] = 3,
    ACTIONS(206), 1,
      anon_sym_bits,
    STATE(79), 1,
      sym_bin_type,
    ACTIONS(204), 13,
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
  [1790] = 3,
    ACTIONS(206), 1,
      anon_sym_bits,
    STATE(112), 1,
      sym_bin_type,
    ACTIONS(204), 13,
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
  [1812] = 6,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_integer,
    STATE(119), 1,
      sym_bin_part,
    ACTIONS(210), 2,
      sym_float,
      sym_string,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1834] = 6,
    ACTIONS(214), 1,
      sym__identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_pattern,
    STATE(72), 3,
      sym_pat_list,
      sym_pat_tuple,
      sym_variable,
  [1855] = 5,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_integer,
    STATE(127), 1,
      sym_bin_part,
    ACTIONS(210), 2,
      sym_float,
      sym_string,
    ACTIONS(19), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [1874] = 6,
    ACTIONS(214), 1,
      sym__identifier,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_pattern,
    STATE(72), 3,
      sym_pat_list,
      sym_pat_tuple,
      sym_variable,
  [1895] = 6,
    ACTIONS(214), 1,
      sym__identifier,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_pattern,
    STATE(72), 3,
      sym_pat_list,
      sym_pat_tuple,
      sym_variable,
  [1916] = 5,
    ACTIONS(214), 1,
      sym__identifier,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_pattern,
    STATE(72), 3,
      sym_pat_list,
      sym_pat_tuple,
      sym_variable,
  [1934] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_function_clause_repeat2,
    ACTIONS(226), 5,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1948] = 5,
    ACTIONS(233), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(235), 1,
      aux_sym_bin_type_list_token1,
    STATE(66), 1,
      sym_bin_sized,
    STATE(124), 1,
      sym_bin_type_list,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1965] = 5,
    ACTIONS(233), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(235), 1,
      aux_sym_bin_type_list_token1,
    STATE(89), 1,
      sym_bin_sized,
    STATE(126), 1,
      sym_bin_type_list,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1982] = 1,
    ACTIONS(226), 6,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1991] = 5,
    ACTIONS(17), 1,
      sym_quoted_atom,
    ACTIONS(239), 1,
      anon_sym_module,
    ACTIONS(241), 1,
      anon_sym_export,
    ACTIONS(243), 1,
      sym_unquoted_atom,
    STATE(136), 1,
      sym_atom,
  [2007] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_function_clause_repeat1,
    ACTIONS(245), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2019] = 1,
    ACTIONS(250), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2026] = 3,
    ACTIONS(235), 1,
      aux_sym_bin_type_list_token1,
    STATE(132), 1,
      sym_bin_type_list,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2037] = 3,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_atom,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
  [2048] = 3,
    ACTIONS(256), 1,
      aux_sym_integer_token2,
    STATE(123), 1,
      sym_integer,
    ACTIONS(19), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [2059] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_function_clause_repeat2,
    ACTIONS(258), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2070] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_function_clause_repeat2,
    ACTIONS(262), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2081] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_function_clause_repeat2,
    ACTIONS(264), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2092] = 1,
    ACTIONS(266), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2099] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_function_clause_repeat2,
    ACTIONS(268), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2110] = 3,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_atom,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
  [2121] = 1,
    ACTIONS(272), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2128] = 1,
    ACTIONS(274), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2135] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_function_clause_repeat2,
    ACTIONS(276), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2146] = 3,
    ACTIONS(278), 1,
      anon_sym_DASH,
    STATE(78), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2157] = 3,
    ACTIONS(283), 1,
      anon_sym_DASH,
    STATE(88), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2168] = 3,
    ACTIONS(256), 1,
      aux_sym_integer_token2,
    STATE(91), 1,
      sym_integer,
    ACTIONS(19), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [2179] = 1,
    ACTIONS(245), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2186] = 1,
    ACTIONS(287), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2193] = 3,
    STATE(128), 1,
      sym_function_clause,
    STATE(158), 1,
      sym_atom,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
  [2204] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_function_clause_repeat2,
    ACTIONS(289), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2215] = 1,
    ACTIONS(291), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2222] = 3,
    ACTIONS(256), 1,
      aux_sym_integer_token2,
    STATE(106), 1,
      sym_integer,
    ACTIONS(19), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token3,
  [2233] = 1,
    ACTIONS(293), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2240] = 3,
    ACTIONS(283), 1,
      anon_sym_DASH,
    STATE(78), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2251] = 3,
    ACTIONS(235), 1,
      aux_sym_bin_type_list_token1,
    STATE(130), 1,
      sym_bin_type_list,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2262] = 2,
    STATE(144), 1,
      sym_atom,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
  [2270] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_module_export_repeat1,
  [2280] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_map_repeat1,
  [2290] = 3,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_function_declaration_repeat1,
  [2300] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_module_export_repeat1,
  [2310] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      aux_sym_record_repeat1,
  [2320] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_function_clause_repeat1,
  [2330] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_function_clause_repeat1,
  [2340] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_module_export_repeat1,
  [2350] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_function_clause_repeat1,
  [2360] = 2,
    STATE(150), 1,
      sym_atom,
    ACTIONS(17), 2,
      sym_quoted_atom,
      sym_unquoted_atom,
  [2368] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_function_clause_repeat1,
  [2378] = 3,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_GT_GT,
    STATE(121), 1,
      aux_sym_binary_string_repeat1,
  [2388] = 3,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_function_declaration_repeat1,
  [2398] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_function_clause_repeat2,
  [2408] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_function_clause_repeat2,
  [2418] = 1,
    ACTIONS(345), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      aux_sym_bin_type_list_token1,
  [2424] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_function_clause_repeat2,
  [2434] = 1,
    ACTIONS(349), 3,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2440] = 3,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_record_repeat1,
  [2450] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_function_clause_repeat2,
  [2460] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_map_repeat1,
  [2470] = 1,
    ACTIONS(281), 3,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2476] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_map_repeat1,
  [2486] = 3,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(93), 1,
      aux_sym_function_declaration_repeat1,
  [2496] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_record_repeat1,
  [2506] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_function_clause_repeat2,
  [2516] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_function_clause_repeat2,
  [2526] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_function_clause_repeat1,
  [2536] = 3,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_GT_GT,
    STATE(102), 1,
      aux_sym_binary_string_repeat1,
  [2546] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_function_clause_repeat1,
  [2556] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_GT_GT,
    STATE(121), 1,
      aux_sym_binary_string_repeat1,
  [2566] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2571] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2576] = 1,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2581] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2586] = 1,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2591] = 1,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2596] = 1,
    ACTIONS(307), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2601] = 1,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2606] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2611] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2616] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [2621] = 1,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [2625] = 1,
    ACTIONS(394), 1,
      anon_sym_DOT,
  [2629] = 1,
    ACTIONS(396), 1,
      anon_sym_DOT,
  [2633] = 1,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
  [2637] = 1,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
  [2641] = 1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
  [2645] = 1,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [2649] = 1,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
  [2653] = 1,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
  [2657] = 1,
    ACTIONS(410), 1,
      anon_sym_DOT,
  [2661] = 1,
    ACTIONS(412), 1,
      anon_sym_SLASH,
  [2665] = 1,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [2669] = 1,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [2673] = 1,
    ACTIONS(418), 1,
      anon_sym_EQ_GT,
  [2677] = 1,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
  [2681] = 1,
    ACTIONS(422), 1,
      anon_sym_DASH_GT,
  [2685] = 1,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
  [2689] = 1,
    ACTIONS(426), 1,
      anon_sym_SLASH,
  [2693] = 1,
    ACTIONS(428), 1,
      anon_sym_DOT,
  [2697] = 1,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2701] = 1,
    ACTIONS(432), 1,
      anon_sym_EQ,
  [2705] = 1,
    ACTIONS(434), 1,
      anon_sym_DASH_GT,
  [2709] = 1,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
  [2713] = 1,
    ACTIONS(438), 1,
      anon_sym_DOT,
  [2717] = 1,
    ACTIONS(440), 1,
      sym__identifier,
  [2721] = 1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 173,
  [SMALL_STATE(6)] = 205,
  [SMALL_STATE(7)] = 258,
  [SMALL_STATE(8)] = 311,
  [SMALL_STATE(9)] = 364,
  [SMALL_STATE(10)] = 394,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 614,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 704,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 764,
  [SMALL_STATE(22)] = 814,
  [SMALL_STATE(23)] = 844,
  [SMALL_STATE(24)] = 874,
  [SMALL_STATE(25)] = 904,
  [SMALL_STATE(26)] = 954,
  [SMALL_STATE(27)] = 1004,
  [SMALL_STATE(28)] = 1034,
  [SMALL_STATE(29)] = 1084,
  [SMALL_STATE(30)] = 1134,
  [SMALL_STATE(31)] = 1164,
  [SMALL_STATE(32)] = 1214,
  [SMALL_STATE(33)] = 1244,
  [SMALL_STATE(34)] = 1275,
  [SMALL_STATE(35)] = 1303,
  [SMALL_STATE(36)] = 1331,
  [SMALL_STATE(37)] = 1359,
  [SMALL_STATE(38)] = 1387,
  [SMALL_STATE(39)] = 1415,
  [SMALL_STATE(40)] = 1460,
  [SMALL_STATE(41)] = 1505,
  [SMALL_STATE(42)] = 1547,
  [SMALL_STATE(43)] = 1589,
  [SMALL_STATE(44)] = 1614,
  [SMALL_STATE(45)] = 1636,
  [SMALL_STATE(46)] = 1658,
  [SMALL_STATE(47)] = 1680,
  [SMALL_STATE(48)] = 1702,
  [SMALL_STATE(49)] = 1724,
  [SMALL_STATE(50)] = 1746,
  [SMALL_STATE(51)] = 1768,
  [SMALL_STATE(52)] = 1790,
  [SMALL_STATE(53)] = 1812,
  [SMALL_STATE(54)] = 1834,
  [SMALL_STATE(55)] = 1855,
  [SMALL_STATE(56)] = 1874,
  [SMALL_STATE(57)] = 1895,
  [SMALL_STATE(58)] = 1916,
  [SMALL_STATE(59)] = 1934,
  [SMALL_STATE(60)] = 1948,
  [SMALL_STATE(61)] = 1965,
  [SMALL_STATE(62)] = 1982,
  [SMALL_STATE(63)] = 1991,
  [SMALL_STATE(64)] = 2007,
  [SMALL_STATE(65)] = 2019,
  [SMALL_STATE(66)] = 2026,
  [SMALL_STATE(67)] = 2037,
  [SMALL_STATE(68)] = 2048,
  [SMALL_STATE(69)] = 2059,
  [SMALL_STATE(70)] = 2070,
  [SMALL_STATE(71)] = 2081,
  [SMALL_STATE(72)] = 2092,
  [SMALL_STATE(73)] = 2099,
  [SMALL_STATE(74)] = 2110,
  [SMALL_STATE(75)] = 2121,
  [SMALL_STATE(76)] = 2128,
  [SMALL_STATE(77)] = 2135,
  [SMALL_STATE(78)] = 2146,
  [SMALL_STATE(79)] = 2157,
  [SMALL_STATE(80)] = 2168,
  [SMALL_STATE(81)] = 2179,
  [SMALL_STATE(82)] = 2186,
  [SMALL_STATE(83)] = 2193,
  [SMALL_STATE(84)] = 2204,
  [SMALL_STATE(85)] = 2215,
  [SMALL_STATE(86)] = 2222,
  [SMALL_STATE(87)] = 2233,
  [SMALL_STATE(88)] = 2240,
  [SMALL_STATE(89)] = 2251,
  [SMALL_STATE(90)] = 2262,
  [SMALL_STATE(91)] = 2270,
  [SMALL_STATE(92)] = 2280,
  [SMALL_STATE(93)] = 2290,
  [SMALL_STATE(94)] = 2300,
  [SMALL_STATE(95)] = 2310,
  [SMALL_STATE(96)] = 2320,
  [SMALL_STATE(97)] = 2330,
  [SMALL_STATE(98)] = 2340,
  [SMALL_STATE(99)] = 2350,
  [SMALL_STATE(100)] = 2360,
  [SMALL_STATE(101)] = 2368,
  [SMALL_STATE(102)] = 2378,
  [SMALL_STATE(103)] = 2388,
  [SMALL_STATE(104)] = 2398,
  [SMALL_STATE(105)] = 2408,
  [SMALL_STATE(106)] = 2418,
  [SMALL_STATE(107)] = 2424,
  [SMALL_STATE(108)] = 2434,
  [SMALL_STATE(109)] = 2440,
  [SMALL_STATE(110)] = 2450,
  [SMALL_STATE(111)] = 2460,
  [SMALL_STATE(112)] = 2470,
  [SMALL_STATE(113)] = 2476,
  [SMALL_STATE(114)] = 2486,
  [SMALL_STATE(115)] = 2496,
  [SMALL_STATE(116)] = 2506,
  [SMALL_STATE(117)] = 2516,
  [SMALL_STATE(118)] = 2526,
  [SMALL_STATE(119)] = 2536,
  [SMALL_STATE(120)] = 2546,
  [SMALL_STATE(121)] = 2556,
  [SMALL_STATE(122)] = 2566,
  [SMALL_STATE(123)] = 2571,
  [SMALL_STATE(124)] = 2576,
  [SMALL_STATE(125)] = 2581,
  [SMALL_STATE(126)] = 2586,
  [SMALL_STATE(127)] = 2591,
  [SMALL_STATE(128)] = 2596,
  [SMALL_STATE(129)] = 2601,
  [SMALL_STATE(130)] = 2606,
  [SMALL_STATE(131)] = 2611,
  [SMALL_STATE(132)] = 2616,
  [SMALL_STATE(133)] = 2621,
  [SMALL_STATE(134)] = 2625,
  [SMALL_STATE(135)] = 2629,
  [SMALL_STATE(136)] = 2633,
  [SMALL_STATE(137)] = 2637,
  [SMALL_STATE(138)] = 2641,
  [SMALL_STATE(139)] = 2645,
  [SMALL_STATE(140)] = 2649,
  [SMALL_STATE(141)] = 2653,
  [SMALL_STATE(142)] = 2657,
  [SMALL_STATE(143)] = 2661,
  [SMALL_STATE(144)] = 2665,
  [SMALL_STATE(145)] = 2669,
  [SMALL_STATE(146)] = 2673,
  [SMALL_STATE(147)] = 2677,
  [SMALL_STATE(148)] = 2681,
  [SMALL_STATE(149)] = 2685,
  [SMALL_STATE(150)] = 2689,
  [SMALL_STATE(151)] = 2693,
  [SMALL_STATE(152)] = 2697,
  [SMALL_STATE(153)] = 2701,
  [SMALL_STATE(154)] = 2705,
  [SMALL_STATE(155)] = 2709,
  [SMALL_STATE(156)] = 2713,
  [SMALL_STATE(157)] = 2717,
  [SMALL_STATE(158)] = 2721,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_application, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_application, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_application, 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_application, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_application, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_application, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_application, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_application, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_export, 10),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_export, 10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 6),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_export, 7),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_export, 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_export, 11),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_export, 11),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_clause_repeat2, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_clause_repeat2, 2), SHIFT_REPEAT(26),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_clause_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_clause_repeat1, 2), SHIFT_REPEAT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_clause, 8, .production_id = 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_clause, 7, .production_id = 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_clause, 7, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_clause, 6, .production_id = 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_clause, 6, .production_id = 3),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_clause, 5, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(83),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_export_repeat1, 2), SHIFT_REPEAT(100),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_export_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(41),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(42),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(55),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_export_repeat1, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [436] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
