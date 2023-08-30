cmake_minimum_required(VERSION 3.26)
project(counter)

set(CMAKE_CXX_STANDARD 17)

add_executable(counter main.cpp
        counter.h)
