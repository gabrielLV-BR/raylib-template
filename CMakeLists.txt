cmake_minimum_required(VERSION 3.17)
project(smoke VERSION 1.0)

set("MODULES_ROOT" "${CMAKE_SOURCE_DIR}/modules")

add_subdirectory("${MODULES_ROOT}/raylib/")

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE "${MODULES_ROOT}")
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)