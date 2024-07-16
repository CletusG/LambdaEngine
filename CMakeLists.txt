cmake_minimum_required(VERSION 3.0.0)

project(lambda-engine)
file(GLOB_RECURSE lambda_src
    ${CMAKE_SOURCE_DIR}/lambda-engine/*.cpp)
file(GLOB_RECURSE lambda_headers
    ${CMAKE_SOURCE_DIR}/lambda-engine/*.h)
add_library(lambda-engine STATIC ${lambda_src} ${lambda_headers} ${CMAKE_SOURCE_DIR}/lambda-engine/thirdparty/GLAD/glad.c)
include_directories("${CMAKE_SOURCE_DIR}/lambda-engine/"
    "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(lambda-engine glfw)
target_precompile_headers(lambda-engine INTERFACE ${CMAKE_SOURCE_DIR}/lambda-engine/pch.h)

project(DemoApplication)
file(GLOB_RECURSE application_src
    ${CMAKE_SOURCE_DIR}/tests/DemoApplication/src/*.cpp)
file(GLOB_RECURSE application_headers
    ${CMAKE_SOURCE_DIR}/tests/DemoApplication/src/*.h)
add_executable(DemoApplication ${application_src} ${application_headers})
include_directories("${CMAKE_SOURCE_DIR}/lambda-engine")
target_link_libraries(DemoApplication lambda-engine)