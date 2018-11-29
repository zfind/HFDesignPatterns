cmake_minimum_required(VERSION 3.9)
project(Adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Adapter main.cpp
        Duck.hpp
        Turkey.hpp
        MallardDuck.hpp
        TurkeyAdapter.hpp
        WildTurkey.hpp)