cmake_minimum_required(VERSION 3.14)
project(3_Stack)

set(CMAKE_CXX_STANDARD 14)

add_executable(3_Stack main.cpp StackLib.h StackLib.cpp cmake-build-debug/Torture.h cmake-build-debug/Torture.cpp)