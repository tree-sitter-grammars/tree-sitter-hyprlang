module.exports = grammar({
  name: "hyprlang",

  extras: ($) => [/[ \t]/, $.comment],

  conflicts: ($) => [[$._value, $.gradient]],

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

    declaration: ($) => seq($.variable, "=", $._value, $._linebreak),

    assignment: ($) => seq($.name, "=", optional($._value), $._linebreak),

    keyword: ($) => seq($.name, "=", $.params, $._linebreak),

    section: ($) =>
      seq(
        choice($.name, seq($.name, ":", field("device", $.name))),
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
        $.color,
        $.gradient,
        $.mod,
        $.keys,
        $.string,
        $.variable
      ),

    boolean: () => choice("true", "false", "on", "off", "yes", "no"),

    number: () => seq(optional(choice("+", "-")), /[0-9][0-9\.]*/),

    vec2: ($) => seq($.number, $.number),

    color: ($) => choice($.legacy_hex, $.rgb),

    legacy_hex: ($) => seq("0x", $.hex),

    rgb: ($) => seq(choice("rgb", "rgba"), "(", $.hex, ")"),

    gradient: ($) => seq($.color, repeat($.color), optional($.angle)),

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

    params: ($) =>
      prec(-1, seq($._value, repeat(seq(",", optional($._value))))),

    name: () => /[\w\d][\w\d\/\.\-:]*/,

    variable: () => seq("$", /\w[\w\d]*/),

    _linebreak: () => "\n",

    comment: () => seq("#", /.*/),
  },
});
