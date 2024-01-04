{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = {
    self,
    nixpkgs,
    flake-utils,
  }:
  flake-utils.lib.eachDefaultSystem (system: let
    pkgs = import nixpkgs {
      inherit system;
    };

    src = ./.;
    version = "v2.0.0";

    hyprlang-grammar = pkgs.tree-sitter.buildGrammar {
      language = "hyprlang";
      inherit version src;
      generate = true;
    };

  in {
    packages = {
      default = pkgs.vimUtils.buildVimPlugin {
        pname = "tree-sitter-hyprlang";
        inherit version src;

        # Since this package isn't with all the other treesitter grammars,
        # we can simply add this line in the plugin to load it
        preInstall = let
          tsInstall = ''
            vim.filetype.add({
              pattern = { [\".*/hypr/.*%.conf\"] = \"hyprlang\" },
            })

            vim.api.nvim_create_autocmd(\"FileType\", {
              pattern = \"hyprlang\",
              callback = function(event) vim.bo[event.buf].commentstring = \"# %s\" end,
            })

            vim.treesitter.language.require_language(\"hyprlang\", \"${hyprlang-grammar}/parser\")
          '';
        in ''
          echo "${tsInstall}" > ./plugin/init.lua
        '';
      };
    };
  });
}
