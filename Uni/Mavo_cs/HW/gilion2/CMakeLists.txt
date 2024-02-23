cmake_minimum_required(VERSION 3.27)
project(gilion2 C)

set(CMAKE_C_STANDARD 99)

add_executable(gilion2 strong_prime_number.c
        pelindrom.c
        LCES.c
        bonus_q.c)
