cmake_minimum_required(VERSION 3.14)
project(AsciiArt C)

set(CMAKE_C_STANDARD 99)

add_executable(AsciiArt main.c Ascii.h Ascii.c)