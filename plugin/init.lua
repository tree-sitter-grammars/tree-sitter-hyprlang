vim.filetype.add({
  pattern = { [".*/hypr/.*%.conf"] = "hypr" },
})

vim.api.nvim_create_autocmd("FileType", {
  pattern = "hypr",
  callback = function(event) vim.bo[event.buf].commentstring = "# %s" end,
})

require("nvim-treesitter.parsers").get_parser_configs().hypr = {
    install_info = {
        url = "https://github.com/luckasRanarison/tree-sitter-hypr",
        files = { "src/parser.c" },
        branch = "master",
    },
    filetype = "hypr",
}
