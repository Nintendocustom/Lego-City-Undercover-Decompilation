#!/usr/bin/env python3

import argparse
import hashlib
import json
import os
import platform
import shutil
import subprocess
import tarfile
import tempfile
import urllib.error
import urllib.parse
import urllib.request
from pathlib import Path
from typing import Optional

from common import setup_common as setup
from common.util.config import get_repo_root

with open(f"{os.path.dirname(os.path.realpath(__file__))}/cache-version.json") as file:
    cache = json.load(file)

TARGET_PATH = setup.get_target_path()
TARGET_ELF_PATH = setup.get_target_elf_path()
CACHE_REPO_RELEASE_URL = f"{cache['urlPrefix']}/{cache['version']}"
TARGET_UNCOMPRESSED_NSO_PATH = setup.get_uncompressed_target_path()
LIBCXX_SRC_URL = "https://releases.llvm.org/3.9.1/libcxx-3.9.1.src.tar.xz"


def prepare_executable(original_nso: Optional[Path]):
    COMPRESSED_HASH = "cf65ba2016505d83b9a0622704521651566b87510e60ebe0d4413546f2ea59c1"
    UNCOMPRESSED_HASH = "e9cdda9d68e30ce797c6cdf32a71ef8fe1eab269e4280a21cd5acd27611d70c8"

    target_hash = file_sha256(original_nso)

    if TARGET_PATH.is_file() and target_hash == COMPRESSED_HASH or target_hash == UNCOMPRESSED_HASH and TARGET_ELF_PATH.is_file():
        print(">>> NSO is already set up")
        return

    if original_nso is None:
        setup.fail("please pass a path to the NSO (refer to the readme for more details)")

    if not original_nso.is_file():
        setup.fail(f"{original_nso} is not a file")

    nso_hash = file_sha256(original_nso)

    if nso_hash == UNCOMPRESSED_HASH:
        print(">>> found uncompressed NSO")

    elif nso_hash == COMPRESSED_HASH:
        print(">>> found compressed NSO")

    else:
        setup.fail(f"unknown executable: {nso_hash}")

    setup._convert_nso_to_elf(original_nso)

    if not TARGET_ELF_PATH.is_file():
        setup.fail("internal error while preparing executable (missing ELF); please report")


    if not TARGET_UNCOMPRESSED_NSO_PATH.is_file() or file_sha256(TARGET_UNCOMPRESSED_NSO_PATH) != UNCOMPRESSED_HASH:
        setup.fail("Internal error while exporting uncompressed NSO (uncompressed NSO either doesn't exist or has an incorrect hash); please report")


def check_download_url_updated():
    if not exists_toolchain_file("cache-version-url.txt"):
        return True
    with open(f"{get_repo_root()}/toolchain/cache-version-url.txt", "r+") as f:
        data = f.read()
        if data != CACHE_REPO_RELEASE_URL:
            return True
    return False


def file_sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def get_build_dir():
    return setup.ROOT / "build"


def exists_toolchain_file(file_path_rel):
    return os.path.isfile(f"{get_repo_root()}/toolchain/{file_path_rel}")


def setup_project_tools():

    def exists_tool(tool_name, check_symlink=True):
        return os.path.isfile(f"{get_repo_root()}/tools/{tool_name}") or (check_symlink and os.path.islink(f"{get_repo_root()}/tools/{tool_name}"))

    def update_current_cache_url():
        with open(f"{get_repo_root()}/toolchain/cache-version-url.txt", "w") as f:
            f.write(CACHE_REPO_RELEASE_URL)

    if check_download_url_updated():
        print("Old toolchain files found. Replacing them with ones from the latest release")
        if exists_tool("check", False):
            os.remove(f"{get_repo_root()}/tools/check")
        if exists_tool("decompme", False):
            os.remove(f"{get_repo_root()}/tools/decompme")
        if exists_tool("listsym", False):
            os.remove(f"{get_repo_root()}/tools/listsym")
        if exists_toolchain_file("bin/clang"):
            shutil.rmtree(f"{get_repo_root()}/toolchain/bin")

    if not exists_tool("check"):
        os.symlink(f"{get_repo_root()}/toolchain/bin/check", f"{get_repo_root()}/tools/check")
    if not exists_tool("decompme"):
        os.symlink(f"{get_repo_root()}/toolchain/bin/decompme", f"{get_repo_root()}/tools/decompme")
    if not exists_tool("listsym"):
        os.symlink(f"{get_repo_root()}/toolchain/bin/listsym", f"{get_repo_root()}/tools/listsym")

    with tempfile.TemporaryDirectory() as tmpdir:

        if not exists_toolchain_file("libcxx-include/__config"):
            print(">>> Downloading llvm-3.9 libc++ headers...")
            path = tmpdir + "/libcxx-3.9.1.src.tar.xz"
            urllib.request.urlretrieve(LIBCXX_SRC_URL, path)
            print(">>> Extracting libc++ headers...")
            with tarfile.open(path) as f:
                f.extractall(tmpdir, filter='tar')
            shutil.copytree(f"{tmpdir}/libcxx-3.9.1.src/include", f"{get_repo_root()}/toolchain/libcxx-include", dirs_exist_ok=True)

        if not exists_tool("check") or not exists_tool("decompme") or not exists_tool("listsym") or not exists_toolchain_file("bin/clang") or not exists_toolchain_file("bin/ld.lld"):

            if os.path.isdir(get_build_dir()):
                shutil.rmtree(get_build_dir())
                update_current_cache_url()
                return

            target = f"{platform.machine()}-{platform.system()}"
            update_current_cache_url()
            print("Done")

            path = tmpdir + f"/LCUDecomp-binaries_{target}"
            try:
                print(">>> Downloading clang, lld and viking...")
                url = CACHE_REPO_RELEASE_URL + urllib.parse.quote(f"/LCUDecomp-binaries_{target}.tar.xz")
                urllib.request.urlretrieve(url, path)
                print(">>> Extracting tools...")
                with tarfile.open(path) as f:
                    f.extractall(f"{get_repo_root()}/toolchain/", filter='tar')
            except urllib.error.HTTPError:
                input(f"Prebuilt binaries not found for platform: {target}.")  # Do you want to build llvm, clang, lld and viking from source? (Press enter to accept)")
                return
                build_tools_from_source(tmpdir)
            update_current_cache_url()


def create_build_dir():
    build_dir = get_build_dir()
    if build_dir.is_dir():
        print(">>> build directory already exists: nothing to do")
        return

    subprocess.check_call(
        ['cmake', '-GNinja', '-DCMAKE_BUILD_TYPE=RelWithDebInfo', '-DCMAKE_TOOLCHAIN_FILE=toolchain/ToolchainNX64.cmake', '-DCMAKE_CXX_COMPILER_LAUNCHER=ccache', '-B', str(build_dir)])
    print(">>> created build directory")


def main():
    parser = argparse.ArgumentParser("setup.py", description="Set up the decompilation project")
    parser.add_argument("original_nso", type=Path, help="Path to the original NSO, compressed or not)", nargs="?")
    parser.add_argument("--project-only", action="store_true", help="Disable original NSO setup")
    args = parser.parse_args()

    setup_project_tools()
    if not args.project_only:
        prepare_executable(args.original_nso)
    create_build_dir()


if __name__ == "__main__":
    main()
