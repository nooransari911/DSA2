cmake_minimum_required(VERSION 3.26)
project(Trees_and_Graphs C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Trees_and_Graphs
        test0.c
        DBMS_dates.h)