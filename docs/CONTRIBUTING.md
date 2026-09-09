# Contributing

## How difficult is it to contribute?

It's actually easy to contribute since there are many small functions to decompile (on median a function is 80 bytes),
additionally symbols are available
for most functions and classes making it easier to understand what each function does.
You can also work on existing implementations by improving the readability or accuracy of the code.

You don't need deep knowledge of the game's internals to get started, but having some basic programming knowledge is
recommended.

Most of the time you already know what a function does by its name and just need to reimplement it in C++ and it matches
most of the time right away, especially for smaller functions.

# How to decompile step by step

1. Make sure to set up the project by following the instructions in [docs/BUILDING.md](BUILDING.md).
2. Run `tools/check` to make sure the project is set up correctly.
3. Pick a function or class to work on.
    * Choose a function you understand or are interested in.
4. Try to understand what the function does. You can use IDA Pro or Ghidra for this.
    * You can rename variables and use "Auto Fill In Structure" in Ghidra to make it easier to understand the function.
5. Implement the function in C++.
    * Try to stay close to the original code, but make sure it's readable and looks like a clean C++ implementation.
    * Make sure to not just copy-paste pseudocode from IDA/Ghidra.
6. Build the project using `python3 tools/build.py`.
7. Run `tools/check` to see if your implementation matches the original binary.
8. If it doesn't match, try to understand why and fix your implementation.
9. Once it matches, you can create a pull request to submit your changes.

**Additional information and tips can be found on [botw.link](https://botw.link/contribute), which has a lot of
useful information on how to approach decompilation and reverse engineering in general.**

## If you get stuck

If you get stuck, don't hesitate to ask for help in the [Discord server](https://discord.com/invite/AyFjHz5EaT), you can
also take a look at this [cheatsheet](https://botw.link/cheatsheet).
To simplify the process you can create a [decomp.me](https://decomp.me/) scratch to make it easier to share code
snippets and experiment around with different implementations.

To create a decomp.me scratch run:

```shell
tools/decompme <Function Name>
```

## Pull Requests

Before submitting a change, make sure to run `tools/lint.py` to verify that your source files are formatted like the
rest of the repository.

Linter arguments:

- `--fix`: Try to fix the formatting issues automatically.
- `--format`: Run clang-format before checks.
- `--find-unsorted`: Find unsorted classes/enums in the source files.

GitHub Actions will run on your PR to verify that your code has been linted and clang formatted.

It is *recommended* that you name your PR in this fashion:

- Matching implementation of a class or method: "Implement `Name`"
- Non-matching / incomplete implementation of a class or method: "Work on `Name`"
- Completion of a class or method: "Complete `Name`"

You can add anything you want after the message. Your pull request will be squashed and merged, so don't stress too much
about the makeup of the individual commits.

### Warning: Make sure to back up your changes before running an automatic fix! The linter is experimental and could break your files.

## Info

As this project is in its very early stages, It's hard to put guidelines on something that will evolve over time as
contributors gain a better understanding of the game's internals.
