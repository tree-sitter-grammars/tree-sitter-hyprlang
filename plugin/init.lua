vim.api.nvim_create_autocmd({ "BufEnter" }, {
	pattern = { vim.fn.expand("$HOME") .. "/.config/hypr/*.conf" },
	callback = function(event)
		vim.bo[event.buf].ft = "hypr"
	end,
})
