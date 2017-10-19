cmake_minimum_required(VERSION 3.8)
project(helloworld)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c hello.c Quicksort.cpp)
add_executable(helloworld ${SOURCE_FILES})