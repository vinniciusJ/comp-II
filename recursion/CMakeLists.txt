cmake_minimum_required(VERSION 3.26)
project(recursion)

set(CMAKE_CXX_STANDARD 11)

add_executable(recursion main.cpp
        reverse-number.h
        sum.h)
