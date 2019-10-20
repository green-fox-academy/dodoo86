cmake_minimum_required(VERSION 3.14)
project(Zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Zoo main.cpp Animal.cpp Animal.h Lion.cpp Lion.h Monkey.cpp Monkey.h Elephant.cpp Elephant.h Worker.cpp Worker.h)