#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_string = 1,
  anon_sym_EQ = 2,
  anon_sym_COLON = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_source = 6,
  anon_sym_exec = 7,
  anon_sym_exec_DASHonce = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_on = 11,
  anon_sym_off = 12,
  anon_sym_yes = 13,
  anon_sym_no = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  aux_sym_number_token1 = 17,
  anon_sym_x = 18,
  anon_sym_rgb = 19,
  anon_sym_rgba = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_COMMA = 23,
  anon_sym_AT = 24,
  sym_hex = 25,
  aux_sym_angle_token1 = 26,
  anon_sym_deg = 27,
  anon_sym_SHIFT = 28,
  anon_sym_CAPS = 29,
  anon_sym_CTRL = 30,
  anon_sym_CONTROL = 31,
  anon_sym_ALT = 32,
  anon_sym_MOD2 = 33,
  anon_sym_MOD3 = 34,
  anon_sym_SUPER = 35,
  anon_sym_WIN = 36,
  anon_sym_LOGO = 37,
  anon_sym_MOD4 = 38,
  anon_sym_MOD5 = 39,
  anon_sym_TAB = 40,
  sym_string_literal = 41,
  sym_name = 42,
  sym_device_name = 43,
  anon_sym_DOLLAR = 44,
  aux_sym_variable_token1 = 45,
  anon_sym_0 = 46,
  anon_sym_LF = 47,
  anon_sym_POUND = 48,
  aux_sym_comment_token1 = 49,
  sym_configuration = 50,
  sym_declaration = 51,
  sym_assignment = 52,
  sym_keyword = 53,
  sym_section = 54,
  sym_source = 55,
  sym_exec = 56,
  sym__value = 57,
  sym_boolean = 58,
  sym_number = 59,
  sym_vec2 = 60,
  sym_color = 61,
  sym_legacy_hex = 62,
  sym_rgb = 63,
  sym_gradient = 64,
  sym_number_tuple = 65,
  sym_display = 66,
  sym_position = 67,
  sym_angle = 68,
  sym_mod = 69,
  sym_keys = 70,
  sym_params = 71,
  sym_variable = 72,
  sym__zero = 73,
  sym__linebreak = 74,
  sym_comment = 75,
  aux_sym_configuration_repeat1 = 76,
  aux_sym_section_repeat1 = 77,
  aux_sym_gradient_repeat1 = 78,
  aux_sym_number_tuple_repeat1 = 79,
  aux_sym_params_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_string] = "string",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_source] = "source",
  [anon_sym_exec] = "exec",
  [anon_sym_exec_DASHonce] = "exec-once",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_x] = "x",
  [anon_sym_rgb] = "rgb",
  [anon_sym_rgba] = "rgba",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [sym_hex] = "hex",
  [aux_sym_angle_token1] = "angle_token1",
  [anon_sym_deg] = "deg",
  [anon_sym_SHIFT] = "SHIFT",
  [anon_sym_CAPS] = "CAPS",
  [anon_sym_CTRL] = "CTRL",
  [anon_sym_CONTROL] = "CONTROL",
  [anon_sym_ALT] = "ALT",
  [anon_sym_MOD2] = "MOD2",
  [anon_sym_MOD3] = "MOD3",
  [anon_sym_SUPER] = "SUPER",
  [anon_sym_WIN] = "WIN",
  [anon_sym_LOGO] = "LOGO",
  [anon_sym_MOD4] = "MOD4",
  [anon_sym_MOD5] = "MOD5",
  [anon_sym_TAB] = "TAB",
  [sym_string_literal] = "string_literal",
  [sym_name] = "name",
  [sym_device_name] = "device_name",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_0] = "0",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_configuration] = "configuration",
  [sym_declaration] = "declaration",
  [sym_assignment] = "assignment",
  [sym_keyword] = "keyword",
  [sym_section] = "section",
  [sym_source] = "source",
  [sym_exec] = "exec",
  [sym__value] = "_value",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_vec2] = "vec2",
  [sym_color] = "color",
  [sym_legacy_hex] = "legacy_hex",
  [sym_rgb] = "rgb",
  [sym_gradient] = "gradient",
  [sym_number_tuple] = "number_tuple",
  [sym_display] = "display",
  [sym_position] = "position",
  [sym_angle] = "angle",
  [sym_mod] = "mod",
  [sym_keys] = "keys",
  [sym_params] = "params",
  [sym_variable] = "variable",
  [sym__zero] = "_zero",
  [sym__linebreak] = "_linebreak",
  [sym_comment] = "comment",
  [aux_sym_configuration_repeat1] = "configuration_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_gradient_repeat1] = "gradient_repeat1",
  [aux_sym_number_tuple_repeat1] = "number_tuple_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_string] = sym_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_exec_DASHonce] = anon_sym_exec_DASHonce,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [sym_hex] = sym_hex,
  [aux_sym_angle_token1] = aux_sym_angle_token1,
  [anon_sym_deg] = anon_sym_deg,
  [anon_sym_SHIFT] = anon_sym_SHIFT,
  [anon_sym_CAPS] = anon_sym_CAPS,
  [anon_sym_CTRL] = anon_sym_CTRL,
  [anon_sym_CONTROL] = anon_sym_CONTROL,
  [anon_sym_ALT] = anon_sym_ALT,
  [anon_sym_MOD2] = anon_sym_MOD2,
  [anon_sym_MOD3] = anon_sym_MOD3,
  [anon_sym_SUPER] = anon_sym_SUPER,
  [anon_sym_WIN] = anon_sym_WIN,
  [anon_sym_LOGO] = anon_sym_LOGO,
  [anon_sym_MOD4] = anon_sym_MOD4,
  [anon_sym_MOD5] = anon_sym_MOD5,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym_string_literal] = sym_string_literal,
  [sym_name] = sym_name,
  [sym_device_name] = sym_device_name,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_configuration] = sym_configuration,
  [sym_declaration] = sym_declaration,
  [sym_assignment] = sym_assignment,
  [sym_keyword] = sym_keyword,
  [sym_section] = sym_section,
  [sym_source] = sym_source,
  [sym_exec] = sym_exec,
  [sym__value] = sym__value,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_vec2] = sym_vec2,
  [sym_color] = sym_color,
  [sym_legacy_hex] = sym_legacy_hex,
  [sym_rgb] = sym_rgb,
  [sym_gradient] = sym_gradient,
  [sym_number_tuple] = sym_number_tuple,
  [sym_display] = sym_display,
  [sym_position] = sym_position,
  [sym_angle] = sym_angle,
  [sym_mod] = sym_mod,
  [sym_keys] = sym_keys,
  [sym_params] = sym_params,
  [sym_variable] = sym_variable,
  [sym__zero] = sym__zero,
  [sym__linebreak] = sym__linebreak,
  [sym_comment] = sym_comment,
  [aux_sym_configuration_repeat1] = aux_sym_configuration_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_gradient_repeat1] = aux_sym_gradient_repeat1,
  [aux_sym_number_tuple_repeat1] = aux_sym_number_tuple_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec_DASHonce] = {
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
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_angle_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_deg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHIFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAPS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTROL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUPER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOGO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_device_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
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
  [sym_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_exec] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_vec2] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_gradient] = {
    .visible = true,
    .named = true,
  },
  [sym_number_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_display] = {
    .visible = true,
    .named = true,
  },
  [sym_position] = {
    .visible = true,
    .named = true,
  },
  [sym_angle] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_keys] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__zero] = {
    .visible = false,
    .named = true,
  },
  [sym__linebreak] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_configuration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gradient_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_device = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_device] = "device",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_device, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
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
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 21,
  [27] = 24,
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
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 28,
  [59] = 51,
  [60] = 60,
  [61] = 30,
  [62] = 29,
  [63] = 32,
  [64] = 39,
  [65] = 36,
  [66] = 40,
  [67] = 37,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 79,
  [84] = 73,
  [85] = 68,
  [86] = 86,
  [87] = 77,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 78,
  [94] = 80,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 106,
  [112] = 105,
  [113] = 113,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        '$', 203,
        '(', 82,
        ')', 83,
        '+', 67,
        ',', 84,
        '-', 68,
        '0', 205,
        ':', 58,
        '=', 57,
        '@', 85,
        'A', 121,
        'C', 111,
        'L', 126,
        'M', 127,
        'S', 118,
        'T', 112,
        'W', 120,
        'd', 146,
        'e', 154,
        'r', 147,
        's', 150,
        'x', 79,
        '{', 59,
        '}', 60,
        '\t', 106,
        ' ', 106,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        '$', 203,
        '+', 67,
        ',', 84,
        '-', 68,
        '0', 208,
        'A', 121,
        'C', 111,
        'L', 126,
        'M', 127,
        'S', 118,
        'T', 112,
        'W', 120,
        'r', 147,
        '\t', 107,
        ' ', 107,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        '$', 203,
        '+', 67,
        ',', 13,
        '-', 68,
        '0', 208,
        'A', 121,
        'C', 111,
        'L', 126,
        'M', 127,
        'S', 118,
        'T', 112,
        'W', 120,
        'r', 147,
        '\t', 108,
        ' ', 108,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        ')', 83,
        '+', 67,
        ',', 84,
        '-', 68,
        '0', 208,
        '@', 85,
        'x', 79,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        ',', 84,
        '0', 207,
        '=', 57,
        'A', 30,
        'C', 18,
        'L', 34,
        'M', 35,
        'S', 25,
        'T', 19,
        'W', 27,
        'd', 47,
        'r', 49,
        'x', 79,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '#', 210,
        '+', 67,
        '-', 68,
        '0', 208,
        'A', 172,
        'C', 160,
        'L', 176,
        'M', 177,
        'S', 167,
        'T', 161,
        'W', 169,
        '\t', 157,
        ' ', 157,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == '4') ADVANCE(103);
      if (lookahead == '5') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'F') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'G') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        '$', 203,
        '(', 82,
        ')', 83,
        ',', 84,
        ':', 58,
        '=', 57,
        '@', 85,
        'e', 200,
        's', 196,
        '{', 59,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string);
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        '$', 203,
        '(', 82,
        ')', 83,
        '+', 67,
        ',', 84,
        '-', 68,
        '0', 205,
        ':', 58,
        '=', 57,
        '@', 85,
        'A', 121,
        'C', 111,
        'L', 126,
        'M', 127,
        'S', 118,
        'T', 112,
        'W', 120,
        'd', 146,
        'e', 154,
        'r', 147,
        's', 150,
        'x', 79,
        '{', 59,
        '}', 60,
        '\t', 106,
        ' ', 106,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string);
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        '$', 203,
        '+', 67,
        ',', 84,
        '-', 68,
        '0', 208,
        'A', 121,
        'C', 111,
        'L', 126,
        'M', 127,
        'S', 118,
        'T', 112,
        'W', 120,
        'r', 147,
        '\t', 107,
        ' ', 107,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string);
      ADVANCE_MAP(
        '\n', 209,
        '#', 210,
        '$', 203,
        '+', 67,
        ',', 13,
        '-', 68,
        '0', 208,
        'A', 121,
        'C', 111,
        'L', 126,
        'M', 127,
        'S', 118,
        'T', 112,
        'W', 120,
        'r', 147,
        '\t', 108,
        ' ', 108,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == '4') ADVANCE(103);
      if (lookahead == '5') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'G') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == 'U') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_literal);
      ADVANCE_MAP(
        '#', 210,
        '+', 67,
        '-', 68,
        '0', 208,
        'A', 172,
        'C', 160,
        'L', 176,
        'M', 177,
        'S', 167,
        'T', 161,
        'W', 169,
        '\t', 157,
        ' ', 157,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == '4') ADVANCE(103);
      if (lookahead == '5') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(174);
      if (lookahead == 'T') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_device_name);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'y') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 55},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 55},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 55},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 55},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 55},
  [72] = {.lex_state = 55},
  [73] = {.lex_state = 55},
  [74] = {.lex_state = 55},
  [75] = {.lex_state = 55},
  [76] = {.lex_state = 55},
  [77] = {.lex_state = 55},
  [78] = {.lex_state = 55},
  [79] = {.lex_state = 55},
  [80] = {.lex_state = 55},
  [81] = {.lex_state = 55},
  [82] = {.lex_state = 55},
  [83] = {.lex_state = 55},
  [84] = {.lex_state = 55},
  [85] = {.lex_state = 55},
  [86] = {.lex_state = 55},
  [87] = {.lex_state = 55},
  [88] = {.lex_state = 55},
  [89] = {.lex_state = 55},
  [90] = {.lex_state = 55},
  [91] = {.lex_state = 55},
  [92] = {.lex_state = 55},
  [93] = {.lex_state = 55},
  [94] = {.lex_state = 55},
  [95] = {.lex_state = 55},
  [96] = {.lex_state = 55},
  [97] = {.lex_state = 55},
  [98] = {.lex_state = 55},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 55},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 212},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 55},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 55},
  [112] = {.lex_state = 10},
  [113] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_exec_DASHonce] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_angle_token1] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_SHIFT] = ACTIONS(1),
    [anon_sym_CAPS] = ACTIONS(1),
    [anon_sym_CTRL] = ACTIONS(1),
    [anon_sym_CONTROL] = ACTIONS(1),
    [anon_sym_ALT] = ACTIONS(1),
    [anon_sym_MOD2] = ACTIONS(1),
    [anon_sym_MOD3] = ACTIONS(1),
    [anon_sym_SUPER] = ACTIONS(1),
    [anon_sym_WIN] = ACTIONS(1),
    [anon_sym_LOGO] = ACTIONS(1),
    [anon_sym_MOD4] = ACTIONS(1),
    [anon_sym_MOD5] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_configuration] = STATE(100),
    [sym_declaration] = STATE(38),
    [sym_assignment] = STATE(38),
    [sym_keyword] = STATE(38),
    [sym_section] = STATE(38),
    [sym_source] = STATE(38),
    [sym_exec] = STATE(38),
    [sym_variable] = STATE(95),
    [sym__linebreak] = STATE(38),
    [sym_comment] = STATE(1),
    [aux_sym_configuration_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_source] = ACTIONS(7),
    [anon_sym_exec] = ACTIONS(9),
    [anon_sym_exec_DASHonce] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
  },
  [2] = {
    [sym__value] = STATE(49),
    [sym_boolean] = STATE(82),
    [sym_number] = STATE(16),
    [sym_vec2] = STATE(82),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(47),
    [sym_rgb] = STATE(47),
    [sym_gradient] = STATE(82),
    [sym_display] = STATE(82),
    [sym_position] = STATE(57),
    [sym_mod] = STATE(9),
    [sym_keys] = STATE(82),
    [sym_params] = STATE(80),
    [sym_variable] = STATE(9),
    [sym__zero] = STATE(33),
    [sym__linebreak] = STATE(61),
    [sym_comment] = STATE(2),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
    [anon_sym_off] = ACTIONS(21),
    [anon_sym_yes] = ACTIONS(21),
    [anon_sym_no] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [anon_sym_rgb] = ACTIONS(27),
    [anon_sym_rgba] = ACTIONS(27),
    [anon_sym_SHIFT] = ACTIONS(29),
    [anon_sym_CAPS] = ACTIONS(29),
    [anon_sym_CTRL] = ACTIONS(29),
    [anon_sym_CONTROL] = ACTIONS(29),
    [anon_sym_ALT] = ACTIONS(29),
    [anon_sym_MOD2] = ACTIONS(29),
    [anon_sym_MOD3] = ACTIONS(29),
    [anon_sym_SUPER] = ACTIONS(29),
    [anon_sym_WIN] = ACTIONS(29),
    [anon_sym_LOGO] = ACTIONS(29),
    [anon_sym_MOD4] = ACTIONS(29),
    [anon_sym_MOD5] = ACTIONS(29),
    [anon_sym_TAB] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(48),
    [sym_boolean] = STATE(82),
    [sym_number] = STATE(16),
    [sym_vec2] = STATE(82),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(47),
    [sym_rgb] = STATE(47),
    [sym_gradient] = STATE(82),
    [sym_display] = STATE(82),
    [sym_position] = STATE(57),
    [sym_mod] = STATE(9),
    [sym_keys] = STATE(82),
    [sym_params] = STATE(94),
    [sym_variable] = STATE(9),
    [sym__zero] = STATE(33),
    [sym__linebreak] = STATE(30),
    [sym_comment] = STATE(3),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
    [anon_sym_off] = ACTIONS(21),
    [anon_sym_yes] = ACTIONS(21),
    [anon_sym_no] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [anon_sym_rgb] = ACTIONS(27),
    [anon_sym_rgba] = ACTIONS(27),
    [anon_sym_SHIFT] = ACTIONS(29),
    [anon_sym_CAPS] = ACTIONS(29),
    [anon_sym_CTRL] = ACTIONS(29),
    [anon_sym_CONTROL] = ACTIONS(29),
    [anon_sym_ALT] = ACTIONS(29),
    [anon_sym_MOD2] = ACTIONS(29),
    [anon_sym_MOD3] = ACTIONS(29),
    [anon_sym_SUPER] = ACTIONS(29),
    [anon_sym_WIN] = ACTIONS(29),
    [anon_sym_LOGO] = ACTIONS(29),
    [anon_sym_MOD4] = ACTIONS(29),
    [anon_sym_MOD5] = ACTIONS(29),
    [anon_sym_TAB] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(86),
    [sym_boolean] = STATE(82),
    [sym_number] = STATE(16),
    [sym_vec2] = STATE(82),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(47),
    [sym_rgb] = STATE(47),
    [sym_gradient] = STATE(82),
    [sym_display] = STATE(82),
    [sym_position] = STATE(57),
    [sym_mod] = STATE(9),
    [sym_keys] = STATE(82),
    [sym_variable] = STATE(9),
    [sym__zero] = STATE(33),
    [sym_comment] = STATE(4),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
    [anon_sym_off] = ACTIONS(21),
    [anon_sym_yes] = ACTIONS(21),
    [anon_sym_no] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [anon_sym_rgb] = ACTIONS(27),
    [anon_sym_rgba] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_SHIFT] = ACTIONS(29),
    [anon_sym_CAPS] = ACTIONS(29),
    [anon_sym_CTRL] = ACTIONS(29),
    [anon_sym_CONTROL] = ACTIONS(29),
    [anon_sym_ALT] = ACTIONS(29),
    [anon_sym_MOD2] = ACTIONS(29),
    [anon_sym_MOD3] = ACTIONS(29),
    [anon_sym_SUPER] = ACTIONS(29),
    [anon_sym_WIN] = ACTIONS(29),
    [anon_sym_LOGO] = ACTIONS(29),
    [anon_sym_MOD4] = ACTIONS(29),
    [anon_sym_MOD5] = ACTIONS(29),
    [anon_sym_TAB] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      sym_string_literal,
    STATE(5), 1,
      sym_comment,
    STATE(14), 1,
      sym__zero,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(91), 2,
      sym_number,
      sym_mod,
    ACTIONS(29), 13,
      anon_sym_SHIFT,
      anon_sym_CAPS,
      anon_sym_CTRL,
      anon_sym_CONTROL,
      anon_sym_ALT,
      anon_sym_MOD2,
      anon_sym_MOD3,
      anon_sym_SUPER,
      anon_sym_WIN,
      anon_sym_LOGO,
      anon_sym_MOD4,
      anon_sym_MOD5,
      anon_sym_TAB,
  [42] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    ACTIONS(43), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SHIFT,
      anon_sym_CAPS,
      anon_sym_CTRL,
      anon_sym_CONTROL,
      anon_sym_ALT,
      anon_sym_MOD2,
      anon_sym_MOD3,
      anon_sym_SUPER,
      anon_sym_WIN,
      anon_sym_LOGO,
      anon_sym_MOD4,
      anon_sym_MOD5,
      anon_sym_TAB,
      anon_sym_LF,
  [67] = 11,
    ACTIONS(7), 1,
      anon_sym_source,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_configuration_repeat1,
    STATE(95), 1,
      sym_variable,
    ACTIONS(9), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(38), 7,
      sym_declaration,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym_source,
      sym_exec,
      sym__linebreak,
  [108] = 10,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_source,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(95), 1,
      sym_variable,
    ACTIONS(52), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(8), 2,
      sym_comment,
      aux_sym_configuration_repeat1,
    STATE(38), 7,
      sym_declaration,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym_source,
      sym_exec,
      sym__linebreak,
  [147] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    STATE(75), 1,
      sym_mod,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_LF,
    ACTIONS(66), 13,
      anon_sym_SHIFT,
      anon_sym_CAPS,
      anon_sym_CTRL,
      anon_sym_CONTROL,
      anon_sym_ALT,
      anon_sym_MOD2,
      anon_sym_MOD3,
      anon_sym_SUPER,
      anon_sym_WIN,
      anon_sym_LOGO,
      anon_sym_MOD4,
      anon_sym_MOD5,
      anon_sym_TAB,
  [176] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(68), 15,
      anon_sym_COMMA,
      anon_sym_SHIFT,
      anon_sym_CAPS,
      anon_sym_CTRL,
      anon_sym_CONTROL,
      anon_sym_ALT,
      anon_sym_MOD2,
      anon_sym_MOD3,
      anon_sym_SUPER,
      anon_sym_WIN,
      anon_sym_LOGO,
      anon_sym_MOD4,
      anon_sym_MOD5,
      anon_sym_TAB,
      anon_sym_LF,
  [200] = 12,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_rgb,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(70), 1,
      anon_sym_rgba,
    ACTIONS(72), 1,
      aux_sym_angle_token1,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_gradient_repeat1,
    STATE(45), 1,
      sym_color,
    STATE(74), 1,
      sym_angle,
    STATE(108), 1,
      sym__zero,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_LF,
    STATE(47), 2,
      sym_legacy_hex,
      sym_rgb,
  [239] = 12,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_rgb,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(70), 1,
      anon_sym_rgba,
    ACTIONS(72), 1,
      aux_sym_angle_token1,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_gradient_repeat1,
    STATE(45), 1,
      sym_color,
    STATE(70), 1,
      sym_angle,
    STATE(108), 1,
      sym__zero,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_LF,
    STATE(47), 2,
      sym_legacy_hex,
      sym_rgb,
  [278] = 10,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      anon_sym_rgb,
    ACTIONS(79), 1,
      anon_sym_rgba,
    ACTIONS(84), 1,
      aux_sym_angle_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    STATE(45), 1,
      sym_color,
    STATE(108), 1,
      sym__zero,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_LF,
    STATE(13), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(47), 2,
      sym_legacy_hex,
      sym_rgb,
  [312] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(91), 2,
      aux_sym_number_token1,
      anon_sym_0,
    ACTIONS(89), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_LF,
  [332] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(95), 2,
      aux_sym_number_token1,
      anon_sym_0,
    ACTIONS(93), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_LF,
  [352] = 9,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(99), 1,
      anon_sym_x,
    STATE(14), 1,
      sym__zero,
    STATE(16), 1,
      sym_comment,
    STATE(89), 1,
      sym_number,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_LF,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [382] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(103), 2,
      aux_sym_number_token1,
      anon_sym_0,
    ACTIONS(101), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_LF,
  [402] = 9,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(105), 1,
      sym_hex,
    STATE(14), 1,
      sym__zero,
    STATE(18), 1,
      sym_comment,
    STATE(55), 1,
      sym_number,
    STATE(98), 1,
      sym_number_tuple,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [431] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_section_repeat1,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [456] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_section_repeat1,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [481] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_section_repeat1,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [506] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_section_repeat1,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [531] = 6,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_name,
    ACTIONS(124), 1,
      anon_sym_LF,
    STATE(23), 2,
      sym_comment,
      aux_sym_section_repeat1,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [554] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_section_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [579] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_section_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [604] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_section_repeat1,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [629] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_name,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_section_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(50), 4,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym__linebreak,
  [654] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(137), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [672] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(141), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [690] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(145), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [708] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(149), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [726] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(153), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [744] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_x,
    STATE(33), 1,
      sym_comment,
    ACTIONS(91), 2,
      aux_sym_number_token1,
      anon_sym_0,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_LF,
  [764] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(160), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [782] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(164), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [800] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(168), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [818] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(172), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [836] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(176), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [854] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(180), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [872] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LF,
    ACTIONS(184), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [890] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(33), 1,
      anon_sym_0,
    STATE(14), 1,
      sym__zero,
    STATE(41), 1,
      sym_comment,
    STATE(71), 1,
      sym_number,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [913] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(33), 1,
      anon_sym_0,
    STATE(14), 1,
      sym__zero,
    STATE(42), 1,
      sym_comment,
    STATE(76), 1,
      sym_number,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [936] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_rgb,
      aux_sym_angle_token1,
      anon_sym_0,
    ACTIONS(188), 3,
      anon_sym_rgba,
      anon_sym_COMMA,
      anon_sym_LF,
  [953] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(33), 1,
      anon_sym_0,
    STATE(14), 1,
      sym__zero,
    STATE(44), 1,
      sym_comment,
    STATE(53), 1,
      sym_number,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [976] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_rgb,
      aux_sym_angle_token1,
      anon_sym_0,
    ACTIONS(192), 3,
      anon_sym_rgba,
      anon_sym_COMMA,
      anon_sym_LF,
  [993] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_rgb,
      aux_sym_angle_token1,
      anon_sym_0,
    ACTIONS(196), 3,
      anon_sym_rgba,
      anon_sym_COMMA,
      anon_sym_LF,
  [1010] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_rgb,
      aux_sym_angle_token1,
      anon_sym_0,
    ACTIONS(200), 3,
      anon_sym_rgba,
      anon_sym_COMMA,
      anon_sym_LF,
  [1027] = 6,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym__linebreak,
    STATE(48), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_params_repeat1,
  [1046] = 6,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_params_repeat1,
    STATE(62), 1,
      sym__linebreak,
  [1065] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1077] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      anon_sym_EQ,
    ACTIONS(208), 1,
      anon_sym_COLON,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_comment,
  [1093] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_LF,
    STATE(52), 2,
      sym_comment,
      aux_sym_params_repeat1,
  [1107] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_LF,
  [1119] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_LF,
    STATE(52), 1,
      aux_sym_params_repeat1,
    STATE(54), 1,
      sym_comment,
  [1135] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_number_tuple_repeat1,
  [1151] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_number_tuple_repeat1,
  [1167] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_AT,
    STATE(57), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1181] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1193] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_comment,
  [1209] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(60), 2,
      sym_comment,
      aux_sym_number_tuple_repeat1,
  [1223] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1235] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1247] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1259] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1271] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1283] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1295] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_RBRACE,
      sym_name,
      anon_sym_LF,
  [1307] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym__linebreak,
    STATE(68), 1,
      sym_comment,
  [1320] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1331] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1342] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(71), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1353] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym__linebreak,
    STATE(72), 1,
      sym_comment,
  [1366] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym__linebreak,
    STATE(73), 1,
      sym_comment,
  [1379] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(74), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1390] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1401] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1412] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym__linebreak,
    STATE(77), 1,
      sym_comment,
  [1425] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__linebreak,
    STATE(78), 1,
      sym_comment,
  [1438] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym__linebreak,
    STATE(79), 1,
      sym_comment,
  [1451] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__linebreak,
    STATE(80), 1,
      sym_comment,
  [1464] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1475] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1486] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym__linebreak,
    STATE(83), 1,
      sym_comment,
  [1499] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__linebreak,
    STATE(84), 1,
      sym_comment,
  [1512] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym__linebreak,
    STATE(85), 1,
      sym_comment,
  [1525] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1536] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym__linebreak,
    STATE(87), 1,
      sym_comment,
  [1549] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym__linebreak,
    STATE(88), 1,
      sym_comment,
  [1562] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [1573] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__linebreak,
    STATE(90), 1,
      sym_comment,
  [1586] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym__linebreak,
    STATE(91), 1,
      sym_comment,
  [1599] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__linebreak,
    STATE(92), 1,
      sym_comment,
  [1612] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__linebreak,
    STATE(93), 1,
      sym_comment,
  [1625] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym__linebreak,
    STATE(94), 1,
      sym_comment,
  [1638] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_EQ,
    STATE(95), 1,
      sym_comment,
  [1648] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym_comment,
  [1658] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_comment,
  [1668] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_comment,
  [1678] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      anon_sym_deg,
    STATE(99), 1,
      sym_comment,
  [1688] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      sym_comment,
  [1698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      sym_string,
    STATE(101), 1,
      sym_comment,
  [1708] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      sym_string,
    STATE(102), 1,
      sym_comment,
  [1718] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_comment_token1,
    STATE(103), 1,
      sym_comment,
  [1728] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      sym_hex,
    STATE(104), 1,
      sym_comment,
  [1738] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      sym_device_name,
    STATE(105), 1,
      sym_comment,
  [1748] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_comment,
  [1758] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(276), 1,
      anon_sym_EQ,
    STATE(107), 1,
      sym_comment,
  [1768] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_x,
    STATE(108), 1,
      sym_comment,
  [1778] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    STATE(109), 1,
      sym_comment,
  [1788] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      aux_sym_variable_token1,
    STATE(110), 1,
      sym_comment,
  [1798] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_comment,
  [1808] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      sym_device_name,
    STATE(112), 1,
      sym_comment,
  [1818] = 1,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 239,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 332,
  [SMALL_STATE(16)] = 352,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 431,
  [SMALL_STATE(20)] = 456,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 506,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 554,
  [SMALL_STATE(25)] = 579,
  [SMALL_STATE(26)] = 604,
  [SMALL_STATE(27)] = 629,
  [SMALL_STATE(28)] = 654,
  [SMALL_STATE(29)] = 672,
  [SMALL_STATE(30)] = 690,
  [SMALL_STATE(31)] = 708,
  [SMALL_STATE(32)] = 726,
  [SMALL_STATE(33)] = 744,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 782,
  [SMALL_STATE(36)] = 800,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 836,
  [SMALL_STATE(39)] = 854,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 890,
  [SMALL_STATE(42)] = 913,
  [SMALL_STATE(43)] = 936,
  [SMALL_STATE(44)] = 953,
  [SMALL_STATE(45)] = 976,
  [SMALL_STATE(46)] = 993,
  [SMALL_STATE(47)] = 1010,
  [SMALL_STATE(48)] = 1027,
  [SMALL_STATE(49)] = 1046,
  [SMALL_STATE(50)] = 1065,
  [SMALL_STATE(51)] = 1077,
  [SMALL_STATE(52)] = 1093,
  [SMALL_STATE(53)] = 1107,
  [SMALL_STATE(54)] = 1119,
  [SMALL_STATE(55)] = 1135,
  [SMALL_STATE(56)] = 1151,
  [SMALL_STATE(57)] = 1167,
  [SMALL_STATE(58)] = 1181,
  [SMALL_STATE(59)] = 1193,
  [SMALL_STATE(60)] = 1209,
  [SMALL_STATE(61)] = 1223,
  [SMALL_STATE(62)] = 1235,
  [SMALL_STATE(63)] = 1247,
  [SMALL_STATE(64)] = 1259,
  [SMALL_STATE(65)] = 1271,
  [SMALL_STATE(66)] = 1283,
  [SMALL_STATE(67)] = 1295,
  [SMALL_STATE(68)] = 1307,
  [SMALL_STATE(69)] = 1320,
  [SMALL_STATE(70)] = 1331,
  [SMALL_STATE(71)] = 1342,
  [SMALL_STATE(72)] = 1353,
  [SMALL_STATE(73)] = 1366,
  [SMALL_STATE(74)] = 1379,
  [SMALL_STATE(75)] = 1390,
  [SMALL_STATE(76)] = 1401,
  [SMALL_STATE(77)] = 1412,
  [SMALL_STATE(78)] = 1425,
  [SMALL_STATE(79)] = 1438,
  [SMALL_STATE(80)] = 1451,
  [SMALL_STATE(81)] = 1464,
  [SMALL_STATE(82)] = 1475,
  [SMALL_STATE(83)] = 1486,
  [SMALL_STATE(84)] = 1499,
  [SMALL_STATE(85)] = 1512,
  [SMALL_STATE(86)] = 1525,
  [SMALL_STATE(87)] = 1536,
  [SMALL_STATE(88)] = 1549,
  [SMALL_STATE(89)] = 1562,
  [SMALL_STATE(90)] = 1573,
  [SMALL_STATE(91)] = 1586,
  [SMALL_STATE(92)] = 1599,
  [SMALL_STATE(93)] = 1612,
  [SMALL_STATE(94)] = 1625,
  [SMALL_STATE(95)] = 1638,
  [SMALL_STATE(96)] = 1648,
  [SMALL_STATE(97)] = 1658,
  [SMALL_STATE(98)] = 1668,
  [SMALL_STATE(99)] = 1678,
  [SMALL_STATE(100)] = 1688,
  [SMALL_STATE(101)] = 1698,
  [SMALL_STATE(102)] = 1708,
  [SMALL_STATE(103)] = 1718,
  [SMALL_STATE(104)] = 1728,
  [SMALL_STATE(105)] = 1738,
  [SMALL_STATE(106)] = 1748,
  [SMALL_STATE(107)] = 1758,
  [SMALL_STATE(108)] = 1768,
  [SMALL_STATE(109)] = 1778,
  [SMALL_STATE(110)] = 1788,
  [SMALL_STATE(111)] = 1798,
  [SMALL_STATE(112)] = 1808,
  [SMALL_STATE(113)] = 1818,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__zero, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__zero, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__linebreak, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__linebreak, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 4, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_number, 1, 0, 0), SHIFT(104),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 6, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 8, 0, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 8, 0, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 5, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 7, 0, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 7, 0, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_hex, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_hex, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_tuple, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_tuple, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_tuple_repeat1, 2, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_tuple_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keys, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hyprlang(void) {
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
    .keyword_capture_token = sym_string,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
