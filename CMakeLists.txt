cmake_minimum_required(VERSION 3.0.0)


### Set up lambda ###
project(lambda-engine)

# Build a static library, add source files
add_library(lambda-engine STATIC 
    ${CMAKE_SOURCE_DIR}/engine/thirdparty/GLAD/glad.c
    ${CMAKE_SOURCE_DIR}/engine/application/Application.cpp
    ${CMAKE_SOURCE_DIR}/engine/application/Application.h
    ${CMAKE_SOURCE_DIR}/engine/callback/FramebufferResize.cpp
    ${CMAKE_SOURCE_DIR}/engine/callback/FramebufferResize.h
    ${CMAKE_SOURCE_DIR}/engine/input/InputManager.cpp
    ${CMAKE_SOURCE_DIR}/engine/input/InputManager.h
    ${CMAKE_SOURCE_DIR}/engine/logger/Logger.cpp
    ${CMAKE_SOURCE_DIR}/engine/logger/Logger.h
    ${CMAKE_SOURCE_DIR}/engine/main/main.h
    ${CMAKE_SOURCE_DIR}/engine/window/Window.cpp
    ${CMAKE_SOURCE_DIR}/engine/window/Window.h
    ${CMAKE_SOURCE_DIR}/engine/Lambda.h
    ${CMAKE_SOURCE_DIR}/engine/input/keycodes.h
    ${CMAKE_SOURCE_DIR}/engine/input/mousecodes.h)

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

# Build an executable, add source files
add_executable(DemoApplication 
    ${CMAKE_SOURCE_DIR}/tests/DemoApplication/src/main.cpp)

# Include
include_directories(
    "${CMAKE_SOURCE_DIR}/engine")

# Linker
target_link_libraries(DemoApplication lambda-engine)