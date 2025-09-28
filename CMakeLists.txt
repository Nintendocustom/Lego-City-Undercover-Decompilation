cmake_minimum_required(VERSION 3.13)
project(lcuswitch CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Use response files when linking objects because of the large number of source files
set(CMAKE_CXX_USE_RESPONSE_FILE_FOR_OBJECTS ON)
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fdiagnostics-color=always)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  add_compile_options(-fcolor-diagnostics)
  # Required to silence "unused argument" warnings for -stdlib=libc++ when using distcc
  add_compile_options(-Wno-unused-command-line-argument)
  # Required to fix source paths in debug info when using distcc
  add_compile_options(-fdebug-prefix-map=/tmp=${CMAKE_CURRENT_BINARY_DIR})
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE SOURCES_GAME ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/src/*.c ${PROJECT_SOURCE_DIR}/src/*.hpp ${PROJECT_SOURCE_DIR}/src/*.h ${PROJECT_SOURCE_DIR}/lib/windows.cpp)


set(FINAL_SOURCES ${SOURCES_GAME})


list(APPEND FINAL_SOURCES ${UNITY_SOURCES})

add_executable(lcuswitch ${FINAL_SOURCES})

# Writing sources to a file so build.py script knows the sources
set(SOURCES_OUTPUT_FILE "${CMAKE_BINARY_DIR}/.build_sources")
file(WRITE ${SOURCES_OUTPUT_FILE} "")

get_target_property(SOURCES_COMBINED lcuswitch SOURCES)

foreach (SOURCE ${SOURCES_COMBINED})
  file(APPEND ${SOURCES_OUTPUT_FILE} "${SOURCE}\n")
endforeach()

set(NN_SDK_MAJOR 4)
set(NN_SDK_MINOR 4)
set(NN_SDK_PATCH 1)
set(NN_SDK_TYPE "Release")

target_include_directories(lcuswitch PRIVATE src)
target_include_directories(lcuswitch PUBLIC lib/nnheaders/include)
target_include_directories(lcuswitch PUBLIC lib)

target_compile_definitions(lcuswitch PRIVATE NON_MATCHING)
target_compile_definitions(lcuswitch PRIVATE MATCHING_HACK)
target_compile_options(lcuswitch PRIVATE -fno-exceptions)
target_compile_options(lcuswitch PRIVATE -fno-strict-aliasing)
target_compile_options(lcuswitch PRIVATE -fsigned-char)
target_compile_options(lcuswitch PRIVATE -Wall -Wextra -Wdeprecated)
target_compile_options(lcuswitch PRIVATE -Wextra-semi)
target_compile_options(lcuswitch PRIVATE -fno-inline -fno-inline-functions)
target_compile_options(lcuswitch PRIVATE -fno-builtin)

# Disable some warnings that are unavoidable
target_compile_options(lcuswitch PRIVATE -Wno-unused-parameter -Wno-unused-private-field -Wno-unused-variable)
target_compile_options(lcuswitch PRIVATE -Wno-invalid-offsetof)
target_compile_options(lcuswitch PRIVATE -Wno-deprecated)
# target_compile_options(mcswitch PRIVATE -Wno-delete-incomplete) # clangd warns about this one in MultiPlayerLevel.cpp
target_compile_options(lcuswitch PRIVATE -Wno-sign-compare)

add_definitions(-D SAFETY_CHECKS)

