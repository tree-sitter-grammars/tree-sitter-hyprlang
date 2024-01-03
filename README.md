# tree-sitter-hypr

hyprland configuration files grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Neovim

At first add the plugin to your configuration. After the plugin got added, we can install the grammar with `:TSInstall hypr`.

### Lazy

```lua
{ "luckasRanarison/tree-sitter-hypr" },
```

### Packer

```lua
use { "luckasRanarison/tree-sitter-hypr" }
```

### Nix as flake

Add the flake and use it as `vimPlugin` within e.g. your home manager configuration for neovim.

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

### Filetype detection

hyprs configuration does not have a specific filetype extension. Thus, we detect `.conf` with a path pattern. If your configuration does not get initialized as filetype `hypr` you can set it locally with `:set filetype=hypr` or add another pattern for type detection to your config. The following snippet resolves files with name `hyprland.conf` and sets `hypr` as filetype.

```lua
vim.filetype.add({
  pattern = { [".*/hyprland%.conf"] = "hypr" },
})
```
