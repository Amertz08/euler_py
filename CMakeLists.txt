cmake_minimum_required(VERSION 3.8)
project(euler_py)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c euler.h euler.c helpers.h helpers.c)
add_executable(euler_py ${SOURCE_FILES})