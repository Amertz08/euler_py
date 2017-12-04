cmake_minimum_required(VERSION 3.8)
project(euler_py)

set(CMAKE_C_STANDARD 99)
include_directories(/usr/include/python3.6)

set(SOURCE_FILES test.c src/euler.h src/euler.c src/helpers.h src/helpers.c ext/euler_py.c)
add_executable(euler_py ${SOURCE_FILES})