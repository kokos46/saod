cmake_minimum_required(VERSION 3.30)
project(saod)

set(CMAKE_CXX_STANDARD 20)

add_executable(saod saod.cpp
        Functions.cpp
        Functions.h)
