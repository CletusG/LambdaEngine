cmake_minimum_required(VERSION 3.0.0)

project(LambdaEngine)
file(GLOB_RECURSE lambda_src
    ${CMAKE_SOURCE_DIR}/LambdaEngine/src/*.cpp)
file(GLOB_RECURSE lambda_headers
    ${CMAKE_SOURCE_DIR}/LambdaEngine/src/*.h)
add_library(LambdaEngine STATIC ${lambda_src} ${lambda_headers})
target_link_libraries(LambdaEngine glfw)
target_precompile_headers(LambdaEngine PRIVATE ${CMAKE_SOURCE_DIR}/LambdaEngine/src/pch.h)

project(DemoApplication)
file(GLOB_RECURSE application_src
    ${CMAKE_SOURCE_DIR}/DemoApplication/src/*.cpp)
file(GLOB_RECURSE application_headers
    ${CMAKE_SOURCE_DIR}/DemoApplication/src/*.h)
add_executable(DemoApplication ${application_src} ${application_headers})
include_directories("${CMAKE_SOURCE_DIR}/LambdaEngine/src")
target_link_libraries(DemoApplication LambdaEngine)