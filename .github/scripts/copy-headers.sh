#!/usr/bin/env bash
# bash boilerplate
set -euo pipefail # strict mode
readonly SCRIPT_NAME="$(basename "$0")"
readonly SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
function l { # Log a message to the terminal.
    echo
    echo -e "[$SCRIPT_NAME] ${1:-}"
}

l "Cleaning headers repository"

rm -rf "$DESTINATION_PATH"/*

l "Copying nnheaders"

mkdir -p "$DESTINATION_PATH/nnheaders"
cp -r ./lib/nnheaders/include/* "$DESTINATION_PATH/nnheaders/"

l "Copying aarch64"

cp -r ./lib/aarch64 "$DESTINATION_PATH/"

l "Copying game headers"

mkdir -p "$DESTINATION_PATH/game"

find ./src \
    -type f \
    \( -name "*.h" -o -name "*.hpp" \) \
    -print0 |
while IFS= read -r -d '' file; do
    relative="${file#./src/}"
    destination="$DESTINATION_PATH/game/$relative"

    mkdir -p "$(dirname "$destination")"
    cp "$file" "$destination"
done

l "Copying CMakeLists.txt"

cp ./.github/files/HeadersCMakeLists.txt "$DESTINATION_PATH/CMakeLists.txt"

l "Processing headers"

python3 ./.github/scripts/process-headers.py "$DESTINATION_PATH"

l "Done"
