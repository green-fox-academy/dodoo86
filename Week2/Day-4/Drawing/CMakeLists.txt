cmake_minimum_required(VERSION 3.14)
project(Drawing)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH /Users/User/Downloads/SDLFiles/SDL2_macOS/SDL2_plugins)

set(EXECUTABLES "draw;task2;task3;task4;task5;task6;task7;task8;project1;Project3;project2;project4;project5")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

find_package(SDL2_all REQUIRED)
