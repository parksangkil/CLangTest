cmake_minimum_required(VERSION 3.8)
project(helloworld)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c hello.c Quicksort.cpp 16_04_02.c)
add_executable(helloworld ${SOURCE_FILES})