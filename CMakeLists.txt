cmake_minimum_required(VERSION 3.0.0)



### Set up lambda ###
project(lambda-engine)

# Source files
file(GLOB_RECURSE lambda_src 
    ${CMAKE_SOURCE_DIR}/engine/*.cpp)
file(GLOB_RECURSE lambda_headers 
    ${CMAKE_SOURCE_DIR}/engine/*.h)

# Build a static library
add_library(lambda-engine STATIC ${lambda_src} ${lambda_headers} ${CMAKE_SOURCE_DIR}/engine/thirdparty/GLAD/glad.c)

# Include
include_directories(
    "${CMAKE_SOURCE_DIR}/engine/"
    "${CMAKE_SOURCE_DIR}/include")

# Linker
target_link_libraries(lambda-engine glfw)

# Pre-compiled header
target_precompile_headers(lambda-engine INTERFACE ${CMAKE_SOURCE_DIR}/engine/pch.h)



### Set up a demo application (will be removed/moved) ###
project(DemoApplication)

# Source files
file(GLOB_RECURSE application_src
    ${CMAKE_SOURCE_DIR}/tests/DemoApplication/src/*.cpp)
file(GLOB_RECURSE application_headers
    ${CMAKE_SOURCE_DIR}/tests/DemoApplication/src/*.h)

# Build an executable
add_executable(DemoApplication ${application_src} ${application_headers})

# Include
include_directories(
    "${CMAKE_SOURCE_DIR}/engine")

# Linker
target_link_libraries(DemoApplication lambda-engine)