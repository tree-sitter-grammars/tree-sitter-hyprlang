#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_EQ = 1,
  anon_sym_COLON = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_source = 5,
  anon_sym_exec = 6,
  anon_sym_exec_DASHonce = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_on = 10,
  anon_sym_off = 11,
  anon_sym_yes = 12,
  anon_sym_no = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  aux_sym_number_token1 = 16,
  anon_sym_0x = 17,
  anon_sym_rgb = 18,
  anon_sym_rgba = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  sym_hex = 22,
  aux_sym_angle_token1 = 23,
  anon_sym_deg = 24,
  anon_sym_SHIFT = 25,
  anon_sym_CAPS = 26,
  anon_sym_CTRL = 27,
  anon_sym_CONTROL = 28,
  anon_sym_ALT = 29,
  anon_sym_MOD2 = 30,
  anon_sym_MOD3 = 31,
  anon_sym_SUPER = 32,
  anon_sym_WIN = 33,
  anon_sym_LOGO = 34,
  anon_sym_MOD4 = 35,
  anon_sym_MOD5 = 36,
  anon_sym_TAB = 37,
  sym_string = 38,
  anon_sym_COMMA = 39,
  sym_name = 40,
  anon_sym_DOLLAR = 41,
  aux_sym_variable_token1 = 42,
  sym__linebreak = 43,
  anon_sym_POUND = 44,
  aux_sym_comment_token1 = 45,
  sym_configuration = 46,
  sym_assignment = 47,
  sym_command = 48,
  sym_section = 49,
  sym_source = 50,
  sym_exec = 51,
  sym__value = 52,
  sym_boolean = 53,
  sym_number = 54,
  sym_vec2 = 55,
  sym_color = 56,
  sym_legacy_hex = 57,
  sym_rgb = 58,
  sym_gradient = 59,
  sym_angle = 60,
  sym_mod = 61,
  sym_keys = 62,
  sym_params = 63,
  sym_variable = 64,
  sym_comment = 65,
  aux_sym_configuration_repeat1 = 66,
  aux_sym_section_repeat1 = 67,
  aux_sym_gradient_repeat1 = 68,
  aux_sym_params_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_0x] = "0x",
  [anon_sym_rgb] = "rgb",
  [anon_sym_rgba] = "rgba",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_string] = "string",
  [anon_sym_COMMA] = ",",
  [sym_name] = "name",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_token1] = "variable_token1",
  [sym__linebreak] = "_linebreak",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_configuration] = "configuration",
  [sym_assignment] = "assignment",
  [sym_command] = "command",
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
  [sym_angle] = "angle",
  [sym_mod] = "mod",
  [sym_keys] = "keys",
  [sym_params] = "params",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [aux_sym_configuration_repeat1] = "configuration_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_gradient_repeat1] = "gradient_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_string] = sym_string,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_name] = sym_name,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [sym__linebreak] = sym__linebreak,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_configuration] = sym_configuration,
  [sym_assignment] = sym_assignment,
  [sym_command] = sym_command,
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
  [sym_angle] = sym_angle,
  [sym_mod] = sym_mod,
  [sym_keys] = sym_keys,
  [sym_params] = sym_params,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [aux_sym_configuration_repeat1] = aux_sym_configuration_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_gradient_repeat1] = aux_sym_gradient_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_0x] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
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
  [sym__linebreak] = {
    .visible = false,
    .named = true,
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
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
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_device = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_device] = "device",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 2},
  [1] =
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 9,
  [15] = 8,
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
  [29] = 8,
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
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 50,
  [54] = 47,
  [55] = 26,
  [56] = 56,
  [57] = 27,
  [58] = 58,
  [59] = 58,
  [60] = 56,
  [61] = 28,
  [62] = 40,
  [63] = 39,
  [64] = 64,
  [65] = 41,
  [66] = 44,
  [67] = 38,
  [68] = 37,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 74,
  [88] = 83,
  [89] = 73,
  [90] = 71,
  [91] = 75,
  [92] = 92,
  [93] = 93,
  [94] = 70,
  [95] = 95,
  [96] = 96,
  [97] = 82,
  [98] = 72,
  [99] = 79,
  [100] = 100,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(41);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == 'M') ADVANCE(158);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'W') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == 'M') ADVANCE(158);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'W') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(121);
      if (lookahead == '3') ADVANCE(123);
      if (lookahead == '4') ADVANCE(131);
      if (lookahead == '5') ADVANCE(133);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(135);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == 'U') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == 'A') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(187);
      if (lookahead == 'W') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(71)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_rgba);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_CAPS);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_CTRL);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ALT);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_MOD2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_MOD3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SUPER);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_WIN);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LOGO);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_MOD4);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_MOD5);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == 'M') ADVANCE(158);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'W') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == 'M') ADVANCE(158);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'W') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead == '3') ADVANCE(123);
      if (lookahead == '4') ADVANCE(131);
      if (lookahead == '5') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'A') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'A') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'B') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'E') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'F') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'G') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'H') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'P') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'R') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '2') ADVANCE(122);
      if (lookahead == '3') ADVANCE(124);
      if (lookahead == '4') ADVANCE(132);
      if (lookahead == '5') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(205);
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(194);
      if (lookahead == 'U') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__linebreak);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 69},
  [25] = {.lex_state = 69},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 69},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 234},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 69},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__linebreak] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_configuration] = STATE(93),
    [sym_assignment] = STATE(42),
    [sym_command] = STATE(42),
    [sym_section] = STATE(42),
    [sym_source] = STATE(42),
    [sym_exec] = STATE(42),
    [sym_variable] = STATE(92),
    [sym_comment] = STATE(1),
    [aux_sym_configuration_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_source] = ACTIONS(7),
    [anon_sym_exec] = ACTIONS(9),
    [anon_sym_exec_DASHonce] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [sym__linebreak] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(60),
    [sym_boolean] = STATE(36),
    [sym_number] = STATE(22),
    [sym_vec2] = STATE(36),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(18),
    [sym_rgb] = STATE(18),
    [sym_gradient] = STATE(36),
    [sym_mod] = STATE(13),
    [sym_keys] = STATE(36),
    [sym_params] = STATE(36),
    [sym_variable] = STATE(13),
    [sym_comment] = STATE(2),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(27),
    [anon_sym_CAPS] = ACTIONS(27),
    [anon_sym_CTRL] = ACTIONS(27),
    [anon_sym_CONTROL] = ACTIONS(27),
    [anon_sym_ALT] = ACTIONS(27),
    [anon_sym_MOD2] = ACTIONS(27),
    [anon_sym_MOD3] = ACTIONS(27),
    [anon_sym_SUPER] = ACTIONS(27),
    [anon_sym_WIN] = ACTIONS(27),
    [anon_sym_LOGO] = ACTIONS(27),
    [anon_sym_MOD4] = ACTIONS(27),
    [anon_sym_MOD5] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym__linebreak] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [3] = {
    [sym__value] = STATE(56),
    [sym_boolean] = STATE(36),
    [sym_number] = STATE(22),
    [sym_vec2] = STATE(36),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(18),
    [sym_rgb] = STATE(18),
    [sym_gradient] = STATE(36),
    [sym_mod] = STATE(13),
    [sym_keys] = STATE(36),
    [sym_params] = STATE(36),
    [sym_variable] = STATE(13),
    [sym_comment] = STATE(3),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(27),
    [anon_sym_CAPS] = ACTIONS(27),
    [anon_sym_CTRL] = ACTIONS(27),
    [anon_sym_CONTROL] = ACTIONS(27),
    [anon_sym_ALT] = ACTIONS(27),
    [anon_sym_MOD2] = ACTIONS(27),
    [anon_sym_MOD3] = ACTIONS(27),
    [anon_sym_SUPER] = ACTIONS(27),
    [anon_sym_WIN] = ACTIONS(27),
    [anon_sym_LOGO] = ACTIONS(27),
    [anon_sym_MOD4] = ACTIONS(27),
    [anon_sym_MOD5] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym__linebreak] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [4] = {
    [sym__value] = STATE(25),
    [sym_boolean] = STATE(36),
    [sym_number] = STATE(22),
    [sym_vec2] = STATE(36),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(18),
    [sym_rgb] = STATE(18),
    [sym_gradient] = STATE(36),
    [sym_mod] = STATE(7),
    [sym_keys] = STATE(36),
    [sym_params] = STATE(36),
    [sym_variable] = STATE(7),
    [sym_comment] = STATE(4),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(39),
    [anon_sym_CAPS] = ACTIONS(39),
    [anon_sym_CTRL] = ACTIONS(39),
    [anon_sym_CONTROL] = ACTIONS(39),
    [anon_sym_ALT] = ACTIONS(39),
    [anon_sym_MOD2] = ACTIONS(39),
    [anon_sym_MOD3] = ACTIONS(39),
    [anon_sym_SUPER] = ACTIONS(39),
    [anon_sym_WIN] = ACTIONS(39),
    [anon_sym_LOGO] = ACTIONS(39),
    [anon_sym_MOD4] = ACTIONS(39),
    [anon_sym_MOD5] = ACTIONS(39),
    [anon_sym_TAB] = ACTIONS(39),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [5] = {
    [sym__value] = STATE(55),
    [sym_boolean] = STATE(36),
    [sym_number] = STATE(22),
    [sym_vec2] = STATE(36),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(18),
    [sym_rgb] = STATE(18),
    [sym_gradient] = STATE(36),
    [sym_mod] = STATE(13),
    [sym_keys] = STATE(36),
    [sym_params] = STATE(36),
    [sym_variable] = STATE(13),
    [sym_comment] = STATE(5),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(27),
    [anon_sym_CAPS] = ACTIONS(27),
    [anon_sym_CTRL] = ACTIONS(27),
    [anon_sym_CONTROL] = ACTIONS(27),
    [anon_sym_ALT] = ACTIONS(27),
    [anon_sym_MOD2] = ACTIONS(27),
    [anon_sym_MOD3] = ACTIONS(27),
    [anon_sym_SUPER] = ACTIONS(27),
    [anon_sym_WIN] = ACTIONS(27),
    [anon_sym_LOGO] = ACTIONS(27),
    [anon_sym_MOD4] = ACTIONS(27),
    [anon_sym_MOD5] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [6] = {
    [sym__value] = STATE(26),
    [sym_boolean] = STATE(36),
    [sym_number] = STATE(22),
    [sym_vec2] = STATE(36),
    [sym_color] = STATE(11),
    [sym_legacy_hex] = STATE(18),
    [sym_rgb] = STATE(18),
    [sym_gradient] = STATE(36),
    [sym_mod] = STATE(7),
    [sym_keys] = STATE(36),
    [sym_params] = STATE(36),
    [sym_variable] = STATE(7),
    [sym_comment] = STATE(6),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(39),
    [anon_sym_CAPS] = ACTIONS(39),
    [anon_sym_CTRL] = ACTIONS(39),
    [anon_sym_CONTROL] = ACTIONS(39),
    [anon_sym_ALT] = ACTIONS(39),
    [anon_sym_MOD2] = ACTIONS(39),
    [anon_sym_MOD3] = ACTIONS(39),
    [anon_sym_SUPER] = ACTIONS(39),
    [anon_sym_WIN] = ACTIONS(39),
    [anon_sym_LOGO] = ACTIONS(39),
    [anon_sym_MOD4] = ACTIONS(39),
    [anon_sym_MOD5] = ACTIONS(39),
    [anon_sym_TAB] = ACTIONS(39),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    STATE(32), 1,
      sym_mod,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(45), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
    ACTIONS(47), 13,
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
  [37] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(51), 17,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
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
      sym_name,
  [69] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(55), 17,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
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
      sym_name,
  [101] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_0x,
    ACTIONS(63), 1,
      aux_sym_angle_token1,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_gradient_repeat1,
    STATE(20), 1,
      sym_color,
    STATE(30), 1,
      sym_angle,
    ACTIONS(25), 2,
      anon_sym_rgb,
      anon_sym_rgba,
    STATE(18), 2,
      sym_legacy_hex,
      sym_rgb,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(59), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [143] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_0x,
    ACTIONS(63), 1,
      aux_sym_angle_token1,
    STATE(10), 1,
      aux_sym_gradient_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(20), 1,
      sym_color,
    STATE(33), 1,
      sym_angle,
    ACTIONS(25), 2,
      anon_sym_rgb,
      anon_sym_rgba,
    STATE(18), 2,
      sym_legacy_hex,
      sym_rgb,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(68), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [185] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_0x,
    STATE(20), 1,
      sym_color,
    ACTIONS(78), 2,
      anon_sym_rgb,
      anon_sym_rgba,
    STATE(12), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(18), 2,
      sym_legacy_hex,
      sym_rgb,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(73), 5,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      aux_sym_angle_token1,
      sym_name,
  [220] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    STATE(32), 1,
      sym_mod,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      sym__linebreak,
    ACTIONS(81), 13,
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
  [249] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(53), 16,
      anon_sym_EQ,
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
      anon_sym_COMMA,
      sym__linebreak,
  [274] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(49), 15,
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
      anon_sym_COMMA,
      sym__linebreak,
  [298] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_source,
    ACTIONS(91), 1,
      sym_name,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(97), 1,
      sym__linebreak,
    STATE(92), 1,
      sym_variable,
    ACTIONS(88), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(16), 2,
      sym_comment,
      aux_sym_configuration_repeat1,
    STATE(42), 5,
      sym_assignment,
      sym_command,
      sym_section,
      sym_source,
      sym_exec,
  [335] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_source,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      sym__linebreak,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_configuration_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(92), 1,
      sym_variable,
    ACTIONS(9), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(42), 5,
      sym_assignment,
      sym_command,
      sym_section,
      sym_source,
      sym_exec,
  [374] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_0x,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(104), 7,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_rgb,
      anon_sym_rgba,
      aux_sym_angle_token1,
      sym_name,
  [397] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_0x,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(108), 7,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_rgb,
      anon_sym_rgba,
      aux_sym_angle_token1,
      sym_name,
  [420] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_0x,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(112), 7,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_rgb,
      anon_sym_rgba,
      aux_sym_angle_token1,
      sym_name,
  [443] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_0x,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(116), 7,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      anon_sym_rgb,
      anon_sym_rgba,
      aux_sym_angle_token1,
      sym_name,
  [466] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      aux_sym_number_token1,
    STATE(22), 1,
      sym_comment,
    STATE(35), 1,
      sym_number,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(45), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [495] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
  [517] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
  [539] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_params_repeat1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(132), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [563] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_params_repeat1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(138), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [585] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(27), 2,
      sym_comment,
      aux_sym_params_repeat1,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(138), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [607] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_params_repeat1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(145), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [631] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(51), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [650] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(149), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [669] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(153), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [688] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(157), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [707] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(59), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [726] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(161), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [745] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(165), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [764] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(45), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [783] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(169), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [801] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(173), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [819] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(175), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(177), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [837] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(181), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [855] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(185), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [873] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(189), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [891] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(193), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [909] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(197), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [927] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(201), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [945] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      sym_name,
    STATE(46), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_section_repeat1,
    STATE(64), 2,
      sym_command,
      sym_section,
  [965] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_name,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_section_repeat1,
    STATE(64), 2,
      sym_command,
      sym_section,
  [985] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_name,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_section_repeat1,
    STATE(64), 2,
      sym_command,
      sym_section,
  [1005] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_name,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_section_repeat1,
    STATE(64), 2,
      sym_command,
      sym_section,
  [1025] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_name,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_section_repeat1,
    STATE(64), 2,
      sym_command,
      sym_section,
  [1045] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_name,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_section_repeat1,
    STATE(64), 2,
      sym_command,
      sym_section,
  [1065] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      sym_name,
    STATE(52), 2,
      sym_comment,
      aux_sym_section_repeat1,
    STATE(64), 2,
      sym_command,
      sym_section,
  [1083] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_name,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_section_repeat1,
    STATE(53), 1,
      sym_comment,
    STATE(64), 2,
      sym_command,
      sym_section,
  [1103] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_name,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_section_repeat1,
    STATE(54), 1,
      sym_comment,
    STATE(64), 2,
      sym_command,
      sym_section,
  [1123] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_params_repeat1,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1137] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      sym__linebreak,
    STATE(56), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_params_repeat1,
  [1153] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      sym__linebreak,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(57), 2,
      sym_comment,
      aux_sym_params_repeat1,
  [1167] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_comment,
  [1183] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_comment,
  [1199] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      sym__linebreak,
    STATE(60), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_params_repeat1,
  [1215] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym__linebreak,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_params_repeat1,
    STATE(61), 1,
      sym_comment,
  [1231] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      sym_name,
  [1242] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      sym_name,
  [1253] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_RBRACE,
      sym_name,
  [1264] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      sym_name,
  [1275] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      sym_name,
  [1286] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      sym_name,
  [1297] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      sym_name,
  [1308] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      sym_hex,
    STATE(69), 1,
      sym_comment,
  [1318] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      aux_sym_variable_token1,
    STATE(70), 1,
      sym_comment,
  [1328] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      sym__linebreak,
    STATE(71), 1,
      sym_comment,
  [1338] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      sym__linebreak,
    STATE(72), 1,
      sym_comment,
  [1348] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      sym__linebreak,
    STATE(73), 1,
      sym_comment,
  [1358] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      sym__linebreak,
    STATE(74), 1,
      sym_comment,
  [1368] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      sym__linebreak,
    STATE(75), 1,
      sym_comment,
  [1378] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym_comment,
  [1388] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_deg,
    STATE(77), 1,
      sym_comment,
  [1398] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      sym_hex,
    STATE(78), 1,
      sym_comment,
  [1408] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_comment,
  [1418] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_comment,
  [1428] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      aux_sym_number_token1,
    STATE(81), 1,
      sym_comment,
  [1438] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      sym__linebreak,
    STATE(82), 1,
      sym_comment,
  [1448] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      sym_name,
    STATE(83), 1,
      sym_comment,
  [1458] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_comment,
  [1468] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      sym_string,
    STATE(85), 1,
      sym_comment,
  [1478] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_string,
    STATE(86), 1,
      sym_comment,
  [1488] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      sym__linebreak,
    STATE(87), 1,
      sym_comment,
  [1498] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      sym_name,
    STATE(88), 1,
      sym_comment,
  [1508] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym__linebreak,
    STATE(89), 1,
      sym_comment,
  [1518] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      sym__linebreak,
    STATE(90), 1,
      sym_comment,
  [1528] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      sym__linebreak,
    STATE(91), 1,
      sym_comment,
  [1538] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(92), 1,
      sym_comment,
  [1548] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_comment,
  [1558] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      aux_sym_variable_token1,
    STATE(94), 1,
      sym_comment,
  [1568] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(95), 1,
      sym_comment,
  [1578] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym_comment,
  [1588] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      sym__linebreak,
    STATE(97), 1,
      sym_comment,
  [1598] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      sym__linebreak,
    STATE(98), 1,
      sym_comment,
  [1608] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_comment,
  [1618] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 420,
  [SMALL_STATE(21)] = 443,
  [SMALL_STATE(22)] = 466,
  [SMALL_STATE(23)] = 495,
  [SMALL_STATE(24)] = 517,
  [SMALL_STATE(25)] = 539,
  [SMALL_STATE(26)] = 563,
  [SMALL_STATE(27)] = 585,
  [SMALL_STATE(28)] = 607,
  [SMALL_STATE(29)] = 631,
  [SMALL_STATE(30)] = 650,
  [SMALL_STATE(31)] = 669,
  [SMALL_STATE(32)] = 688,
  [SMALL_STATE(33)] = 707,
  [SMALL_STATE(34)] = 726,
  [SMALL_STATE(35)] = 745,
  [SMALL_STATE(36)] = 764,
  [SMALL_STATE(37)] = 783,
  [SMALL_STATE(38)] = 801,
  [SMALL_STATE(39)] = 819,
  [SMALL_STATE(40)] = 837,
  [SMALL_STATE(41)] = 855,
  [SMALL_STATE(42)] = 873,
  [SMALL_STATE(43)] = 891,
  [SMALL_STATE(44)] = 909,
  [SMALL_STATE(45)] = 927,
  [SMALL_STATE(46)] = 945,
  [SMALL_STATE(47)] = 965,
  [SMALL_STATE(48)] = 985,
  [SMALL_STATE(49)] = 1005,
  [SMALL_STATE(50)] = 1025,
  [SMALL_STATE(51)] = 1045,
  [SMALL_STATE(52)] = 1065,
  [SMALL_STATE(53)] = 1083,
  [SMALL_STATE(54)] = 1103,
  [SMALL_STATE(55)] = 1123,
  [SMALL_STATE(56)] = 1137,
  [SMALL_STATE(57)] = 1153,
  [SMALL_STATE(58)] = 1167,
  [SMALL_STATE(59)] = 1183,
  [SMALL_STATE(60)] = 1199,
  [SMALL_STATE(61)] = 1215,
  [SMALL_STATE(62)] = 1231,
  [SMALL_STATE(63)] = 1242,
  [SMALL_STATE(64)] = 1253,
  [SMALL_STATE(65)] = 1264,
  [SMALL_STATE(66)] = 1275,
  [SMALL_STATE(67)] = 1286,
  [SMALL_STATE(68)] = 1297,
  [SMALL_STATE(69)] = 1308,
  [SMALL_STATE(70)] = 1318,
  [SMALL_STATE(71)] = 1328,
  [SMALL_STATE(72)] = 1338,
  [SMALL_STATE(73)] = 1348,
  [SMALL_STATE(74)] = 1358,
  [SMALL_STATE(75)] = 1368,
  [SMALL_STATE(76)] = 1378,
  [SMALL_STATE(77)] = 1388,
  [SMALL_STATE(78)] = 1398,
  [SMALL_STATE(79)] = 1408,
  [SMALL_STATE(80)] = 1418,
  [SMALL_STATE(81)] = 1428,
  [SMALL_STATE(82)] = 1438,
  [SMALL_STATE(83)] = 1448,
  [SMALL_STATE(84)] = 1458,
  [SMALL_STATE(85)] = 1468,
  [SMALL_STATE(86)] = 1478,
  [SMALL_STATE(87)] = 1488,
  [SMALL_STATE(88)] = 1498,
  [SMALL_STATE(89)] = 1508,
  [SMALL_STATE(90)] = 1518,
  [SMALL_STATE(91)] = 1528,
  [SMALL_STATE(92)] = 1538,
  [SMALL_STATE(93)] = 1548,
  [SMALL_STATE(94)] = 1558,
  [SMALL_STATE(95)] = 1568,
  [SMALL_STATE(96)] = 1578,
  [SMALL_STATE(97)] = 1588,
  [SMALL_STATE(98)] = 1598,
  [SMALL_STATE(99)] = 1608,
  [SMALL_STATE(100)] = 1618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gradient, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__value, 1), REDUCE(sym_gradient, 1),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__value, 1), REDUCE(sym_gradient, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(69),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(80),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(96),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(95),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(59),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(94),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(42),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_hex, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_hex, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gradient, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angle, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keys, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keys, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vec2, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 8, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 8, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 7, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 7, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(58),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hypr(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
