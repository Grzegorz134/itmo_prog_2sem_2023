cmake_minimum_required(VERSION 3.25)
project(lab5)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab5 main.cpp swap.h matrix/matrix.h matrix/out_of_range.h)
