cmake_minimum_required(VERSION 3.26)
project(Trees_and_Graphs C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Trees_and_Graphs
        test0.c
        stack_queue_ADT.h
        elle0.h
        prints.h
        stack_elle.h
        test1.h
        prints2.h
        test2.h
        traversals_recursive.h
        traversals_iterative.h
        BST0.h
)