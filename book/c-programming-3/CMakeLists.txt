cmake_minimum_required(VERSION 3.15)
project(c_programming_3 C)

set(CMAKE_C_STANDARD 99)

add_executable(c_programming_3 main.c chapter01/HelloWorld.c)

#add_subdirectory(chapter01)
#add_subdirectory(chapter03)
#add_subdirectory(chapter04)
add_subdirectory(chapter06)