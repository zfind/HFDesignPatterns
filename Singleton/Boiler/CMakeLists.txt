cmake_minimum_required(VERSION 3.8)
project(Singleton)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Boiler.hpp)
add_executable(Singleton ${SOURCE_FILES})