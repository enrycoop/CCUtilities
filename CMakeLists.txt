cmake_minimum_required(VERSION 3.26)
project(CCUtilities C)

set(CMAKE_C_STANDARD 11)

add_library(CCUtilities SHARED library.c)
