cmake_minimum_required(VERSION 3.7)
project(spoj_excerci)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(spoj_excerci ${SOURCE_FILES})
add_subdirectory(primary)
add_subdirectory(fctrl)