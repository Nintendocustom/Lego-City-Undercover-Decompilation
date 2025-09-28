# Lego City Undercover Decompilation

**This repository does not contain game assets and cannot be used to play the game.**

## Resources
This project requires a `main` dumped from the latest *Lego City Undercover - EU* update, v1.0.3.

# Todo
- improve README.md
- update BUILDING.md and CONTRIBUTING.md
- figure out exact compiler version (probably clang 3.9.1)
- update setup.py and toolchain for the correct compiler version
- update BUILDING.md 
- add github actions for linting and building
## Why Nintendo Switch Edition?

The Nintendo Switch Edition has symbols, making it a good base for decompilation. The Wii U Edition doesn't have symbols, but the compiler toolchain GHS is abysmal. The chance that we find a matching compiler version is next to none, so our assembly wouldn't be matching either way.

The Nintendo Switch Edition on the other hand was compiled with Clang where it's easier to find the compiler version just by the release date of the game. 
## Building
See [BUILDING.md](docs/BUILDING.md).

## Contributing
See [CONTRIBUTING.md](docs/CONTRIBUTING.md).


---

This repository is based on the MinecraftLCE decomp ([GRAnimated/MinecraftLCE](https://github.com/GRAnimated/MinecraftLCE))

Building instructions based on the Super Mario Odyssey decomp ([MonsterDruide1/OdysseyDecomp](https://github.com/MonsterDruide1/OdysseyDecomp)).
