cmake_minimum_required(VERSION 3.14)
project(RobisTask)

set(CMAKE_CXX_STANDARD 14)

add_executable(RobisTask main.cpp Garden.cpp Garden.h Plant.cpp Plant.h Flower.cpp Flower.h)