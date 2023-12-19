## Directory for configs

All config `toml`s go in `~/.config/helix/` directory


## `config.toml`

Basic configuration of editor goes here.

- Theme: vim_dark_high_contrast;
- Make cursor in insert mode as bar;
- Make `esc` the default escape key for everything;


## `languages.toml`

Configuration for all languages servers in helix.

Language servers ::
- awk : awk-language-server
- bash : bash-language-server

- ruby : solargraph
- python : pylisp

- html, json : vscode-langservers-extended
- markdown : marksman

- c, cpp : clangd
- go : gopls, goimports




## Source for LSPs

- awk, bash, html, json : npm
- python : pip
- c, cpp : dnf
- marksman : snap
- go : go
- ruby : gem
