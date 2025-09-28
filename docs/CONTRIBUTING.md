# Contributing

## Pull Requests
Before submitting a change, make sure to run `tools/lint.py` to verify that your source files are formatted like the rest of the repository.

Linter arguments:
- `--fix`: Try to fix the formatting issues automatically.
- `--format`: Run clang-format before checks.
- `--find-unsorted`: Find unsorted classes/enums in the source files.

GitHub Actions will run on your PR to verify that your code has been linted and clang formatted.

It is *recommended* that you name your PR in this fashion:

- Matching implementation of a class or method: "Implement `Name`"
- Non-matching / incomplete implementation of a class or method: "Work on `Name`"
- Completion of a class or method: "Complete `Name`"

You can add anything you want after the message. Your pull request will be squashed and merged, so don't stress too much about the makeup of the individual commits.

### Warning: Make sure to backup your changes before running an automatic fix! The linter is experimental and could break your files.

## Info
As this project is in its very early stages, its hard to put guidelines on something that will evolve over time as contributors gain a better understanding of the game's internals.
