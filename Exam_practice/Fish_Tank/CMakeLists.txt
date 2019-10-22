cmake_minimum_required(VERSION 3.14)
project(Fish_Tank)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fish_Tank main.cpp Fish.cpp Fish.h Clownfish.cpp Clownfish.h Tang.cpp Tang.h Kong.cpp Kong.h Aquarium.cpp Aquarium.h)