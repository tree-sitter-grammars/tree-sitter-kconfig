#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_symbol = 1,
  anon_sym_mainmenu = 2,
  anon_sym_config = 3,
  anon_sym_menuconfig = 4,
  anon_sym_choice = 5,
  anon_sym_endchoice = 6,
  anon_sym_comment = 7,
  anon_sym_menu = 8,
  anon_sym_endmenu = 9,
  anon_sym_if = 10,
  anon_sym_endif = 11,
  anon_sym_source = 12,
  anon_sym_bool = 13,
  anon_sym_tristate = 14,
  anon_sym_int = 15,
  anon_sym_hex = 16,
  anon_sym_string = 17,
  aux_sym_type_definition_token1 = 18,
  anon_sym_prompt = 19,
  anon_sym_default = 20,
  anon_sym_def_bool = 21,
  anon_sym_def_tristate = 22,
  anon_sym_dependson = 23,
  anon_sym_select = 24,
  anon_sym_imply = 25,
  anon_sym_visibleif = 26,
  anon_sym_range = 27,
  anon_sym_help = 28,
  sym_optional = 29,
  sym_modules = 30,
  anon_sym_BANG = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_LT = 36,
  anon_sym_GT = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_DOLLAR_LPAREN = 42,
  sym_macro_content = 43,
  sym_prompt = 44,
  sym_comment = 45,
  sym__help_text = 46,
  sym_configuration = 47,
  sym_mainmenu = 48,
  sym__entry = 49,
  sym_config = 50,
  sym_menuconfig = 51,
  sym_choice = 52,
  sym_comment_entry = 53,
  sym_menu = 54,
  sym_if = 55,
  sym_source = 56,
  sym__config_option = 57,
  sym_type_definition = 58,
  sym_input_prompt = 59,
  sym_default_value = 60,
  sym_type_definition_default = 61,
  sym_dependencies = 62,
  sym_reverse_dependencies = 63,
  sym_weak_reverse_dependencies = 64,
  sym_limiting_menu_display = 65,
  sym_numerical_ranges = 66,
  sym_help_text = 67,
  sym_conditional_clause = 68,
  sym_expression = 69,
  sym_unary_expression = 70,
  sym_binary_expression = 71,
  sym_parenthesized_expression = 72,
  sym_macro_variable = 73,
  aux_sym_configuration_repeat1 = 74,
  aux_sym_config_repeat1 = 75,
  aux_sym_macro_variable_repeat1 = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [anon_sym_mainmenu] = "mainmenu",
  [anon_sym_config] = "config",
  [anon_sym_menuconfig] = "menuconfig",
  [anon_sym_choice] = "choice",
  [anon_sym_endchoice] = "endchoice",
  [anon_sym_comment] = "comment",
  [anon_sym_menu] = "menu",
  [anon_sym_endmenu] = "endmenu",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_source] = "source",
  [anon_sym_bool] = "bool",
  [anon_sym_tristate] = "tristate",
  [anon_sym_int] = "int",
  [anon_sym_hex] = "hex",
  [anon_sym_string] = "string",
  [aux_sym_type_definition_token1] = "type_definition_token1",
  [anon_sym_prompt] = "prompt",
  [anon_sym_default] = "default",
  [anon_sym_def_bool] = "def_bool",
  [anon_sym_def_tristate] = "def_tristate",
  [anon_sym_dependson] = "depends on",
  [anon_sym_select] = "select",
  [anon_sym_imply] = "imply",
  [anon_sym_visibleif] = "visible if",
  [anon_sym_range] = "range",
  [anon_sym_help] = "help",
  [sym_optional] = "optional",
  [sym_modules] = "modules",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [sym_macro_content] = "macro_content",
  [sym_prompt] = "prompt",
  [sym_comment] = "comment",
  [sym__help_text] = "text",
  [sym_configuration] = "configuration",
  [sym_mainmenu] = "mainmenu",
  [sym__entry] = "_entry",
  [sym_config] = "config",
  [sym_menuconfig] = "menuconfig",
  [sym_choice] = "choice",
  [sym_comment_entry] = "comment_entry",
  [sym_menu] = "menu",
  [sym_if] = "if",
  [sym_source] = "source",
  [sym__config_option] = "_config_option",
  [sym_type_definition] = "type_definition",
  [sym_input_prompt] = "input_prompt",
  [sym_default_value] = "default_value",
  [sym_type_definition_default] = "type_definition_default",
  [sym_dependencies] = "dependencies",
  [sym_reverse_dependencies] = "reverse_dependencies",
  [sym_weak_reverse_dependencies] = "weak_reverse_dependencies",
  [sym_limiting_menu_display] = "limiting_menu_display",
  [sym_numerical_ranges] = "numerical_ranges",
  [sym_help_text] = "help_text",
  [sym_conditional_clause] = "conditional_clause",
  [sym_expression] = "expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_macro_variable] = "macro_variable",
  [aux_sym_configuration_repeat1] = "configuration_repeat1",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_macro_variable_repeat1] = "macro_variable_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [anon_sym_mainmenu] = anon_sym_mainmenu,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_menuconfig] = anon_sym_menuconfig,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_endchoice] = anon_sym_endchoice,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_endmenu] = anon_sym_endmenu,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_tristate] = anon_sym_tristate,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_string] = anon_sym_string,
  [aux_sym_type_definition_token1] = aux_sym_type_definition_token1,
  [anon_sym_prompt] = anon_sym_prompt,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_def_bool] = anon_sym_def_bool,
  [anon_sym_def_tristate] = anon_sym_def_tristate,
  [anon_sym_dependson] = anon_sym_dependson,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_imply] = anon_sym_imply,
  [anon_sym_visibleif] = anon_sym_visibleif,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_help] = anon_sym_help,
  [sym_optional] = sym_optional,
  [sym_modules] = sym_modules,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [sym_macro_content] = sym_macro_content,
  [sym_prompt] = sym_prompt,
  [sym_comment] = sym_comment,
  [sym__help_text] = sym__help_text,
  [sym_configuration] = sym_configuration,
  [sym_mainmenu] = sym_mainmenu,
  [sym__entry] = sym__entry,
  [sym_config] = sym_config,
  [sym_menuconfig] = sym_menuconfig,
  [sym_choice] = sym_choice,
  [sym_comment_entry] = sym_comment_entry,
  [sym_menu] = sym_menu,
  [sym_if] = sym_if,
  [sym_source] = sym_source,
  [sym__config_option] = sym__config_option,
  [sym_type_definition] = sym_type_definition,
  [sym_input_prompt] = sym_input_prompt,
  [sym_default_value] = sym_default_value,
  [sym_type_definition_default] = sym_type_definition_default,
  [sym_dependencies] = sym_dependencies,
  [sym_reverse_dependencies] = sym_reverse_dependencies,
  [sym_weak_reverse_dependencies] = sym_weak_reverse_dependencies,
  [sym_limiting_menu_display] = sym_limiting_menu_display,
  [sym_numerical_ranges] = sym_numerical_ranges,
  [sym_help_text] = sym_help_text,
  [sym_conditional_clause] = sym_conditional_clause,
  [sym_expression] = sym_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_macro_variable] = sym_macro_variable,
  [aux_sym_configuration_repeat1] = aux_sym_configuration_repeat1,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_macro_variable_repeat1] = aux_sym_macro_variable_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mainmenu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menuconfig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endchoice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmenu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tristate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def_tristate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dependson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visibleif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_help] = {
    .visible = true,
    .named = false,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_modules] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_content] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__help_text] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym_mainmenu] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_menuconfig] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_menu] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__config_option] = {
    .visible = false,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_input_prompt] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_default] = {
    .visible = true,
    .named = true,
  },
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_reverse_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_weak_reverse_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_limiting_menu_display] = {
    .visible = true,
    .named = true,
  },
  [sym_numerical_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_help_text] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_configuration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_condition, 1},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym__help_text,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 15,
  [64] = 18,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 65,
  [74] = 68,
  [75] = 16,
  [76] = 62,
  [77] = 77,
  [78] = 78,
  [79] = 12,
  [80] = 17,
  [81] = 19,
  [82] = 72,
  [83] = 83,
  [84] = 11,
  [85] = 14,
  [86] = 86,
  [87] = 87,
  [88] = 13,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 94,
  [98] = 94,
  [99] = 99,
  [100] = 99,
  [101] = 99,
  [102] = 102,
  [103] = 12,
  [104] = 15,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 107,
  [111] = 34,
  [112] = 29,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 123,
  [135] = 135,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == '|') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '|') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '|') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\\') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(52);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(65);
      END_STATE();
    case 28:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 29:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 31:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(30)
      END_STATE();
    case 32:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '|') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == '|') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_type_definition_token1);
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_dependson);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_visibleif);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(86);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(86);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_prompt);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'd') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_imply);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_endmenu);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_modules);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_def_bool);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_mainmenu);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_tristate);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_endchoice);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_menuconfig);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_def_tristate);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 0},
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
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 34},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 34},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 34},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 34},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 34},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 34},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0, .external_lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_mainmenu] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_menuconfig] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_endchoice] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_endmenu] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_tristate] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_hex] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_def_bool] = ACTIONS(1),
    [anon_sym_def_tristate] = ACTIONS(1),
    [anon_sym_dependson] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_imply] = ACTIONS(1),
    [anon_sym_visibleif] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_help] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [sym_modules] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [sym_prompt] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__help_text] = ACTIONS(1),
  },
  [1] = {
    [sym_configuration] = STATE(122),
    [sym_mainmenu] = STATE(44),
    [sym__entry] = STATE(45),
    [sym_config] = STATE(45),
    [sym_menuconfig] = STATE(45),
    [sym_choice] = STATE(45),
    [sym_comment_entry] = STATE(45),
    [sym_menu] = STATE(45),
    [sym_if] = STATE(45),
    [sym_source] = STATE(45),
    [aux_sym_configuration_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_mainmenu] = ACTIONS(7),
    [anon_sym_config] = ACTIONS(9),
    [anon_sym_menuconfig] = ACTIONS(11),
    [anon_sym_choice] = ACTIONS(13),
    [anon_sym_comment] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_source] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__entry] = STATE(46),
    [sym_config] = STATE(46),
    [sym_menuconfig] = STATE(46),
    [sym_choice] = STATE(46),
    [sym_comment_entry] = STATE(46),
    [sym_menu] = STATE(46),
    [sym_if] = STATE(46),
    [sym_source] = STATE(46),
    [sym__config_option] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_input_prompt] = STATE(9),
    [sym_default_value] = STATE(9),
    [sym_type_definition_default] = STATE(9),
    [sym_dependencies] = STATE(9),
    [sym_reverse_dependencies] = STATE(9),
    [sym_weak_reverse_dependencies] = STATE(9),
    [sym_limiting_menu_display] = STATE(9),
    [sym_numerical_ranges] = STATE(9),
    [sym_help_text] = STATE(9),
    [aux_sym_configuration_repeat1] = STATE(46),
    [aux_sym_config_repeat1] = STATE(9),
    [anon_sym_config] = ACTIONS(9),
    [anon_sym_menuconfig] = ACTIONS(11),
    [anon_sym_choice] = ACTIONS(13),
    [anon_sym_comment] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [anon_sym_endmenu] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_source] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(45),
    [sym_modules] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__entry] = STATE(50),
    [sym_config] = STATE(50),
    [sym_menuconfig] = STATE(50),
    [sym_choice] = STATE(50),
    [sym_comment_entry] = STATE(50),
    [sym_menu] = STATE(50),
    [sym_if] = STATE(50),
    [sym_source] = STATE(50),
    [sym__config_option] = STATE(2),
    [sym_type_definition] = STATE(2),
    [sym_input_prompt] = STATE(2),
    [sym_default_value] = STATE(2),
    [sym_type_definition_default] = STATE(2),
    [sym_dependencies] = STATE(2),
    [sym_reverse_dependencies] = STATE(2),
    [sym_weak_reverse_dependencies] = STATE(2),
    [sym_limiting_menu_display] = STATE(2),
    [sym_numerical_ranges] = STATE(2),
    [sym_help_text] = STATE(2),
    [aux_sym_configuration_repeat1] = STATE(50),
    [aux_sym_config_repeat1] = STATE(2),
    [anon_sym_config] = ACTIONS(9),
    [anon_sym_menuconfig] = ACTIONS(11),
    [anon_sym_choice] = ACTIONS(13),
    [anon_sym_comment] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [anon_sym_endmenu] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_source] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(49),
    [sym_modules] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__entry] = STATE(47),
    [sym_config] = STATE(47),
    [sym_menuconfig] = STATE(47),
    [sym_choice] = STATE(47),
    [sym_comment_entry] = STATE(47),
    [sym_menu] = STATE(47),
    [sym_if] = STATE(47),
    [sym_source] = STATE(47),
    [sym__config_option] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_input_prompt] = STATE(9),
    [sym_default_value] = STATE(9),
    [sym_type_definition_default] = STATE(9),
    [sym_dependencies] = STATE(9),
    [sym_reverse_dependencies] = STATE(9),
    [sym_weak_reverse_dependencies] = STATE(9),
    [sym_limiting_menu_display] = STATE(9),
    [sym_numerical_ranges] = STATE(9),
    [sym_help_text] = STATE(9),
    [aux_sym_configuration_repeat1] = STATE(47),
    [aux_sym_config_repeat1] = STATE(9),
    [anon_sym_config] = ACTIONS(9),
    [anon_sym_menuconfig] = ACTIONS(11),
    [anon_sym_choice] = ACTIONS(13),
    [anon_sym_comment] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_source] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(45),
    [sym_modules] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__entry] = STATE(48),
    [sym_config] = STATE(48),
    [sym_menuconfig] = STATE(48),
    [sym_choice] = STATE(48),
    [sym_comment_entry] = STATE(48),
    [sym_menu] = STATE(48),
    [sym_if] = STATE(48),
    [sym_source] = STATE(48),
    [sym__config_option] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_input_prompt] = STATE(9),
    [sym_default_value] = STATE(9),
    [sym_type_definition_default] = STATE(9),
    [sym_dependencies] = STATE(9),
    [sym_reverse_dependencies] = STATE(9),
    [sym_weak_reverse_dependencies] = STATE(9),
    [sym_limiting_menu_display] = STATE(9),
    [sym_numerical_ranges] = STATE(9),
    [sym_help_text] = STATE(9),
    [aux_sym_configuration_repeat1] = STATE(48),
    [aux_sym_config_repeat1] = STATE(9),
    [anon_sym_config] = ACTIONS(9),
    [anon_sym_menuconfig] = ACTIONS(11),
    [anon_sym_choice] = ACTIONS(13),
    [anon_sym_comment] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_source] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(45),
    [sym_modules] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__config_option] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_input_prompt] = STATE(9),
    [sym_default_value] = STATE(9),
    [sym_type_definition_default] = STATE(9),
    [sym_dependencies] = STATE(9),
    [sym_reverse_dependencies] = STATE(9),
    [sym_weak_reverse_dependencies] = STATE(9),
    [sym_limiting_menu_display] = STATE(9),
    [sym_numerical_ranges] = STATE(9),
    [sym_help_text] = STATE(9),
    [aux_sym_config_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_config] = ACTIONS(51),
    [anon_sym_menuconfig] = ACTIONS(51),
    [anon_sym_choice] = ACTIONS(51),
    [anon_sym_endchoice] = ACTIONS(51),
    [anon_sym_comment] = ACTIONS(51),
    [anon_sym_menu] = ACTIONS(53),
    [anon_sym_endmenu] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_endif] = ACTIONS(51),
    [anon_sym_source] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(45),
    [sym_modules] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__config_option] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_input_prompt] = STATE(9),
    [sym_default_value] = STATE(9),
    [sym_type_definition_default] = STATE(9),
    [sym_dependencies] = STATE(9),
    [sym_reverse_dependencies] = STATE(9),
    [sym_weak_reverse_dependencies] = STATE(9),
    [sym_limiting_menu_display] = STATE(9),
    [sym_numerical_ranges] = STATE(9),
    [sym_help_text] = STATE(9),
    [aux_sym_config_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_config] = ACTIONS(55),
    [anon_sym_menuconfig] = ACTIONS(55),
    [anon_sym_choice] = ACTIONS(55),
    [anon_sym_endchoice] = ACTIONS(55),
    [anon_sym_comment] = ACTIONS(55),
    [anon_sym_menu] = ACTIONS(57),
    [anon_sym_endmenu] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_endif] = ACTIONS(55),
    [anon_sym_source] = ACTIONS(55),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(45),
    [sym_modules] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__config_option] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_input_prompt] = STATE(10),
    [sym_default_value] = STATE(10),
    [sym_type_definition_default] = STATE(10),
    [sym_dependencies] = STATE(10),
    [sym_reverse_dependencies] = STATE(10),
    [sym_weak_reverse_dependencies] = STATE(10),
    [sym_limiting_menu_display] = STATE(10),
    [sym_numerical_ranges] = STATE(10),
    [sym_help_text] = STATE(10),
    [aux_sym_config_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_config] = ACTIONS(59),
    [anon_sym_menuconfig] = ACTIONS(59),
    [anon_sym_choice] = ACTIONS(59),
    [anon_sym_endchoice] = ACTIONS(59),
    [anon_sym_comment] = ACTIONS(59),
    [anon_sym_menu] = ACTIONS(61),
    [anon_sym_endmenu] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_endif] = ACTIONS(59),
    [anon_sym_source] = ACTIONS(59),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(63),
    [sym_modules] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__config_option] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_input_prompt] = STATE(9),
    [sym_default_value] = STATE(9),
    [sym_type_definition_default] = STATE(9),
    [sym_dependencies] = STATE(9),
    [sym_reverse_dependencies] = STATE(9),
    [sym_weak_reverse_dependencies] = STATE(9),
    [sym_limiting_menu_display] = STATE(9),
    [sym_numerical_ranges] = STATE(9),
    [sym_help_text] = STATE(9),
    [aux_sym_config_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_config] = ACTIONS(65),
    [anon_sym_menuconfig] = ACTIONS(65),
    [anon_sym_choice] = ACTIONS(65),
    [anon_sym_endchoice] = ACTIONS(65),
    [anon_sym_comment] = ACTIONS(65),
    [anon_sym_menu] = ACTIONS(67),
    [anon_sym_endmenu] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_endif] = ACTIONS(65),
    [anon_sym_source] = ACTIONS(65),
    [anon_sym_bool] = ACTIONS(69),
    [anon_sym_tristate] = ACTIONS(69),
    [anon_sym_int] = ACTIONS(69),
    [anon_sym_hex] = ACTIONS(69),
    [anon_sym_string] = ACTIONS(69),
    [anon_sym_prompt] = ACTIONS(72),
    [anon_sym_default] = ACTIONS(75),
    [anon_sym_def_bool] = ACTIONS(78),
    [anon_sym_def_tristate] = ACTIONS(78),
    [anon_sym_dependson] = ACTIONS(81),
    [anon_sym_select] = ACTIONS(84),
    [anon_sym_imply] = ACTIONS(87),
    [anon_sym_visibleif] = ACTIONS(90),
    [anon_sym_range] = ACTIONS(93),
    [anon_sym_help] = ACTIONS(96),
    [sym_optional] = ACTIONS(99),
    [sym_modules] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__config_option] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_input_prompt] = STATE(9),
    [sym_default_value] = STATE(9),
    [sym_type_definition_default] = STATE(9),
    [sym_dependencies] = STATE(9),
    [sym_reverse_dependencies] = STATE(9),
    [sym_weak_reverse_dependencies] = STATE(9),
    [sym_limiting_menu_display] = STATE(9),
    [sym_numerical_ranges] = STATE(9),
    [sym_help_text] = STATE(9),
    [aux_sym_config_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_config] = ACTIONS(102),
    [anon_sym_menuconfig] = ACTIONS(102),
    [anon_sym_choice] = ACTIONS(102),
    [anon_sym_endchoice] = ACTIONS(102),
    [anon_sym_comment] = ACTIONS(102),
    [anon_sym_menu] = ACTIONS(104),
    [anon_sym_endmenu] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(102),
    [anon_sym_endif] = ACTIONS(102),
    [anon_sym_source] = ACTIONS(102),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_tristate] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_prompt] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_def_bool] = ACTIONS(31),
    [anon_sym_def_tristate] = ACTIONS(31),
    [anon_sym_dependson] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_imply] = ACTIONS(37),
    [anon_sym_visibleif] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(43),
    [sym_optional] = ACTIONS(45),
    [sym_modules] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_menu,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(106), 34,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [45] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_menu,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(110), 34,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [90] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_menu,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(118), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 3,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(106), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [141] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_menu,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      anon_sym_AMP_AMP,
    ACTIONS(118), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 3,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(106), 29,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      anon_sym_menu,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 34,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_menu,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 34,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_menu,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 34,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(108), 3,
      anon_sym_menu,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(106), 33,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_menu,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(134), 34,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [421] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_menu,
    ACTIONS(142), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(118), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 3,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(138), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [475] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_dependson,
    ACTIONS(39), 1,
      anon_sym_visibleif,
    ACTIONS(144), 1,
      sym_symbol,
    ACTIONS(148), 1,
      anon_sym_prompt,
    ACTIONS(150), 1,
      anon_sym_default,
    ACTIONS(154), 1,
      anon_sym_select,
    ACTIONS(156), 1,
      anon_sym_imply,
    ACTIONS(158), 1,
      anon_sym_range,
    ACTIONS(160), 1,
      anon_sym_help,
    ACTIONS(152), 2,
      anon_sym_def_bool,
      anon_sym_def_tristate,
    ACTIONS(162), 2,
      sym_optional,
      sym_modules,
    ACTIONS(146), 5,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
    STATE(4), 12,
      sym__config_option,
      sym_type_definition,
      sym_input_prompt,
      sym_default_value,
      sym_type_definition_default,
      sym_dependencies,
      sym_reverse_dependencies,
      sym_weak_reverse_dependencies,
      sym_limiting_menu_display,
      sym_numerical_ranges,
      sym_help_text,
      aux_sym_config_repeat1,
  [535] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_prompt,
    ACTIONS(29), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_dependson,
    ACTIONS(35), 1,
      anon_sym_select,
    ACTIONS(37), 1,
      anon_sym_imply,
    ACTIONS(39), 1,
      anon_sym_visibleif,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(43), 1,
      anon_sym_help,
    ACTIONS(31), 2,
      anon_sym_def_bool,
      anon_sym_def_tristate,
    ACTIONS(164), 2,
      sym_optional,
      sym_modules,
    ACTIONS(25), 5,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
    STATE(7), 12,
      sym__config_option,
      sym_type_definition,
      sym_input_prompt,
      sym_default_value,
      sym_type_definition_default,
      sym_dependencies,
      sym_reverse_dependencies,
      sym_weak_reverse_dependencies,
      sym_limiting_menu_display,
      sym_numerical_ranges,
      sym_help_text,
      aux_sym_config_repeat1,
  [592] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_prompt,
    ACTIONS(29), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_dependson,
    ACTIONS(35), 1,
      anon_sym_select,
    ACTIONS(37), 1,
      anon_sym_imply,
    ACTIONS(39), 1,
      anon_sym_visibleif,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(43), 1,
      anon_sym_help,
    ACTIONS(31), 2,
      anon_sym_def_bool,
      anon_sym_def_tristate,
    ACTIONS(166), 2,
      sym_optional,
      sym_modules,
    ACTIONS(25), 5,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
    STATE(6), 12,
      sym__config_option,
      sym_type_definition,
      sym_input_prompt,
      sym_default_value,
      sym_type_definition_default,
      sym_dependencies,
      sym_reverse_dependencies,
      sym_weak_reverse_dependencies,
      sym_limiting_menu_display,
      sym_numerical_ranges,
      sym_help_text,
      aux_sym_config_repeat1,
  [649] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_prompt,
    ACTIONS(29), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_dependson,
    ACTIONS(35), 1,
      anon_sym_select,
    ACTIONS(37), 1,
      anon_sym_imply,
    ACTIONS(39), 1,
      anon_sym_visibleif,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(43), 1,
      anon_sym_help,
    ACTIONS(31), 2,
      anon_sym_def_bool,
      anon_sym_def_tristate,
    ACTIONS(168), 2,
      sym_optional,
      sym_modules,
    ACTIONS(25), 5,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
    STATE(5), 12,
      sym__config_option,
      sym_type_definition,
      sym_input_prompt,
      sym_default_value,
      sym_type_definition_default,
      sym_dependencies,
      sym_reverse_dependencies,
      sym_weak_reverse_dependencies,
      sym_limiting_menu_display,
      sym_numerical_ranges,
      sym_help_text,
      aux_sym_config_repeat1,
  [706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_menu,
    ACTIONS(170), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_menu,
    ACTIONS(174), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_menu,
    ACTIONS(178), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_menu,
    ACTIONS(182), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_menu,
    ACTIONS(186), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_menu,
    ACTIONS(190), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_menu,
    ACTIONS(194), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_menu,
    ACTIONS(198), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_menu,
    ACTIONS(202), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_menu,
    ACTIONS(206), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_menu,
    ACTIONS(210), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_menu,
    ACTIONS(214), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_menu,
    ACTIONS(218), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_menu,
    ACTIONS(222), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_menu,
    ACTIONS(226), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_menu,
    ACTIONS(230), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_menu,
    ACTIONS(234), 27,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
      anon_sym_bool,
      anon_sym_tristate,
      anon_sym_int,
      anon_sym_hex,
      anon_sym_string,
      anon_sym_prompt,
      anon_sym_default,
      anon_sym_def_bool,
      anon_sym_def_tristate,
      anon_sym_dependson,
      anon_sym_select,
      anon_sym_imply,
      anon_sym_visibleif,
      anon_sym_range,
      anon_sym_help,
      sym_optional,
      sym_modules,
  [1318] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      anon_sym_AMP_AMP,
    ACTIONS(142), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(238), 1,
      anon_sym_endif,
    ACTIONS(118), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 3,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(51), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1375] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_config,
    ACTIONS(245), 1,
      anon_sym_menuconfig,
    ACTIONS(248), 1,
      anon_sym_choice,
    ACTIONS(251), 1,
      anon_sym_comment,
    ACTIONS(254), 1,
      anon_sym_menu,
    ACTIONS(257), 1,
      anon_sym_if,
    ACTIONS(260), 1,
      anon_sym_source,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      anon_sym_endchoice,
      anon_sym_endmenu,
      anon_sym_endif,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1417] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(49), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1456] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1495] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(265), 1,
      anon_sym_endmenu,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1534] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(267), 1,
      anon_sym_endchoice,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1573] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(269), 1,
      anon_sym_endchoice,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1612] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1651] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(23), 1,
      anon_sym_endmenu,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1690] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(11), 1,
      anon_sym_menuconfig,
    ACTIONS(13), 1,
      anon_sym_choice,
    ACTIONS(15), 1,
      anon_sym_comment,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_source,
    ACTIONS(273), 1,
      anon_sym_endif,
    STATE(43), 9,
      sym__entry,
      sym_config,
      sym_menuconfig,
      sym_choice,
      sym_comment_entry,
      sym_menu,
      sym_if,
      sym_source,
      aux_sym_configuration_repeat1,
  [1729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_menu,
    ACTIONS(275), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_menu,
    ACTIONS(279), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_menu,
    ACTIONS(283), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_menu,
    ACTIONS(287), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1805] = 8,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(293), 1,
      aux_sym_type_definition_token1,
    ACTIONS(295), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 1,
      anon_sym_AMP_AMP,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      sym_comment,
    STATE(130), 1,
      sym_conditional_clause,
    ACTIONS(301), 5,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1834] = 8,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(295), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 1,
      anon_sym_AMP_AMP,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_type_definition_token1,
    STATE(129), 1,
      sym_conditional_clause,
    ACTIONS(301), 5,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_menu,
    ACTIONS(307), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_menu,
    ACTIONS(311), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_menu,
    ACTIONS(315), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_menu,
    ACTIONS(319), 10,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_endchoice,
      anon_sym_comment,
      anon_sym_endmenu,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_source,
  [1939] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(14), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [1965] = 3,
    ACTIONS(122), 1,
      aux_sym_type_definition_token1,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(124), 9,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1983] = 4,
    ACTIONS(106), 1,
      aux_sym_type_definition_token1,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(108), 8,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2003] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(91), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2029] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(64), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2055] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(84), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(13), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2107] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(11), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(18), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2159] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(56), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(17), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(89), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2237] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(88), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2263] = 3,
    ACTIONS(126), 1,
      aux_sym_type_definition_token1,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(128), 9,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2281] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(85), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2307] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(57), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2333] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(20), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2359] = 3,
    ACTIONS(110), 1,
      aux_sym_type_definition_token1,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(112), 9,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2377] = 3,
    ACTIONS(130), 1,
      aux_sym_type_definition_token1,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(132), 9,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2395] = 3,
    ACTIONS(134), 1,
      aux_sym_type_definition_token1,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(136), 9,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2413] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(80), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2439] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(92), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2465] = 3,
    ACTIONS(106), 1,
      aux_sym_type_definition_token1,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(108), 9,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2483] = 6,
    ACTIONS(106), 1,
      aux_sym_type_definition_token1,
    ACTIONS(297), 1,
      anon_sym_AMP_AMP,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 5,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(90), 1,
      sym_expression,
    ACTIONS(331), 2,
      sym_prompt,
      sym_symbol,
    STATE(81), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_BANG,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(42), 1,
      sym_expression,
    ACTIONS(323), 2,
      sym_prompt,
      sym_symbol,
    STATE(19), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_macro_variable,
  [2559] = 5,
    ACTIONS(106), 1,
      aux_sym_type_definition_token1,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_if,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(301), 5,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      anon_sym_AMP_AMP,
    ACTIONS(142), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 3,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2606] = 6,
    ACTIONS(295), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 1,
      anon_sym_AMP_AMP,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_type_definition_token1,
    ACTIONS(301), 5,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2629] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      anon_sym_AMP_AMP,
    ACTIONS(142), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 3,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2654] = 6,
    ACTIONS(295), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 1,
      anon_sym_AMP_AMP,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_type_definition_token1,
    ACTIONS(301), 5,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_menu,
    ACTIONS(347), 7,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_menuconfig,
      anon_sym_choice,
      anon_sym_comment,
      anon_sym_if,
      anon_sym_source,
  [2693] = 6,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(355), 1,
      sym_macro_content,
    ACTIONS(357), 1,
      sym_prompt,
    STATE(100), 2,
      sym_macro_variable,
      aux_sym_macro_variable_repeat1,
  [2713] = 6,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(361), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(364), 1,
      sym_macro_content,
    ACTIONS(367), 1,
      sym_prompt,
    STATE(95), 2,
      sym_macro_variable,
      aux_sym_macro_variable_repeat1,
  [2733] = 7,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_type_definition_token1,
    ACTIONS(372), 1,
      anon_sym_prompt,
    ACTIONS(374), 1,
      sym_prompt,
    STATE(109), 1,
      sym_input_prompt,
    STATE(114), 1,
      sym_conditional_clause,
  [2755] = 6,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(357), 1,
      sym_prompt,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(378), 1,
      sym_macro_content,
    STATE(101), 2,
      sym_macro_variable,
      aux_sym_macro_variable_repeat1,
  [2775] = 6,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(357), 1,
      sym_prompt,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(382), 1,
      sym_macro_content,
    STATE(99), 2,
      sym_macro_variable,
      aux_sym_macro_variable_repeat1,
  [2795] = 6,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(357), 1,
      sym_prompt,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      sym_macro_content,
    STATE(95), 2,
      sym_macro_variable,
      aux_sym_macro_variable_repeat1,
  [2815] = 6,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(357), 1,
      sym_prompt,
    ACTIONS(386), 1,
      sym_macro_content,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(95), 2,
      sym_macro_variable,
      aux_sym_macro_variable_repeat1,
  [2835] = 6,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(357), 1,
      sym_prompt,
    ACTIONS(386), 1,
      sym_macro_content,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(95), 2,
      sym_macro_variable,
      aux_sym_macro_variable_repeat1,
  [2855] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(392), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      sym_macro_content,
      sym_prompt,
  [2865] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      sym_macro_content,
      sym_prompt,
  [2875] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      sym_macro_content,
      sym_prompt,
  [2885] = 4,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym_type_definition_token1,
    STATE(127), 1,
      sym_conditional_clause,
  [2898] = 4,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_type_definition_token1,
    STATE(126), 1,
      sym_conditional_clause,
  [2911] = 4,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_type_definition_token1,
    STATE(133), 1,
      sym_conditional_clause,
  [2924] = 4,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_type_definition_token1,
    STATE(117), 1,
      sym_conditional_clause,
  [2937] = 4,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym_type_definition_token1,
    STATE(118), 1,
      sym_conditional_clause,
  [2950] = 4,
    ACTIONS(291), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym_type_definition_token1,
    STATE(131), 1,
      sym_conditional_clause,
  [2963] = 3,
    ACTIONS(206), 1,
      aux_sym_type_definition_token1,
    ACTIONS(208), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
  [2973] = 3,
    ACTIONS(186), 1,
      aux_sym_type_definition_token1,
    ACTIONS(188), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      sym_comment,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_symbol,
  [2990] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym_type_definition_token1,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_symbol,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_symbol,
  [3011] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_type_definition_token1,
  [3018] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_type_definition_token1,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_prompt,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_prompt,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_prompt,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_prompt,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_symbol,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_prompt,
  [3074] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_type_definition_token1,
  [3081] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_type_definition_token1,
  [3088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_symbol,
  [3095] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_type_definition_token1,
  [3102] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_type_definition_token1,
  [3109] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_type_definition_token1,
  [3116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_symbol,
  [3123] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_type_definition_token1,
  [3130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_prompt,
  [3137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__help_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 45,
  [SMALL_STATE(13)] = 90,
  [SMALL_STATE(14)] = 141,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 239,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 329,
  [SMALL_STATE(19)] = 376,
  [SMALL_STATE(20)] = 421,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 535,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 649,
  [SMALL_STATE(25)] = 706,
  [SMALL_STATE(26)] = 742,
  [SMALL_STATE(27)] = 778,
  [SMALL_STATE(28)] = 814,
  [SMALL_STATE(29)] = 850,
  [SMALL_STATE(30)] = 886,
  [SMALL_STATE(31)] = 922,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 994,
  [SMALL_STATE(34)] = 1030,
  [SMALL_STATE(35)] = 1066,
  [SMALL_STATE(36)] = 1102,
  [SMALL_STATE(37)] = 1138,
  [SMALL_STATE(38)] = 1174,
  [SMALL_STATE(39)] = 1210,
  [SMALL_STATE(40)] = 1246,
  [SMALL_STATE(41)] = 1282,
  [SMALL_STATE(42)] = 1318,
  [SMALL_STATE(43)] = 1375,
  [SMALL_STATE(44)] = 1417,
  [SMALL_STATE(45)] = 1456,
  [SMALL_STATE(46)] = 1495,
  [SMALL_STATE(47)] = 1534,
  [SMALL_STATE(48)] = 1573,
  [SMALL_STATE(49)] = 1612,
  [SMALL_STATE(50)] = 1651,
  [SMALL_STATE(51)] = 1690,
  [SMALL_STATE(52)] = 1729,
  [SMALL_STATE(53)] = 1748,
  [SMALL_STATE(54)] = 1767,
  [SMALL_STATE(55)] = 1786,
  [SMALL_STATE(56)] = 1805,
  [SMALL_STATE(57)] = 1834,
  [SMALL_STATE(58)] = 1863,
  [SMALL_STATE(59)] = 1882,
  [SMALL_STATE(60)] = 1901,
  [SMALL_STATE(61)] = 1920,
  [SMALL_STATE(62)] = 1939,
  [SMALL_STATE(63)] = 1965,
  [SMALL_STATE(64)] = 1983,
  [SMALL_STATE(65)] = 2003,
  [SMALL_STATE(66)] = 2029,
  [SMALL_STATE(67)] = 2055,
  [SMALL_STATE(68)] = 2081,
  [SMALL_STATE(69)] = 2107,
  [SMALL_STATE(70)] = 2133,
  [SMALL_STATE(71)] = 2159,
  [SMALL_STATE(72)] = 2185,
  [SMALL_STATE(73)] = 2211,
  [SMALL_STATE(74)] = 2237,
  [SMALL_STATE(75)] = 2263,
  [SMALL_STATE(76)] = 2281,
  [SMALL_STATE(77)] = 2307,
  [SMALL_STATE(78)] = 2333,
  [SMALL_STATE(79)] = 2359,
  [SMALL_STATE(80)] = 2377,
  [SMALL_STATE(81)] = 2395,
  [SMALL_STATE(82)] = 2413,
  [SMALL_STATE(83)] = 2439,
  [SMALL_STATE(84)] = 2465,
  [SMALL_STATE(85)] = 2483,
  [SMALL_STATE(86)] = 2507,
  [SMALL_STATE(87)] = 2533,
  [SMALL_STATE(88)] = 2559,
  [SMALL_STATE(89)] = 2581,
  [SMALL_STATE(90)] = 2606,
  [SMALL_STATE(91)] = 2629,
  [SMALL_STATE(92)] = 2654,
  [SMALL_STATE(93)] = 2677,
  [SMALL_STATE(94)] = 2693,
  [SMALL_STATE(95)] = 2713,
  [SMALL_STATE(96)] = 2733,
  [SMALL_STATE(97)] = 2755,
  [SMALL_STATE(98)] = 2775,
  [SMALL_STATE(99)] = 2795,
  [SMALL_STATE(100)] = 2815,
  [SMALL_STATE(101)] = 2835,
  [SMALL_STATE(102)] = 2855,
  [SMALL_STATE(103)] = 2865,
  [SMALL_STATE(104)] = 2875,
  [SMALL_STATE(105)] = 2885,
  [SMALL_STATE(106)] = 2898,
  [SMALL_STATE(107)] = 2911,
  [SMALL_STATE(108)] = 2924,
  [SMALL_STATE(109)] = 2937,
  [SMALL_STATE(110)] = 2950,
  [SMALL_STATE(111)] = 2963,
  [SMALL_STATE(112)] = 2973,
  [SMALL_STATE(113)] = 2983,
  [SMALL_STATE(114)] = 2990,
  [SMALL_STATE(115)] = 2997,
  [SMALL_STATE(116)] = 3004,
  [SMALL_STATE(117)] = 3011,
  [SMALL_STATE(118)] = 3018,
  [SMALL_STATE(119)] = 3025,
  [SMALL_STATE(120)] = 3032,
  [SMALL_STATE(121)] = 3039,
  [SMALL_STATE(122)] = 3046,
  [SMALL_STATE(123)] = 3053,
  [SMALL_STATE(124)] = 3060,
  [SMALL_STATE(125)] = 3067,
  [SMALL_STATE(126)] = 3074,
  [SMALL_STATE(127)] = 3081,
  [SMALL_STATE(128)] = 3088,
  [SMALL_STATE(129)] = 3095,
  [SMALL_STATE(130)] = 3102,
  [SMALL_STATE(131)] = 3109,
  [SMALL_STATE(132)] = 3116,
  [SMALL_STATE(133)] = 3123,
  [SMALL_STATE(134)] = 3130,
  [SMALL_STATE(135)] = 3137,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menuconfig, 3, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menuconfig, 3, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config, 3, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_entry, 2, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_entry, 2, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(96),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(123),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(77),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(83),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(113),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(128),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(78),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(132),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(135),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(9),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_entry, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_entry, 3, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_variable, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_variable, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_variable, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_variable, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limiting_menu_display, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limiting_menu_display, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_default, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_default, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_value, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_prompt, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_prompt, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_ranges, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numerical_ranges, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reverse_dependencies, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reverse_dependencies, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weak_reverse_dependencies, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_weak_reverse_dependencies, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_prompt, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_prompt, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_value, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_default, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_default, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_text, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_help_text, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reverse_dependencies, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reverse_dependencies, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weak_reverse_dependencies, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_weak_reverse_dependencies, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_ranges, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numerical_ranges, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(116),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(115),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(21),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(119),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(120),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(87),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(121),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, .production_id = 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, .production_id = 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 5, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 5, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_clause, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mainmenu, 2, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mainmenu, 2, .production_id = 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_variable_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_variable_repeat1, 2), SHIFT_REPEAT(94),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_variable_repeat1, 2), SHIFT_REPEAT(95),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_variable_repeat1, 2), SHIFT_REPEAT(102),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_variable_repeat1, 1, .production_id = 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [422] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__help_text = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__help_text] = sym__help_text,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__help_text] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_kconfig_external_scanner_create(void);
void tree_sitter_kconfig_external_scanner_destroy(void *);
bool tree_sitter_kconfig_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_kconfig_external_scanner_serialize(void *, char *);
void tree_sitter_kconfig_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kconfig(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_symbol,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_kconfig_external_scanner_create,
      tree_sitter_kconfig_external_scanner_destroy,
      tree_sitter_kconfig_external_scanner_scan,
      tree_sitter_kconfig_external_scanner_serialize,
      tree_sitter_kconfig_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
