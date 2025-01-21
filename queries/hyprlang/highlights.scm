(comment) @comment @spell

[
  "source"
  "exec-once"
  "execr-once"
  "exec"
  "execr"
  "exec-shutdown"
] @keyword

(keyword
  (name) @keyword)

(assignment
  (name) @property)

(section
  (name) @module)

(section
  device: (device_name) @type)

(variable) @variable

"$" @punctuation.special

(boolean) @boolean

(mod) @constant

[
  "rgb"
  "rgba"
] @function.builtin

[
  (number)
  (legacy_hex)
  (angle)
  (hex)
  (display)
  (position)
] @number

"deg" @type

"," @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  "="
  "-"
  "+"
] @operator
