# Lego City Undercover Decompilation

[![Code Progress]][progress] [![Function Progress]][progress] [![Discord Badge]][discord]

[Code Progress]: https://decomp.dev/projects/1065912392.svg?mode=shield&measure=code&label=Code&version=1.0.3

[Function Progress]: https://decomp.dev/projects/1065912392.svg?mode=shield&measure=matched_functions&label=Functions&version=1.0.3

[progress]: https://decomp.dev/Nintendocustom/Lego-City-Undercover-Decompilation

[Discord Badge]: https://img.shields.io/discord/1437530203411714191?color=%237289DA&logo=discord&logoColor=%23FFFFFF

[discord]: https://discord.com/invite/AyFjHz5EaT

**This repository does not contain game assets and cannot be used to play the game.**

## Resources

This project requires a `main` dumped from the latest *Lego City Undercover - EU* update, v1.0.3 (The US version 1.0.2
likely also works for decompilation, but is untested and has a different file hash).
The Japanese version isn't currently supported, because it was compiled with a different/unknown compiler version
similar to the other 1.0.0 versions.

# How to help

If you want to help with the decompilation, then you can do either the todos below, check for possible todo comments in
the code, decompile functions/classes, improve readability of functions or fix non-matching functions. You can also
check out the [CONTRIBUTING.md](docs/CONTRIBUTING.md) for more information on how to contribute.

## What to figure out if you can decompile a function?

Then give a few simple functions a try. Just try to understand what the function does and implement it in C++.
If you can do that, then you can help with the project!

Here is a list of a few functions that you can try to decompile in your browser (Ghidra psuedo-code is provided for
reference):

* [GetNextMultiple](https://decomp.me/scratch/6szvF)
* [NuPower2](https://decomp.me/scratch/bvzGd)
* [WithinDistanceOf](https://decomp.me/scratch/ny9ax)

## Todo

- fix lint.py
- create a file structure for the functions/classes based on the symbols
- Code style guidelines
- (if possible) improve progress tracking

## Why Nintendo Switch Edition?

The Nintendo Switch Edition has symbols, making it a good base for decompilation. The Wii U Edition doesn't have symbols
and the compiler toolchain GHS is abysmal. The chance that we find a matching compiler version is next to none, so our
assembly wouldn't be matching either way.

The Nintendo Switch Edition on the other hand was compiled with Clang where it's easier to find the compiler version
just by the release date of the game.

## Building

See [BUILDING.md](docs/BUILDING.md).

## Contributing

See [CONTRIBUTING.md](docs/CONTRIBUTING.md).

---
Special thanks to all the people of
the [LEGO Star Wars: The Complete Saga decompilation](https://github.com/ttdecomp/saga).

This repository is based on the [MinecraftLCE decomp](https://github.com/GRAnimated/MinecraftLCE) and
[Super Mario Odyssey decomp](https://github.com/MonsterDruide1/OdysseyDecomp).
