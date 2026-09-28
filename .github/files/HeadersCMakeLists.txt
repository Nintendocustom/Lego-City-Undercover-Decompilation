cmake_minimum_required(VERSION 3.13)
project(LegoCityUndercoverHeaders LANGUAGES CXX)
add_library(LegoCityUndercoverHeaders INTERFACE)
target_include_directories(LegoCityUndercoverHeaders INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/aarch64
    ${CMAKE_CURRENT_LIST_DIR}/nnheaders
    ${CMAKE_CURRENT_LIST_DIR}/game
)
target_compile_definitions(LegoCityUndercoverHeaders INTERFACE
    NN_SDK_MAJOR=1
    NN_SDK_MINOR=3
    NN_SDK_PATCH=1
    NNSDK
)
