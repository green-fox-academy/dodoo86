cmake_minimum_required(VERSION 3.14)
project(Animals)

set(CMAKE_CXX_STANDARD 14)

add_executable(Animals main.cpp Animal.cpp Animal.h Mammal.cpp Mammal.h Reptile.cpp Reptile.h Bird.cpp Bird.h)