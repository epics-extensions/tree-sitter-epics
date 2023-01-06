#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_path = 1,
  anon_sym_addpath = 2,
  anon_sym_include = 3,
  anon_sym_menu = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_choice = 9,
  anon_sym_COMMA = 10,
  anon_sym_recordtype = 11,
  anon_sym_field = 12,
  anon_sym_PERCENT = 13,
  aux_sym_ccode_token1 = 14,
  anon_sym_device = 15,
  anon_sym_driver = 16,
  anon_sym_link = 17,
  anon_sym_registrar = 18,
  anon_sym_variable = 19,
  anon_sym_function = 20,
  anon_sym_breaktable = 21,
  sym_double = 22,
  anon_sym_record = 23,
  anon_sym_grecord = 24,
  anon_sym_alias = 25,
  anon_sym_info = 26,
  anon_sym_POUND = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_text_fragment_token1 = 29,
  anon_sym_BSLASH = 30,
  sym_escape_sequence = 31,
  anon_sym_null = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  aux_sym__json_object_token1 = 35,
  anon_sym_LBRACK = 36,
  aux_sym__json_array_token1 = 37,
  anon_sym_RBRACK = 38,
  sym__unquoted_string = 39,
  anon_sym_DOLLAR_LBRACE = 40,
  anon_sym_DOLLAR_LPAREN = 41,
  sym__macro_expansion_inner = 42,
  sym_source_file = 43,
  sym__statements = 44,
  sym_path_definition = 45,
  sym_include_statement = 46,
  sym_menu_definition = 47,
  sym_menu_choice = 48,
  sym_record_type_definition = 49,
  sym_field_definition = 50,
  sym_field_descriptor = 51,
  sym_cdef = 52,
  sym_ccode = 53,
  sym_device_support_declaration = 54,
  sym_driver_declaration = 55,
  sym_link_declaration = 56,
  sym_registrar_declaration = 57,
  sym_variable_declaration = 58,
  sym_function_declaration = 59,
  sym_breakpoint_table = 60,
  sym_breakpoint_item = 61,
  sym_record_instance = 62,
  sym_alias = 63,
  sym_field = 64,
  sym_info = 65,
  sym_alias_statement = 66,
  sym_comment = 67,
  sym_string = 68,
  sym__string = 69,
  sym_string_text_fragment = 70,
  sym_json_value = 71,
  sym__json_object = 72,
  sym__json_array = 73,
  sym_record_type = 74,
  sym_record_name = 75,
  sym_field_item = 76,
  sym_field_name = 77,
  sym_macro_expansion = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_menu_definition_repeat1 = 80,
  aux_sym_record_type_definition_repeat1 = 81,
  aux_sym_field_definition_repeat1 = 82,
  aux_sym_breakpoint_table_repeat1 = 83,
  aux_sym_record_instance_repeat1 = 84,
  aux_sym__string_repeat1 = 85,
  aux_sym_string_text_fragment_repeat1 = 86,
  aux_sym__json_object_repeat1 = 87,
  aux_sym__json_array_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_path] = "path",
  [anon_sym_addpath] = "addpath",
  [anon_sym_include] = "include",
  [anon_sym_menu] = "menu",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_choice] = "choice",
  [anon_sym_COMMA] = ",",
  [anon_sym_recordtype] = "recordtype",
  [anon_sym_field] = "field",
  [anon_sym_PERCENT] = "%",
  [aux_sym_ccode_token1] = "ccode_token1",
  [anon_sym_device] = "device",
  [anon_sym_driver] = "driver",
  [anon_sym_link] = "link",
  [anon_sym_registrar] = "registrar",
  [anon_sym_variable] = "variable",
  [anon_sym_function] = "function",
  [anon_sym_breaktable] = "breaktable",
  [sym_double] = "double",
  [anon_sym_record] = "record",
  [anon_sym_grecord] = "grecord",
  [anon_sym_alias] = "alias",
  [anon_sym_info] = "info",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_text_fragment_token1] = "string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__json_object_token1] = "_json_object_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym__json_array_token1] = "_json_array_token1",
  [anon_sym_RBRACK] = "]",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
  [sym_source_file] = "source_file",
  [sym__statements] = "_statements",
  [sym_path_definition] = "path_definition",
  [sym_include_statement] = "include_statement",
  [sym_menu_definition] = "menu_definition",
  [sym_menu_choice] = "menu_choice",
  [sym_record_type_definition] = "record_type_definition",
  [sym_field_definition] = "field_definition",
  [sym_field_descriptor] = "field_descriptor",
  [sym_cdef] = "cdef",
  [sym_ccode] = "ccode",
  [sym_device_support_declaration] = "device_support_declaration",
  [sym_driver_declaration] = "driver_declaration",
  [sym_link_declaration] = "link_declaration",
  [sym_registrar_declaration] = "registrar_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_breakpoint_table] = "breakpoint_table",
  [sym_breakpoint_item] = "breakpoint_item",
  [sym_record_instance] = "record_instance",
  [sym_alias] = "alias",
  [sym_field] = "field",
  [sym_info] = "info",
  [sym_alias_statement] = "alias_statement",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym__string] = "_string",
  [sym_string_text_fragment] = "string_text_fragment",
  [sym_json_value] = "json_value",
  [sym__json_object] = "_json_object",
  [sym__json_array] = "_json_array",
  [sym_record_type] = "record_type",
  [sym_record_name] = "record_name",
  [sym_field_item] = "field_item",
  [sym_field_name] = "field_name",
  [sym_macro_expansion] = "macro_expansion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_menu_definition_repeat1] = "menu_definition_repeat1",
  [aux_sym_record_type_definition_repeat1] = "record_type_definition_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym_breakpoint_table_repeat1] = "breakpoint_table_repeat1",
  [aux_sym_record_instance_repeat1] = "record_instance_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym_string_text_fragment_repeat1] = "string_text_fragment_repeat1",
  [aux_sym__json_object_repeat1] = "_json_object_repeat1",
  [aux_sym__json_array_repeat1] = "_json_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_addpath] = anon_sym_addpath,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_recordtype] = anon_sym_recordtype,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_ccode_token1] = aux_sym_ccode_token1,
  [anon_sym_device] = anon_sym_device,
  [anon_sym_driver] = anon_sym_driver,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_registrar] = anon_sym_registrar,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_breaktable] = anon_sym_breaktable,
  [sym_double] = sym_double,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_grecord] = anon_sym_grecord,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_text_fragment_token1] = aux_sym_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__json_object_token1] = aux_sym__json_object_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__json_array_token1] = aux_sym__json_array_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
  [sym_source_file] = sym_source_file,
  [sym__statements] = sym__statements,
  [sym_path_definition] = sym_path_definition,
  [sym_include_statement] = sym_include_statement,
  [sym_menu_definition] = sym_menu_definition,
  [sym_menu_choice] = sym_menu_choice,
  [sym_record_type_definition] = sym_record_type_definition,
  [sym_field_definition] = sym_field_definition,
  [sym_field_descriptor] = sym_field_descriptor,
  [sym_cdef] = sym_cdef,
  [sym_ccode] = sym_ccode,
  [sym_device_support_declaration] = sym_device_support_declaration,
  [sym_driver_declaration] = sym_driver_declaration,
  [sym_link_declaration] = sym_link_declaration,
  [sym_registrar_declaration] = sym_registrar_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_breakpoint_table] = sym_breakpoint_table,
  [sym_breakpoint_item] = sym_breakpoint_item,
  [sym_record_instance] = sym_record_instance,
  [sym_alias] = sym_alias,
  [sym_field] = sym_field,
  [sym_info] = sym_info,
  [sym_alias_statement] = sym_alias_statement,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym__string] = sym__string,
  [sym_string_text_fragment] = sym_string_text_fragment,
  [sym_json_value] = sym_json_value,
  [sym__json_object] = sym__json_object,
  [sym__json_array] = sym__json_array,
  [sym_record_type] = sym_record_type,
  [sym_record_name] = sym_record_name,
  [sym_field_item] = sym_field_item,
  [sym_field_name] = sym_field_name,
  [sym_macro_expansion] = sym_macro_expansion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_menu_definition_repeat1] = aux_sym_menu_definition_repeat1,
  [aux_sym_record_type_definition_repeat1] = aux_sym_record_type_definition_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym_breakpoint_table_repeat1] = aux_sym_breakpoint_table_repeat1,
  [aux_sym_record_instance_repeat1] = aux_sym_record_instance_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym_string_text_fragment_repeat1] = aux_sym_string_text_fragment_repeat1,
  [aux_sym__json_object_repeat1] = aux_sym__json_object_repeat1,
  [aux_sym__json_array_repeat1] = aux_sym__json_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recordtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ccode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_driver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_registrar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breaktable] = {
    .visible = true,
    .named = false,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_object_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_array_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
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
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_path_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_descriptor] = {
    .visible = true,
    .named = true,
  },
  [sym_cdef] = {
    .visible = true,
    .named = true,
  },
  [sym_ccode] = {
    .visible = true,
    .named = true,
  },
  [sym_device_support_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_driver_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_link_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_registrar_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_breakpoint_table] = {
    .visible = true,
    .named = true,
  },
  [sym_breakpoint_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_string_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_json_value] = {
    .visible = true,
    .named = true,
  },
  [sym__json_object] = {
    .visible = false,
    .named = true,
  },
  [sym__json_array] = {
    .visible = false,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_item] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
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
  [aux_sym_menu_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_breakpoint_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias_name = 1,
  field_choice = 2,
  field_code = 3,
  field_dset_name = 4,
  field_eng_value = 5,
  field_jlif_name = 6,
  field_link_type = 7,
  field_name = 8,
  field_raw_value = 9,
  field_record_name = 10,
  field_record_type = 11,
  field_string = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_choice] = "choice",
  [field_code] = "code",
  [field_dset_name] = "dset_name",
  [field_eng_value] = "eng_value",
  [field_jlif_name] = "jlif_name",
  [field_link_type] = "link_type",
  [field_name] = "name",
  [field_raw_value] = "raw_value",
  [field_record_name] = "record_name",
  [field_record_type] = "record_type",
  [field_string] = "string",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 4},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_jlif_name, 4},
    {field_name, 2},
  [3] =
    {field_name, 2},
    {field_type, 4},
  [5] =
    {field_alias_name, 4},
    {field_record_name, 2},
  [7] =
    {field_code, 1},
  [8] =
    {field_eng_value, 1},
    {field_raw_value, 0},
  [10] =
    {field_eng_value, 2},
    {field_raw_value, 0},
  [12] =
    {field_name, 4},
    {field_type, 2},
  [14] =
    {field_choice, 8},
    {field_dset_name, 6},
    {field_link_type, 4},
    {field_record_type, 2},
  [18] =
    {field_name, 2},
    {field_string, 4},
  [20] =
    {field_alias_name, 2},
  [21] =
    {field_name, 2},
    {field_value, 4},
  [23] =
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '$'
        ? c == '"'
        : c <= '$')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_addpath);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_recordtype);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_driver);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_registrar);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_breaktable);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_grecord);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'x') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '(') ADVANCE(200);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 124},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 124},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 124},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 124},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 124},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 124},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 139},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 139},
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
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {(TSStateId)(-1)},
  [183] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_macro_expansion] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_addpath] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_recordtype] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_device] = ACTIONS(1),
    [anon_sym_driver] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_registrar] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_breaktable] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_grecord] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(147),
    [sym__statements] = STATE(23),
    [sym_path_definition] = STATE(24),
    [sym_include_statement] = STATE(24),
    [sym_menu_definition] = STATE(24),
    [sym_record_type_definition] = STATE(24),
    [sym_device_support_declaration] = STATE(24),
    [sym_driver_declaration] = STATE(24),
    [sym_link_declaration] = STATE(24),
    [sym_registrar_declaration] = STATE(24),
    [sym_variable_declaration] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_breakpoint_table] = STATE(24),
    [sym_record_instance] = STATE(24),
    [sym_alias_statement] = STATE(24),
    [sym_comment] = STATE(1),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_path] = ACTIONS(11),
    [anon_sym_addpath] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_menu] = ACTIONS(15),
    [anon_sym_recordtype] = ACTIONS(17),
    [anon_sym_device] = ACTIONS(19),
    [anon_sym_driver] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(23),
    [anon_sym_registrar] = ACTIONS(25),
    [anon_sym_variable] = ACTIONS(27),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_breaktable] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_grecord] = ACTIONS(35),
    [anon_sym_alias] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(15), 1,
      anon_sym_menu,
    ACTIONS(17), 1,
      anon_sym_recordtype,
    ACTIONS(19), 1,
      anon_sym_device,
    ACTIONS(21), 1,
      anon_sym_driver,
    ACTIONS(23), 1,
      anon_sym_link,
    ACTIONS(25), 1,
      anon_sym_registrar,
    ACTIONS(27), 1,
      anon_sym_variable,
    ACTIONS(29), 1,
      anon_sym_function,
    ACTIONS(31), 1,
      anon_sym_breaktable,
    ACTIONS(33), 1,
      anon_sym_record,
    ACTIONS(35), 1,
      anon_sym_grecord,
    ACTIONS(37), 1,
      anon_sym_alias,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      sym__statements,
    ACTIONS(11), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(2), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(24), 13,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_link_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [81] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_include,
    ACTIONS(49), 1,
      anon_sym_menu,
    ACTIONS(52), 1,
      anon_sym_recordtype,
    ACTIONS(55), 1,
      anon_sym_device,
    ACTIONS(58), 1,
      anon_sym_driver,
    ACTIONS(61), 1,
      anon_sym_link,
    ACTIONS(64), 1,
      anon_sym_registrar,
    ACTIONS(67), 1,
      anon_sym_variable,
    ACTIONS(70), 1,
      anon_sym_function,
    ACTIONS(73), 1,
      anon_sym_breaktable,
    ACTIONS(76), 1,
      anon_sym_record,
    ACTIONS(79), 1,
      anon_sym_grecord,
    ACTIONS(82), 1,
      anon_sym_alias,
    STATE(23), 1,
      sym__statements,
    ACTIONS(43), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(3), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(24), 13,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_link_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [160] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(87), 1,
      anon_sym_record,
    STATE(4), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(85), 23,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [202] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(91), 1,
      anon_sym_record,
    STATE(5), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(89), 23,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [244] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(95), 1,
      anon_sym_record,
    STATE(6), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(93), 23,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [286] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(99), 1,
      anon_sym_record,
    STATE(7), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(97), 22,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [327] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(103), 1,
      anon_sym_record,
    STATE(8), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(101), 20,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [366] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(107), 1,
      anon_sym_record,
    STATE(9), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [400] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(111), 1,
      anon_sym_record,
    STATE(10), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(109), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [434] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(115), 1,
      anon_sym_record,
    STATE(11), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [468] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(119), 1,
      anon_sym_record,
    STATE(12), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(117), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [502] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(123), 1,
      anon_sym_record,
    STATE(13), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [536] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(127), 1,
      anon_sym_record,
    STATE(14), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(125), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [570] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(131), 1,
      anon_sym_record,
    STATE(15), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [604] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 1,
      anon_sym_record,
    STATE(16), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(133), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [638] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(139), 1,
      anon_sym_record,
    STATE(17), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [672] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(143), 1,
      anon_sym_record,
    STATE(18), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(141), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [706] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(147), 1,
      anon_sym_record,
    STATE(19), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(145), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [740] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(151), 1,
      anon_sym_record,
    STATE(20), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(149), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [774] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(155), 1,
      anon_sym_record,
    STATE(21), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(153), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [808] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(159), 1,
      anon_sym_record,
    STATE(22), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(157), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [842] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(163), 1,
      anon_sym_record,
    STATE(23), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(161), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [876] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(167), 1,
      anon_sym_record,
    STATE(24), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [910] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(171), 1,
      anon_sym_record,
    STATE(25), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(169), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [944] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(175), 1,
      anon_sym_record,
    STATE(26), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(173), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [978] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(179), 1,
      anon_sym_record,
    STATE(27), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(177), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [1012] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(28), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(124), 2,
      sym_string,
      sym_json_value,
    STATE(150), 2,
      sym__json_object,
      sym__json_array,
    ACTIONS(185), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [1054] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(29), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(129), 2,
      sym_string,
      sym_json_value,
    STATE(150), 2,
      sym__json_object,
      sym__json_array,
    ACTIONS(185), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [1096] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(191), 1,
      anon_sym_include,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_field,
    ACTIONS(199), 1,
      anon_sym_alias,
    ACTIONS(202), 1,
      anon_sym_info,
    STATE(30), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_instance_repeat1,
    STATE(48), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1132] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      anon_sym_field,
    ACTIONS(209), 1,
      anon_sym_alias,
    ACTIONS(211), 1,
      anon_sym_info,
    STATE(30), 1,
      aux_sym_record_instance_repeat1,
    STATE(31), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(48), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1170] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(207), 1,
      anon_sym_field,
    ACTIONS(209), 1,
      anon_sym_alias,
    ACTIONS(211), 1,
      anon_sym_info,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_record_instance_repeat1,
    STATE(32), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(48), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1208] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_field,
    ACTIONS(219), 1,
      anon_sym_PERCENT,
    STATE(34), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(33), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(61), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1242] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(221), 1,
      anon_sym_include,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      anon_sym_field,
    ACTIONS(229), 1,
      anon_sym_PERCENT,
    STATE(34), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_type_definition_repeat1,
    STATE(61), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1274] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(217), 1,
      anon_sym_field,
    ACTIONS(219), 1,
      anon_sym_PERCENT,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(35), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(61), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1308] = 11,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(240), 1,
      anon_sym_BSLASH,
    ACTIONS(242), 1,
      sym_escape_sequence,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(41), 1,
      aux_sym__string_repeat1,
    STATE(47), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(95), 1,
      sym_string_text_fragment,
    STATE(36), 2,
      sym_comment,
      sym_macro_expansion,
  [1343] = 11,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(240), 1,
      anon_sym_BSLASH,
    ACTIONS(242), 1,
      sym_escape_sequence,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym__string_repeat1,
    STATE(47), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(95), 1,
      sym_string_text_fragment,
    STATE(37), 2,
      sym_comment,
      sym_macro_expansion,
  [1378] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      sym__unquoted_string,
    STATE(102), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(38), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_field_definition_repeat1,
  [1411] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(38), 1,
      aux_sym_field_definition_repeat1,
    STATE(102), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(39), 2,
      sym_comment,
      sym_macro_expansion,
  [1446] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_field_definition_repeat1,
    STATE(102), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(40), 2,
      sym_comment,
      sym_macro_expansion,
  [1481] = 10,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      sym_escape_sequence,
    STATE(47), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(95), 1,
      sym_string_text_fragment,
    STATE(41), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__string_repeat1,
  [1514] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(275), 1,
      anon_sym_include,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      anon_sym_choice,
    STATE(100), 2,
      sym_include_statement,
      sym_menu_choice,
    STATE(42), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_menu_definition_repeat1,
  [1542] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      anon_sym_choice,
    STATE(44), 1,
      aux_sym_menu_definition_repeat1,
    STATE(43), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(100), 2,
      sym_include_statement,
      sym_menu_choice,
  [1572] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(285), 1,
      anon_sym_choice,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_menu_definition_repeat1,
    STATE(44), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(100), 2,
      sym_include_statement,
      sym_menu_choice,
  [1602] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(45), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(289), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1623] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      aux_sym__json_array_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__json_array_repeat1,
    STATE(104), 1,
      sym__json_array,
    STATE(46), 2,
      sym_comment,
      sym_macro_expansion,
  [1652] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(240), 1,
      anon_sym_BSLASH,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(49), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(47), 2,
      sym_comment,
      sym_macro_expansion,
  [1681] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(48), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(301), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1702] = 8,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(308), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      sym_escape_sequence,
    STATE(49), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_text_fragment_repeat1,
  [1729] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      aux_sym__json_array_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym__json_array_repeat1,
    STATE(104), 1,
      sym__json_array,
    STATE(50), 2,
      sym_comment,
      sym_macro_expansion,
  [1758] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      aux_sym__json_object_token1,
    STATE(59), 1,
      aux_sym__json_object_repeat1,
    STATE(103), 1,
      sym__json_object,
    STATE(51), 2,
      sym_comment,
      sym_macro_expansion,
  [1787] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      aux_sym__json_object_token1,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym__json_object_repeat1,
    STATE(103), 1,
      sym__json_object,
    STATE(52), 2,
      sym_comment,
      sym_macro_expansion,
  [1816] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      aux_sym__json_array_token1,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym__json_array_repeat1,
    STATE(104), 1,
      sym__json_array,
    STATE(53), 2,
      sym_comment,
      sym_macro_expansion,
  [1845] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      aux_sym__json_object_token1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__json_object_repeat1,
    STATE(103), 1,
      sym__json_object,
    STATE(54), 2,
      sym_comment,
      sym_macro_expansion,
  [1874] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      aux_sym__json_array_token1,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym__json_array_repeat1,
    STATE(104), 1,
      sym__json_array,
    STATE(55), 2,
      sym_comment,
      sym_macro_expansion,
  [1903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(56), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(329), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1924] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(57), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(331), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1945] = 8,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym__json_array_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym__json_array,
    STATE(58), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_array_repeat1,
  [1972] = 9,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      aux_sym__json_object_token1,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__json_object_repeat1,
    STATE(103), 1,
      sym__json_object,
    STATE(59), 2,
      sym_comment,
      sym_macro_expansion,
  [2001] = 8,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      aux_sym__json_object_token1,
    STATE(103), 1,
      sym__json_object,
    STATE(60), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_object_repeat1,
  [2028] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(61), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(351), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2048] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(114), 1,
      sym_string,
    STATE(62), 2,
      sym_comment,
      sym_macro_expansion,
  [2074] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(25), 1,
      sym_string,
    STATE(63), 2,
      sym_comment,
      sym_macro_expansion,
  [2100] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(8), 1,
      sym_string,
    STATE(64), 2,
      sym_comment,
      sym_macro_expansion,
  [2126] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(175), 1,
      sym_string,
    STATE(65), 2,
      sym_comment,
      sym_macro_expansion,
  [2152] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(168), 1,
      sym_string,
    STATE(66), 2,
      sym_comment,
      sym_macro_expansion,
  [2178] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(67), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(353), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2198] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(68), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(355), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2218] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(122), 1,
      sym__string,
    STATE(123), 1,
      sym_field_name,
    STATE(69), 2,
      sym_comment,
      sym_macro_expansion,
  [2244] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(70), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(357), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2264] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(174), 1,
      sym_string,
    STATE(71), 2,
      sym_comment,
      sym_macro_expansion,
  [2290] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(112), 1,
      sym__string,
    STATE(167), 1,
      sym_record_type,
    STATE(72), 2,
      sym_comment,
      sym_macro_expansion,
  [2316] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(115), 1,
      sym__string,
    STATE(160), 1,
      sym_record_name,
    STATE(73), 2,
      sym_comment,
      sym_macro_expansion,
  [2342] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(121), 1,
      sym_string,
    STATE(74), 2,
      sym_comment,
      sym_macro_expansion,
  [2368] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(75), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(359), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2388] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(177), 1,
      sym_string,
    STATE(76), 2,
      sym_comment,
      sym_macro_expansion,
  [2414] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(136), 1,
      sym_string,
    STATE(77), 2,
      sym_comment,
      sym_macro_expansion,
  [2440] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(135), 1,
      sym_string,
    STATE(78), 2,
      sym_comment,
      sym_macro_expansion,
  [2466] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(134), 1,
      sym_string,
    STATE(79), 2,
      sym_comment,
      sym_macro_expansion,
  [2492] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(153), 1,
      sym_string,
    STATE(80), 2,
      sym_comment,
      sym_macro_expansion,
  [2518] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(115), 1,
      sym__string,
    STATE(133), 1,
      sym_record_name,
    STATE(81), 2,
      sym_comment,
      sym_macro_expansion,
  [2544] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(115), 1,
      sym__string,
    STATE(151), 1,
      sym_record_name,
    STATE(82), 2,
      sym_comment,
      sym_macro_expansion,
  [2570] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(112), 1,
      sym__string,
    STATE(181), 1,
      sym_record_type,
    STATE(83), 2,
      sym_comment,
      sym_macro_expansion,
  [2596] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(142), 1,
      sym_string,
    STATE(84), 2,
      sym_comment,
      sym_macro_expansion,
  [2622] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(115), 1,
      sym__string,
    STATE(141), 1,
      sym_record_name,
    STATE(85), 2,
      sym_comment,
      sym_macro_expansion,
  [2648] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      sym_double,
    STATE(97), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(113), 1,
      sym_breakpoint_item,
    STATE(86), 2,
      sym_comment,
      sym_macro_expansion,
  [2674] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(122), 1,
      sym__string,
    STATE(140), 1,
      sym_field_name,
    STATE(87), 2,
      sym_comment,
      sym_macro_expansion,
  [2700] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(138), 1,
      sym_string,
    STATE(88), 2,
      sym_comment,
      sym_macro_expansion,
  [2726] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(137), 1,
      sym_string,
    STATE(89), 2,
      sym_comment,
      sym_macro_expansion,
  [2752] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      sym_double,
    STATE(113), 1,
      sym_breakpoint_item,
    STATE(90), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_breakpoint_table_repeat1,
  [2776] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(112), 1,
      sym__string,
    STATE(180), 1,
      sym_record_type,
    STATE(91), 2,
      sym_comment,
      sym_macro_expansion,
  [2802] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(179), 1,
      sym_string,
    STATE(92), 2,
      sym_comment,
      sym_macro_expansion,
  [2828] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(162), 1,
      sym_string,
    STATE(93), 2,
      sym_comment,
      sym_macro_expansion,
  [2854] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(178), 1,
      sym_string,
    STATE(94), 2,
      sym_comment,
      sym_macro_expansion,
  [2880] = 6,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(370), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(372), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(95), 2,
      sym_comment,
      sym_macro_expansion,
  [2902] = 6,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(374), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(376), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(96), 2,
      sym_comment,
      sym_macro_expansion,
  [2924] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(363), 1,
      sym_double,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(113), 1,
      sym_breakpoint_item,
    STATE(97), 2,
      sym_comment,
      sym_macro_expansion,
  [2950] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(131), 1,
      sym_string,
    STATE(98), 2,
      sym_comment,
      sym_macro_expansion,
  [2976] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(380), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(99), 2,
      sym_comment,
      sym_macro_expansion,
  [2997] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(100), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(384), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3016] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(101), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(386), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3035] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(102), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(388), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3054] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(103), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(390), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3073] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(104), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(392), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3092] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(105), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(394), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3111] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(106), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(396), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3130] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(107), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(398), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3149] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(108), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(400), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3168] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(109), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(402), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3187] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(110), 2,
      sym_comment,
      sym_macro_expansion,
  [3208] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(408), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(111), 2,
      sym_comment,
      sym_macro_expansion,
  [3226] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(410), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(112), 2,
      sym_comment,
      sym_macro_expansion,
  [3244] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(113), 2,
      sym_comment,
      sym_macro_expansion,
  [3262] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(114), 2,
      sym_comment,
      sym_macro_expansion,
  [3282] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(418), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(115), 2,
      sym_comment,
      sym_macro_expansion,
  [3300] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      sym_double,
    STATE(116), 2,
      sym_comment,
      sym_macro_expansion,
  [3320] = 6,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(424), 1,
      aux_sym_ccode_token1,
    STATE(67), 1,
      sym_ccode,
    STATE(117), 2,
      sym_comment,
      sym_macro_expansion,
  [3340] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(118), 2,
      sym_comment,
      sym_macro_expansion,
  [3358] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(119), 2,
      sym_comment,
      sym_macro_expansion,
  [3375] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    STATE(120), 2,
      sym_comment,
      sym_macro_expansion,
  [3392] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(121), 2,
      sym_comment,
      sym_macro_expansion,
  [3409] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(122), 2,
      sym_comment,
      sym_macro_expansion,
  [3426] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(123), 2,
      sym_comment,
      sym_macro_expansion,
  [3443] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(124), 2,
      sym_comment,
      sym_macro_expansion,
  [3460] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(125), 2,
      sym_comment,
      sym_macro_expansion,
  [3477] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(126), 2,
      sym_comment,
      sym_macro_expansion,
  [3494] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(127), 2,
      sym_comment,
      sym_macro_expansion,
  [3511] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(446), 1,
      aux_sym_ccode_token1,
    STATE(128), 2,
      sym_comment,
      sym_macro_expansion,
  [3528] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(129), 2,
      sym_comment,
      sym_macro_expansion,
  [3545] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(130), 2,
      sym_comment,
      sym_macro_expansion,
  [3562] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(131), 2,
      sym_comment,
      sym_macro_expansion,
  [3579] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(132), 2,
      sym_comment,
      sym_macro_expansion,
  [3596] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(133), 2,
      sym_comment,
      sym_macro_expansion,
  [3613] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(134), 2,
      sym_comment,
      sym_macro_expansion,
  [3630] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(135), 2,
      sym_comment,
      sym_macro_expansion,
  [3647] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(136), 2,
      sym_comment,
      sym_macro_expansion,
  [3664] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(137), 2,
      sym_comment,
      sym_macro_expansion,
  [3681] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(138), 2,
      sym_comment,
      sym_macro_expansion,
  [3698] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym_comment,
      sym_macro_expansion,
  [3715] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    STATE(140), 2,
      sym_comment,
      sym_macro_expansion,
  [3732] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(141), 2,
      sym_comment,
      sym_macro_expansion,
  [3749] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(142), 2,
      sym_comment,
      sym_macro_expansion,
  [3766] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(143), 2,
      sym_comment,
      sym_macro_expansion,
  [3783] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(144), 2,
      sym_comment,
      sym_macro_expansion,
  [3800] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(145), 2,
      sym_comment,
      sym_macro_expansion,
  [3817] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(480), 1,
      sym__macro_expansion_inner,
    STATE(146), 2,
      sym_comment,
      sym_macro_expansion,
  [3834] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    STATE(147), 2,
      sym_comment,
      sym_macro_expansion,
  [3851] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(148), 2,
      sym_comment,
      sym_macro_expansion,
  [3868] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(149), 2,
      sym_comment,
      sym_macro_expansion,
  [3885] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(150), 2,
      sym_comment,
      sym_macro_expansion,
  [3902] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(151), 2,
      sym_comment,
      sym_macro_expansion,
  [3919] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(492), 1,
      sym_double,
    STATE(152), 2,
      sym_comment,
      sym_macro_expansion,
  [3936] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(153), 2,
      sym_comment,
      sym_macro_expansion,
  [3953] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(154), 2,
      sym_comment,
      sym_macro_expansion,
  [3970] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(155), 2,
      sym_comment,
      sym_macro_expansion,
  [3987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    STATE(156), 2,
      sym_comment,
      sym_macro_expansion,
  [4004] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    STATE(157), 2,
      sym_comment,
      sym_macro_expansion,
  [4021] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    STATE(158), 2,
      sym_comment,
      sym_macro_expansion,
  [4038] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(159), 2,
      sym_comment,
      sym_macro_expansion,
  [4055] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(160), 2,
      sym_comment,
      sym_macro_expansion,
  [4072] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    STATE(161), 2,
      sym_comment,
      sym_macro_expansion,
  [4089] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(162), 2,
      sym_comment,
      sym_macro_expansion,
  [4106] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(163), 2,
      sym_comment,
      sym_macro_expansion,
  [4123] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    STATE(164), 2,
      sym_comment,
      sym_macro_expansion,
  [4140] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(518), 1,
      anon_sym_LPAREN,
    STATE(165), 2,
      sym_comment,
      sym_macro_expansion,
  [4157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(166), 2,
      sym_comment,
      sym_macro_expansion,
  [4174] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(167), 2,
      sym_comment,
      sym_macro_expansion,
  [4191] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(168), 2,
      sym_comment,
      sym_macro_expansion,
  [4208] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(169), 2,
      sym_comment,
      sym_macro_expansion,
  [4225] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(170), 2,
      sym_comment,
      sym_macro_expansion,
  [4242] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    STATE(171), 2,
      sym_comment,
      sym_macro_expansion,
  [4259] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(172), 2,
      sym_comment,
      sym_macro_expansion,
  [4276] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(173), 2,
      sym_comment,
      sym_macro_expansion,
  [4293] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(174), 2,
      sym_comment,
      sym_macro_expansion,
  [4310] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(175), 2,
      sym_comment,
      sym_macro_expansion,
  [4327] = 5,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(540), 1,
      sym__macro_expansion_inner,
    STATE(176), 2,
      sym_comment,
      sym_macro_expansion,
  [4344] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(177), 2,
      sym_comment,
      sym_macro_expansion,
  [4361] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(178), 2,
      sym_comment,
      sym_macro_expansion,
  [4378] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(179), 2,
      sym_comment,
      sym_macro_expansion,
  [4395] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(180), 2,
      sym_comment,
      sym_macro_expansion,
  [4412] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(181), 2,
      sym_comment,
      sym_macro_expansion,
  [4429] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [4433] = 1,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 202,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 327,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 434,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 502,
  [SMALL_STATE(14)] = 536,
  [SMALL_STATE(15)] = 570,
  [SMALL_STATE(16)] = 604,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 672,
  [SMALL_STATE(19)] = 706,
  [SMALL_STATE(20)] = 740,
  [SMALL_STATE(21)] = 774,
  [SMALL_STATE(22)] = 808,
  [SMALL_STATE(23)] = 842,
  [SMALL_STATE(24)] = 876,
  [SMALL_STATE(25)] = 910,
  [SMALL_STATE(26)] = 944,
  [SMALL_STATE(27)] = 978,
  [SMALL_STATE(28)] = 1012,
  [SMALL_STATE(29)] = 1054,
  [SMALL_STATE(30)] = 1096,
  [SMALL_STATE(31)] = 1132,
  [SMALL_STATE(32)] = 1170,
  [SMALL_STATE(33)] = 1208,
  [SMALL_STATE(34)] = 1242,
  [SMALL_STATE(35)] = 1274,
  [SMALL_STATE(36)] = 1308,
  [SMALL_STATE(37)] = 1343,
  [SMALL_STATE(38)] = 1378,
  [SMALL_STATE(39)] = 1411,
  [SMALL_STATE(40)] = 1446,
  [SMALL_STATE(41)] = 1481,
  [SMALL_STATE(42)] = 1514,
  [SMALL_STATE(43)] = 1542,
  [SMALL_STATE(44)] = 1572,
  [SMALL_STATE(45)] = 1602,
  [SMALL_STATE(46)] = 1623,
  [SMALL_STATE(47)] = 1652,
  [SMALL_STATE(48)] = 1681,
  [SMALL_STATE(49)] = 1702,
  [SMALL_STATE(50)] = 1729,
  [SMALL_STATE(51)] = 1758,
  [SMALL_STATE(52)] = 1787,
  [SMALL_STATE(53)] = 1816,
  [SMALL_STATE(54)] = 1845,
  [SMALL_STATE(55)] = 1874,
  [SMALL_STATE(56)] = 1903,
  [SMALL_STATE(57)] = 1924,
  [SMALL_STATE(58)] = 1945,
  [SMALL_STATE(59)] = 1972,
  [SMALL_STATE(60)] = 2001,
  [SMALL_STATE(61)] = 2028,
  [SMALL_STATE(62)] = 2048,
  [SMALL_STATE(63)] = 2074,
  [SMALL_STATE(64)] = 2100,
  [SMALL_STATE(65)] = 2126,
  [SMALL_STATE(66)] = 2152,
  [SMALL_STATE(67)] = 2178,
  [SMALL_STATE(68)] = 2198,
  [SMALL_STATE(69)] = 2218,
  [SMALL_STATE(70)] = 2244,
  [SMALL_STATE(71)] = 2264,
  [SMALL_STATE(72)] = 2290,
  [SMALL_STATE(73)] = 2316,
  [SMALL_STATE(74)] = 2342,
  [SMALL_STATE(75)] = 2368,
  [SMALL_STATE(76)] = 2388,
  [SMALL_STATE(77)] = 2414,
  [SMALL_STATE(78)] = 2440,
  [SMALL_STATE(79)] = 2466,
  [SMALL_STATE(80)] = 2492,
  [SMALL_STATE(81)] = 2518,
  [SMALL_STATE(82)] = 2544,
  [SMALL_STATE(83)] = 2570,
  [SMALL_STATE(84)] = 2596,
  [SMALL_STATE(85)] = 2622,
  [SMALL_STATE(86)] = 2648,
  [SMALL_STATE(87)] = 2674,
  [SMALL_STATE(88)] = 2700,
  [SMALL_STATE(89)] = 2726,
  [SMALL_STATE(90)] = 2752,
  [SMALL_STATE(91)] = 2776,
  [SMALL_STATE(92)] = 2802,
  [SMALL_STATE(93)] = 2828,
  [SMALL_STATE(94)] = 2854,
  [SMALL_STATE(95)] = 2880,
  [SMALL_STATE(96)] = 2902,
  [SMALL_STATE(97)] = 2924,
  [SMALL_STATE(98)] = 2950,
  [SMALL_STATE(99)] = 2976,
  [SMALL_STATE(100)] = 2997,
  [SMALL_STATE(101)] = 3016,
  [SMALL_STATE(102)] = 3035,
  [SMALL_STATE(103)] = 3054,
  [SMALL_STATE(104)] = 3073,
  [SMALL_STATE(105)] = 3092,
  [SMALL_STATE(106)] = 3111,
  [SMALL_STATE(107)] = 3130,
  [SMALL_STATE(108)] = 3149,
  [SMALL_STATE(109)] = 3168,
  [SMALL_STATE(110)] = 3187,
  [SMALL_STATE(111)] = 3208,
  [SMALL_STATE(112)] = 3226,
  [SMALL_STATE(113)] = 3244,
  [SMALL_STATE(114)] = 3262,
  [SMALL_STATE(115)] = 3282,
  [SMALL_STATE(116)] = 3300,
  [SMALL_STATE(117)] = 3320,
  [SMALL_STATE(118)] = 3340,
  [SMALL_STATE(119)] = 3358,
  [SMALL_STATE(120)] = 3375,
  [SMALL_STATE(121)] = 3392,
  [SMALL_STATE(122)] = 3409,
  [SMALL_STATE(123)] = 3426,
  [SMALL_STATE(124)] = 3443,
  [SMALL_STATE(125)] = 3460,
  [SMALL_STATE(126)] = 3477,
  [SMALL_STATE(127)] = 3494,
  [SMALL_STATE(128)] = 3511,
  [SMALL_STATE(129)] = 3528,
  [SMALL_STATE(130)] = 3545,
  [SMALL_STATE(131)] = 3562,
  [SMALL_STATE(132)] = 3579,
  [SMALL_STATE(133)] = 3596,
  [SMALL_STATE(134)] = 3613,
  [SMALL_STATE(135)] = 3630,
  [SMALL_STATE(136)] = 3647,
  [SMALL_STATE(137)] = 3664,
  [SMALL_STATE(138)] = 3681,
  [SMALL_STATE(139)] = 3698,
  [SMALL_STATE(140)] = 3715,
  [SMALL_STATE(141)] = 3732,
  [SMALL_STATE(142)] = 3749,
  [SMALL_STATE(143)] = 3766,
  [SMALL_STATE(144)] = 3783,
  [SMALL_STATE(145)] = 3800,
  [SMALL_STATE(146)] = 3817,
  [SMALL_STATE(147)] = 3834,
  [SMALL_STATE(148)] = 3851,
  [SMALL_STATE(149)] = 3868,
  [SMALL_STATE(150)] = 3885,
  [SMALL_STATE(151)] = 3902,
  [SMALL_STATE(152)] = 3919,
  [SMALL_STATE(153)] = 3936,
  [SMALL_STATE(154)] = 3953,
  [SMALL_STATE(155)] = 3970,
  [SMALL_STATE(156)] = 3987,
  [SMALL_STATE(157)] = 4004,
  [SMALL_STATE(158)] = 4021,
  [SMALL_STATE(159)] = 4038,
  [SMALL_STATE(160)] = 4055,
  [SMALL_STATE(161)] = 4072,
  [SMALL_STATE(162)] = 4089,
  [SMALL_STATE(163)] = 4106,
  [SMALL_STATE(164)] = 4123,
  [SMALL_STATE(165)] = 4140,
  [SMALL_STATE(166)] = 4157,
  [SMALL_STATE(167)] = 4174,
  [SMALL_STATE(168)] = 4191,
  [SMALL_STATE(169)] = 4208,
  [SMALL_STATE(170)] = 4225,
  [SMALL_STATE(171)] = 4242,
  [SMALL_STATE(172)] = 4259,
  [SMALL_STATE(173)] = 4276,
  [SMALL_STATE(174)] = 4293,
  [SMALL_STATE(175)] = 4310,
  [SMALL_STATE(176)] = 4327,
  [SMALL_STATE(177)] = 4344,
  [SMALL_STATE(178)] = 4361,
  [SMALL_STATE(179)] = 4378,
  [SMALL_STATE(180)] = 4395,
  [SMALL_STATE(181)] = 4412,
  [SMALL_STATE(182)] = 4429,
  [SMALL_STATE(183)] = 4433,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 8, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 8, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_statement, 6, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_statement, 6, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_definition, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_definition, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 9, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 9, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(64),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(125),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(126),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(127),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(64),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(120),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(117),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(37),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(6),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(96),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(96),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(95),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(64),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(130),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 11),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(96),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(96),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 12),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 6, .production_id = 12),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(46),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(104),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(51),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(103),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdef, 2, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ccode, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 9, .production_id = 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 8, .production_id = 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2), SHIFT_REPEAT(116),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 2, .production_id = 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_choice, 6, .production_id = 10),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_descriptor, 4, .production_id = 13),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_name, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 4, .production_id = 7),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [482] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_item, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics_db(void) {
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
