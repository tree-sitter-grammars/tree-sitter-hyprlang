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

Nix:

with a basic `flake.nix` and all treesitter grammars
```nix
{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
    home-manager = {
      url = "github:nix-community/home-manager";
      inputs.nixpkgs.follows = "nixpkgs";
    };
    tree-sitter-hypr = {
      url = "github:luckasRanarison/tree-sitter-hypr";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };
  outputs = {
    nixpkgs,
    home-manager,
    tree-sitter-hypr,
    ...
  }: {
    homeConfigurations."user@hostname" = let
      pkgs = nixpkgs.legacyPackages.x86_64-linux;
    in
      home-manager.lib.homeManagerConfiguration {
        inherit pkgs;
        modules = [
          {
            programs.neovim = {
              enable = true;
              plugins = with pkgs.vimPlugins; [
                tree-sitter-hypr.packages.${pkgs.system}.default
                {
                  plugin = nvim-treesitter.withAllGrammars;
                  type = "lua";
                  config = ''
                    require('nvim-treesitter.configs').setup({
                      highlight = { enable = true }
                    })
                  '';
                }
              ];
            };
          }
          # ...
        ];
      };
  };
}
```
