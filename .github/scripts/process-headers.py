import os
import sys
from pathlib import Path

workdir = Path(sys.argv[1])

for root, _, files in os.walk(workdir):
    for filename in files:
        if not filename.endswith((".h", ".hpp")):
            continue

        file_path = Path(root) / filename

        with open(file_path, "r+", encoding="utf-8") as file:
            lines = list(file)

            for i, line in enumerate(lines):
                lines[i] = line.replace("private:", "public:")
                lines[i] = lines[i].replace("protected:", "public:")

            file.seek(0)
            file.writelines(lines)
            file.truncate()
