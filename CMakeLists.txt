cmake_minimum_required(VERSION 3.22)
project(untitled1 C)

set(CMAKE_C_STANDARD 23)

add_executable(untitled1 main.c
        apue.c
        some-c/some-print-functions.c)
