module.exports = grammar({
  name: "hyprlang",

  extras: ($) => [/[ \t]/, $.comment],

  conflicts: ($) => [
    [$._value, $.gradient],
    [$.number, $.legacy_hex],
  ],

  word: ($) => $.string,

  rules: {
    configuration: ($) =>
      repeat(
        choice(
          $.source,
          $.exec,
          $.declaration,
          $.assignment,
          $.keyword,
          $.section,
          $._linebreak
        )
      ),

    declaration: ($) =>
      seq(
        $.variable,
        "=",
        choice($.mod, $.number, $.string_literal),
        $._linebreak
      ),

    assignment: ($) => seq($.name, "=", optional($._value), $._linebreak),

    keyword: ($) => seq($.name, "=", $.params, $._linebreak),

    section: ($) =>
      seq(
        choice($.name, seq($.name, ":", field("device", $.device_name))),
        "{",
        $._linebreak,
        repeat(choice($.assignment, $.keyword, $.section, $._linebreak)),
        "}",
        $._linebreak
      ),

    source: ($) => seq("source", "=", $.string, $._linebreak),

    exec: ($) => seq(choice("exec", "exec-once"), "=", $.string, $._linebreak),

    _value: ($) =>
      choice(
        $.boolean,
        $.number,
        $.vec2,
        $.display,
        $.color,
        $.gradient,
        $.mod,
        $.keys,
        $.string,
        $.variable,
        prec(1, $.position)
      ),

    boolean: () => choice("true", "false", "on", "off", "yes", "no"),

    number: ($) =>
      choice($._zero, seq(optional(choice("+", "-")), /[0-9][0-9\.]*/)),

    vec2: ($) => seq($.number, $.number),

    color: ($) => choice($.legacy_hex, $.rgb),

    legacy_hex: ($) => seq($._zero, "x", $.hex),

    rgb: ($) =>
      seq(choice("rgb", "rgba"), "(", choice($.hex, $.number_tuple), ")"),

    gradient: ($) => seq($.color, repeat($.color), optional($.angle)),

    number_tuple: ($) => seq($.number, repeat(seq(",", $.number))),

    display: ($) => seq($.position, optional(seq("@", $.number))),

    position: ($) => seq($.number, "x", $.number),

    hex: () => /[0-9a-fA-F]{6,8}/,

    angle: () => seq(/[0-9]{1,3}/, "deg"),

    mod: () =>
      choice(
        "SHIFT",
        "CAPS",
        "CTRL",
        "CONTROL",
        "ALT",
        "MOD2",
        "MOD3",
        "SUPER",
        "WIN",
        "LOGO",
        "MOD4",
        "MOD5",
        "TAB"
      ),

    keys: ($) => choice(seq($.mod, $.mod), seq($.variable, $.mod)),

    string: () => token(prec(-1, /[^\n,#]+|.*##.*/)),

    string_literal: () => token(prec(-1, /[^\n#]+|.*##.*/)),

    params: ($) =>
      prec(-1, seq($._value, repeat(seq(",", optional($._value))))),

    name: () => /[\w][\w\d\.\-]*/,

    device_name: () => /[\w\d][\w\d\/\.\-:]*/,

    variable: () => seq("$", /\w[\w\d]*/),

    _zero: () => "0",

    _linebreak: () => "\n",

    comment: () => seq("#", /.*/),
  },
});
