cmake_minimum_required(VERSION 3.2)
project(Demo)

# Files to include in build
file(GLOB_RECURSE source_files
        ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE header_files
        ${CMAKE_SOURCE_DIR}/src/*.h)

# Include them in the executable
add_executable(${PROJECT_NAME} ${header_files} ${source_files})

# Linker settings
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/../bin/LambdaEngine/libLambdaEngine.a)

include_directories(
        "${CMAKE_SOURCE_DIR}/../LambdaEngine/src"
)