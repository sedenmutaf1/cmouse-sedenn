cmake_minimum_required(VERSION 3.26)
project(cmouse_sedenn C)

set(CMAKE_C_STANDARD 11)

add_executable(cmouse_sedenn scripts/main.c
        scripts/main.h)
