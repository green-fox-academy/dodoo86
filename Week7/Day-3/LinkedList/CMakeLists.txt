cmake_minimum_required(VERSION 3.14)
project(LinkedList C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkedList main.c Linked_list.h Linked_list.c)