vim.filetype.add({
  pattern = { [".*/hypr/.*%.conf"] = "hyprlang" },
})

vim.api.nvim_create_autocmd("FileType", {
  pattern = "hyprlang",
  callback = function(event) vim.bo[event.buf].commentstring = "# %s" end,
})

require("nvim-treesitter.parsers").get_parser_configs().hyprlang = {
  install_info = {
    url = "https://github.com/luckasRanarison/tree-sitter-hyprlang",
    files = { "src/parser.c" },
    branch = "master",
  },
  filetype = "hyprlang",
}
