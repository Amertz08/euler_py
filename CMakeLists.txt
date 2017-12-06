cmake_minimum_required(VERSION 3.8)
project(euler_py)

set(CMAKE_C_STANDARD 99)
include_directories(/usr/local/include/python3.6)
include_directories(include)

file(GLOB SOURCE_FILES "src/*.c")
add_executable(euler_test ${SOURCE_FILES} ctests/test.c)