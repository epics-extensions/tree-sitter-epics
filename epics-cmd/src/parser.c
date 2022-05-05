#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_LT = 7,
  anon_sym_GT = 8,
  anon_sym_GT_GT = 9,
  sym_file_descriptor = 10,
  anon_sym_DQUOTE = 11,
  anon_sym_SQUOTE = 12,
  aux_sym__quoted_string_text_fragment_token1 = 13,
  anon_sym_BSLASH = 14,
  aux_sym__quoted_string_text_fragment2_token1 = 15,
  anon_sym_BSLASH_DQUOTE = 16,
  anon_sym_BSLASH_BSLASH = 17,
  anon_sym_BSLASH_SQUOTE = 18,
  sym_word = 19,
  anon_sym_DOLLAR_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_DOLLAR_LPAREN = 22,
  sym__macro_expansion_inner = 23,
  sym_source_file = 24,
  sym_comment = 25,
  sym_command = 26,
  aux_sym__command_args = 27,
  sym_source = 28,
  sym_redirect = 29,
  sym_command_name = 30,
  sym_argument = 31,
  sym_path = 32,
  sym_string = 33,
  sym__quoted_string = 34,
  sym__quoted_string2 = 35,
  sym__quoted_string_text_fragment = 36,
  sym__quoted_string_text_fragment2 = 37,
  sym_escape_sequence = 38,
  sym_escape_sequence2 = 39,
  sym__argument = 40,
  sym_macro_expansion = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym__quoted_string_repeat1 = 43,
  aux_sym__quoted_string2_repeat1 = 44,
  aux_sym__quoted_string_text_fragment_repeat1 = 45,
  aux_sym__quoted_string_text_fragment2_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_GT] = ">>",
  [sym_file_descriptor] = "file_descriptor",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_string_text_fragment_token1] = "_quoted_string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__quoted_string_text_fragment2_token1] = "_quoted_string_text_fragment2_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [sym_word] = "word",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_command] = "command",
  [aux_sym__command_args] = "_command_args",
  [sym_source] = "source",
  [sym_redirect] = "redirect",
  [sym_command_name] = "command_name",
  [sym_argument] = "argument",
  [sym_path] = "path",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym__quoted_string2] = "_quoted_string2",
  [sym__quoted_string_text_fragment] = "_quoted_string_text_fragment",
  [sym__quoted_string_text_fragment2] = "_quoted_string_text_fragment2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_escape_sequence2] = "escape_sequence",
  [sym__argument] = "_argument",
  [sym_macro_expansion] = "macro_expansion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym__quoted_string2_repeat1] = "_quoted_string2_repeat1",
  [aux_sym__quoted_string_text_fragment_repeat1] = "_quoted_string_text_fragment_repeat1",
  [aux_sym__quoted_string_text_fragment2_repeat1] = "_quoted_string_text_fragment2_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_file_descriptor] = sym_file_descriptor,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_string_text_fragment_token1] = aux_sym__quoted_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__quoted_string_text_fragment2_token1] = aux_sym__quoted_string_text_fragment2_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_SQUOTE] = anon_sym_BSLASH_SQUOTE,
  [sym_word] = sym_word,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_command] = sym_command,
  [aux_sym__command_args] = aux_sym__command_args,
  [sym_source] = sym_source,
  [sym_redirect] = sym_redirect,
  [sym_command_name] = sym_command_name,
  [sym_argument] = sym_argument,
  [sym_path] = sym_path,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym__quoted_string2] = sym__quoted_string2,
  [sym__quoted_string_text_fragment] = sym__quoted_string_text_fragment,
  [sym__quoted_string_text_fragment2] = sym__quoted_string_text_fragment2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_escape_sequence2] = sym_escape_sequence,
  [sym__argument] = sym__argument,
  [sym_macro_expansion] = sym_macro_expansion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym__quoted_string2_repeat1] = aux_sym__quoted_string2_repeat1,
  [aux_sym__quoted_string_text_fragment_repeat1] = aux_sym__quoted_string_text_fragment_repeat1,
  [aux_sym__quoted_string_text_fragment2_repeat1] = aux_sym__quoted_string_text_fragment2_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_file_descriptor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment2_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__macro_expansion_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__command_args] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string2] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string_text_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string_text_fragment2] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence2] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_expansion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment2_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '{') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(42);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_file_descriptor);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment2_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment2_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 7},
  [72] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_macro_expansion] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_file_descriptor] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym_comment] = STATE(68),
    [sym_command] = STATE(68),
    [sym_source] = STATE(68),
    [sym_command_name] = STATE(2),
    [sym_string] = STATE(10),
    [sym__quoted_string] = STATE(13),
    [sym__quoted_string2] = STATE(13),
    [sym__argument] = STATE(20),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym_word] = ACTIONS(17),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(17), 1,
      sym_word,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_file_descriptor,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(2), 1,
      sym_macro_expansion,
    STATE(4), 1,
      aux_sym__command_args,
    STATE(10), 1,
      sym_string,
    STATE(23), 1,
      sym__argument,
    STATE(24), 1,
      sym_argument,
    STATE(56), 1,
      sym_redirect,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(23), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [52] = 14,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_word,
    STATE(2), 1,
      sym_command_name,
    STATE(10), 1,
      sym_string,
    STATE(20), 1,
      sym__argument,
    STATE(3), 2,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
    STATE(68), 3,
      sym_comment,
      sym_command,
      sym_source,
  [99] = 15,
    ACTIONS(17), 1,
      sym_word,
    ACTIONS(25), 1,
      sym_file_descriptor,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(52), 1,
      anon_sym_LF,
    STATE(4), 1,
      sym_macro_expansion,
    STATE(6), 1,
      aux_sym__command_args,
    STATE(10), 1,
      sym_string,
    STATE(23), 1,
      sym__argument,
    STATE(24), 1,
      sym_argument,
    STATE(59), 1,
      sym_redirect,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(23), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [148] = 15,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      sym_word,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_command_name,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 1,
      sym_macro_expansion,
    STATE(10), 1,
      sym_string,
    STATE(20), 1,
      sym__argument,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
    STATE(68), 3,
      sym_comment,
      sym_command,
      sym_source,
  [197] = 12,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_word,
    STATE(10), 1,
      sym_string,
    STATE(23), 1,
      sym__argument,
    STATE(24), 1,
      sym_argument,
    STATE(6), 2,
      aux_sym__command_args,
      sym_macro_expansion,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(58), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
  [239] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym_macro_expansion,
    ACTIONS(71), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [263] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_macro_expansion,
    ACTIONS(75), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [287] = 12,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      sym_word,
    STATE(9), 1,
      sym_macro_expansion,
    STATE(15), 1,
      aux_sym__command_args,
    STATE(40), 1,
      sym_argument,
    STATE(43), 1,
      sym__argument,
    STATE(51), 1,
      sym_string,
    STATE(52), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [325] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym_macro_expansion,
    ACTIONS(87), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [349] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym_macro_expansion,
    ACTIONS(91), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [373] = 12,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      sym_word,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym__command_args,
    STATE(12), 1,
      sym_macro_expansion,
    STATE(40), 1,
      sym_argument,
    STATE(43), 1,
      sym__argument,
    STATE(51), 1,
      sym_string,
    STATE(52), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [411] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_macro_expansion,
    ACTIONS(97), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [435] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_macro_expansion,
    ACTIONS(101), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [459] = 11,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      sym_word,
    STATE(40), 1,
      sym_argument,
    STATE(43), 1,
      sym__argument,
    STATE(51), 1,
      sym_string,
    STATE(15), 2,
      aux_sym__command_args,
      sym_macro_expansion,
    STATE(52), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [495] = 9,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(120), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(16), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_repeat1,
    STATE(49), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [526] = 9,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    STATE(35), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(131), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(17), 2,
      sym_macro_expansion,
      aux_sym__quoted_string2_repeat1,
    STATE(41), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [557] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      aux_sym__quoted_string_repeat1,
    STATE(18), 1,
      sym_macro_expansion,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(140), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(49), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [590] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(136), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym__quoted_string_repeat1,
    STATE(19), 1,
      sym_macro_expansion,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(140), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(49), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [623] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym_macro_expansion,
    ACTIONS(146), 8,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [646] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(136), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_macro_expansion,
    STATE(25), 1,
      aux_sym__quoted_string_repeat1,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(140), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(49), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [679] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    STATE(22), 1,
      sym_macro_expansion,
    STATE(26), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(35), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(156), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(41), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [712] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_macro_expansion,
    ACTIONS(160), 8,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [735] = 6,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      sym_macro_expansion,
    ACTIONS(166), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [760] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(136), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym__quoted_string_repeat1,
    STATE(25), 1,
      sym_macro_expansion,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(140), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(49), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [793] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(26), 1,
      sym_macro_expansion,
    STATE(35), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(156), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(41), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [826] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_macro_expansion,
    STATE(28), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(35), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(156), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(41), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [859] = 10,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(28), 1,
      sym_macro_expansion,
    STATE(35), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(156), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(41), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [892] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(56), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_macro_expansion,
    ACTIONS(58), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [914] = 10,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      sym_word,
    STATE(10), 1,
      sym_string,
    STATE(30), 1,
      sym_macro_expansion,
    STATE(60), 1,
      sym_path,
    STATE(63), 1,
      sym__argument,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [946] = 10,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      sym_word,
    STATE(10), 1,
      sym_string,
    STATE(31), 1,
      sym_macro_expansion,
    STATE(63), 1,
      sym__argument,
    STATE(64), 1,
      sym_path,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [978] = 10,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      sym_word,
    STATE(10), 1,
      sym_string,
    STATE(32), 1,
      sym_macro_expansion,
    STATE(57), 1,
      sym_path,
    STATE(63), 1,
      sym__argument,
    STATE(13), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [1010] = 7,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(186), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(33), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_text_fragment_repeat1,
  [1034] = 7,
    ACTIONS(25), 1,
      sym_file_descriptor,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym_macro_expansion,
    STATE(58), 1,
      sym_redirect,
    ACTIONS(23), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [1058] = 6,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(35), 1,
      sym_macro_expansion,
    STATE(39), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(190), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(192), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1080] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(36), 1,
      sym_macro_expansion,
    ACTIONS(194), 2,
      anon_sym_LT,
      sym_word,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1100] = 6,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(33), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    STATE(37), 1,
      sym_macro_expansion,
    ACTIONS(196), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(198), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1122] = 7,
    ACTIONS(25), 1,
      sym_file_descriptor,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_macro_expansion,
    STATE(61), 1,
      sym_redirect,
    ACTIONS(23), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [1146] = 7,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    ACTIONS(207), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(210), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(39), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_text_fragment2_repeat1,
  [1170] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      sym_macro_expansion,
    ACTIONS(162), 4,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1189] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(41), 1,
      sym_macro_expansion,
    ACTIONS(214), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(216), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1208] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(42), 1,
      sym_macro_expansion,
    ACTIONS(218), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(220), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1227] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(43), 1,
      sym_macro_expansion,
    ACTIONS(158), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1244] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(44), 1,
      sym_macro_expansion,
    ACTIONS(99), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1261] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(45), 1,
      sym_macro_expansion,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(224), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1280] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(46), 1,
      sym_macro_expansion,
    ACTIONS(69), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1297] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(47), 1,
      sym_macro_expansion,
    ACTIONS(226), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(228), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1316] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(48), 1,
      sym_macro_expansion,
    ACTIONS(89), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1333] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(49), 1,
      sym_macro_expansion,
    ACTIONS(230), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(232), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1352] = 5,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(50), 1,
      sym_macro_expansion,
    ACTIONS(234), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(236), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1371] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(51), 1,
      sym_macro_expansion,
    ACTIONS(85), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1388] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(52), 1,
      sym_macro_expansion,
    ACTIONS(95), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1405] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(53), 1,
      sym_macro_expansion,
    ACTIONS(73), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1422] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(54), 1,
      sym_macro_expansion,
    ACTIONS(56), 4,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1438] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(238), 1,
      anon_sym_GT,
    STATE(55), 1,
      sym_macro_expansion,
  [1451] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(52), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_macro_expansion,
  [1464] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(240), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym_macro_expansion,
  [1477] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(242), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym_macro_expansion,
  [1490] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_macro_expansion,
  [1503] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_macro_expansion,
  [1516] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_macro_expansion,
  [1529] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(246), 1,
      sym__macro_expansion_inner,
    STATE(62), 1,
      sym_macro_expansion,
  [1542] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym_macro_expansion,
  [1555] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym_macro_expansion,
  [1568] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(252), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_macro_expansion,
  [1581] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_macro_expansion,
  [1594] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_macro_expansion,
  [1607] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(256), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym_macro_expansion,
  [1620] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_macro_expansion,
  [1633] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(260), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_macro_expansion,
  [1646] = 4,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(262), 1,
      sym__macro_expansion_inner,
    STATE(71), 1,
      sym_macro_expansion,
  [1659] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 239,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 325,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 373,
  [SMALL_STATE(13)] = 411,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 557,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 623,
  [SMALL_STATE(21)] = 646,
  [SMALL_STATE(22)] = 679,
  [SMALL_STATE(23)] = 712,
  [SMALL_STATE(24)] = 735,
  [SMALL_STATE(25)] = 760,
  [SMALL_STATE(26)] = 793,
  [SMALL_STATE(27)] = 826,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 892,
  [SMALL_STATE(30)] = 914,
  [SMALL_STATE(31)] = 946,
  [SMALL_STATE(32)] = 978,
  [SMALL_STATE(33)] = 1010,
  [SMALL_STATE(34)] = 1034,
  [SMALL_STATE(35)] = 1058,
  [SMALL_STATE(36)] = 1080,
  [SMALL_STATE(37)] = 1100,
  [SMALL_STATE(38)] = 1122,
  [SMALL_STATE(39)] = 1146,
  [SMALL_STATE(40)] = 1170,
  [SMALL_STATE(41)] = 1189,
  [SMALL_STATE(42)] = 1208,
  [SMALL_STATE(43)] = 1227,
  [SMALL_STATE(44)] = 1244,
  [SMALL_STATE(45)] = 1261,
  [SMALL_STATE(46)] = 1280,
  [SMALL_STATE(47)] = 1297,
  [SMALL_STATE(48)] = 1316,
  [SMALL_STATE(49)] = 1333,
  [SMALL_STATE(50)] = 1352,
  [SMALL_STATE(51)] = 1371,
  [SMALL_STATE(52)] = 1388,
  [SMALL_STATE(53)] = 1405,
  [SMALL_STATE(54)] = 1422,
  [SMALL_STATE(55)] = 1438,
  [SMALL_STATE(56)] = 1451,
  [SMALL_STATE(57)] = 1464,
  [SMALL_STATE(58)] = 1477,
  [SMALL_STATE(59)] = 1490,
  [SMALL_STATE(60)] = 1503,
  [SMALL_STATE(61)] = 1516,
  [SMALL_STATE(62)] = 1529,
  [SMALL_STATE(63)] = 1542,
  [SMALL_STATE(64)] = 1555,
  [SMALL_STATE(65)] = 1568,
  [SMALL_STATE(66)] = 1581,
  [SMALL_STATE(67)] = 1594,
  [SMALL_STATE(68)] = 1607,
  [SMALL_STATE(69)] = 1620,
  [SMALL_STATE(70)] = 1633,
  [SMALL_STATE(71)] = 1646,
  [SMALL_STATE(72)] = 1659,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_args, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_args, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(21),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(27),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string2, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string2, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string2, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string2, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(19),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(22),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(51),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(45),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(45),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(47),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(50),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(50),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(42),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_args, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_args, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(45),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(45),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string_text_fragment2, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string_text_fragment2, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string_text_fragment, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string_text_fragment, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(50),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(50),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence2, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence2, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics_cmd(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
