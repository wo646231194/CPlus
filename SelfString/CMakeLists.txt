cmake_minimum_required(VERSION 3.3)
project(SelfString)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp String.cpp String.h)
add_executable(SelfString ${SOURCE_FILES})