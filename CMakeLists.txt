cmake_minimum_required(VERSION 3.8)
project(testable)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/decipher.cpp)
add_executable(testable ${SOURCE_FILES})

add_subdirectory(test)