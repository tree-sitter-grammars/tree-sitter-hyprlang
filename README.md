# tree-sitter-hyprlang

[hyprlang](https://github.com/hyprwm/hyprlang) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Neovim

You can install the hyprlang parser in neovim using [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) and use the following code snippet for automatic filetype detection:

```lua
vim.filetype.add({
  pattern = { [".*/hypr/.*%.conf"] = "hyprlang" },
})
```
