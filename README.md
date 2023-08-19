# tree-sitter-hypr

hyprland configuration files grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Neovim

To use it in Neovim, you have install the parser manually by adding the following code in your [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter/) configuration, and run `:TSInstall hypr`.

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.hypr = {
  install_info = {
    url = "https://github.com/luckasRanarison/tree-sitter-hypr",
    files = { "src/parser.c" },
    branch = "master",
  },
  filetype = "hypr",
}
```

To get syntax highlightings, folds, indents and automatic file detection, you can use the repository as plugin by installing it with your package manager.

Lazy:

```lua
return { "luckasRanarison/tree-sitter-hypr" }
```

Packer:

```lua
use { "luckasRanarison/tree-sitter-hypr" }
```
