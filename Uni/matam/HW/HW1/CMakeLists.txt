cmake_minimum_required(VERSION 3.27)
project(HW1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -Wall -pedantic-errors -Werror")
add_executable(HW1 main.cpp
        mtm_bug.c)
