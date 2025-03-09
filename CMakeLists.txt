cmake_minimum_required(VERSION 3.21)

project(CMake_GTest_Template)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/bin")
set(CMAKE_LIBRARY_PATH  "${CMAKE_CURRENT_LIST_DIR}/lib")

enable_testing()

add_subdirectory(project)
add_subdirectory(tests)
