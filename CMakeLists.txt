cmake_minimum_required(VERSION 3.2)

project(Test-Module)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBS_DIR ${CMAKE_BINARY_DIR}/libs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LIBS_DIR})
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)

# Add src
set(TEST_MODULE libTestModule)
add_subdirectory(${CMAKE_SOURCE_DIR}/src/test-manager)

# Add test
add_subdirectory(${CMAKE_SOURCE_DIR}/test/test-manager)
