cmake_minimum_required(VERSION 3.2)
project(LambdaEngine)

# Using Linux right now, so I've downloaded glfw through package manager

# Files to include in build
file(GLOB_RECURSE source_files
        ${CMAKE_SOURCE_DIR}/LambdaEngine/src/*.cpp)
file(GLOB_RECURSE header_files
        ${CMAKE_SOURCE_DIR}/LambdaEngine/src/*.h)

# Include them in the static library
add_library(LambdaEngine STATIC ${header_files} ${source_files})

# Linker settings
target_link_libraries(${PROJECT_NAME} glfw)

# Include
include_directories(
        "${CMAKE_SOURCE_DIR}/LambdaEngine/src"
)

# Precompiled header
target_precompile_headers(LambdaEngine PRIVATE ${CMAKE_SOURCE_DIR}/LambdaEngine/src/pch.h)