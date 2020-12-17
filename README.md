# tree-sitter grammar for Erlang

Installation:
1. Download `tree-sitter` from [the tree-sitter release
   page](https://github.com/tree-sitter/tree-sitter/releases) and place it
   somewhere on your path.
1. Run `make` in the `tree-sitter-erlang` directory. This should automatically
install dependencies via `yarn` and run all tests.

Based on the [Standard Erlang grammar shipped with
OTP](https://github.com/erlang/otp/blob/master/lib/stdlib/src/erl_parse.yrl).

![](./docs/playground.png)
