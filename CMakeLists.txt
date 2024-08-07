cmake_minimum_required(VERSION 3.0.0)


### Set up lambda ###
project(lambda-engine)

# Build a static library, add source files
add_library(lambda-engine STATIC 
    
    ${CMAKE_SOURCE_DIR}/engine/application/Application.cpp
    ${CMAKE_SOURCE_DIR}/engine/application/Application.h
    ${CMAKE_SOURCE_DIR}/engine/client/client.h
    ${CMAKE_SOURCE_DIR}/engine/client/lambda.h
    ${CMAKE_SOURCE_DIR}/engine/gameworld/Scene.h
    ${CMAKE_SOURCE_DIR}/engine/gameworld/components.h
    ${CMAKE_SOURCE_DIR}/engine/gameworld/EntityRegister.cpp
    ${CMAKE_SOURCE_DIR}/engine/gameworld/EntityRegister.h
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/ElementBuffer.cpp
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/ElementBuffer.h
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/glObject.h
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/Shader.cpp
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/Shader.h
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/VertexArray.cpp
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/VertexArray.h
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/VertexBuffer.cpp
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/VertexBuffer.h
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/Texture.cpp
    ${CMAKE_SOURCE_DIR}/engine/graphics/opengl/Texture.h
    ${CMAKE_SOURCE_DIR}/engine/input/InputManager.cpp
    ${CMAKE_SOURCE_DIR}/engine/input/InputManager.h
    ${CMAKE_SOURCE_DIR}/engine/input/keycodes.h
    ${CMAKE_SOURCE_DIR}/engine/input/mousecodes.h
    ${CMAKE_SOURCE_DIR}/engine/platform/linux/UNXColors.cpp
    ${CMAKE_SOURCE_DIR}/engine/platform/linux/UNXColors.h
    ${CMAKE_SOURCE_DIR}/engine/renderer/2D/2DRenderer.cpp
    ${CMAKE_SOURCE_DIR}/engine/renderer/2D/2DRenderer.h
    ${CMAKE_SOURCE_DIR}/engine/tools/Logger.h
    ${CMAKE_SOURCE_DIR}/engine/shaders/vertex.vs
    ${CMAKE_SOURCE_DIR}/engine/shaders/fragment.fs
    ${CMAKE_SOURCE_DIR}/engine/thirdparty/GLAD/glad.c
    ${CMAKE_SOURCE_DIR}/engine/thirdparty/stb_image/stb_image.h
    ${CMAKE_SOURCE_DIR}/engine/tools/Filesystem.cpp
    ${CMAKE_SOURCE_DIR}/engine/tools/Filesystem.h
    ${CMAKE_SOURCE_DIR}/engine/window/Window.cpp
    ${CMAKE_SOURCE_DIR}/engine/window/Window.h    )

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
    "${CMAKE_SOURCE_DIR}/engine"
    "${CMAKE_SOURCE_DIR}/client")

# Linker
target_link_libraries(DemoApplication lambda-engine)

# Preprocessor definitions
target_compile_definitions(DemoApplication PUBLIC LAMBDA_APP)


# Preprocessor definitions (for all projects)
add_compile_definitions(LAMBDA_PLATFORM_LINUX)