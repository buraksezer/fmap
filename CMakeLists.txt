cmake_minimum_required(VERSION 3.15)
project(karl C)

set(CMAKE_C_STANDARD 11)

add_executable(karl main.c defs.h utils.c)