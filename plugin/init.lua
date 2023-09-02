vim.filetype.add({
  pattern = { ["~/.config/hypr/.*%.conf"] = "hypr" },
})

vim.api.nvim_create_autocmd("FileType", {
  pattern = "hypr",
  callback = function(event) vim.bo[event.buf].commentstring = "# %s" end,
})
