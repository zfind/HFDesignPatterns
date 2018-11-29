cmake_minimum_required(VERSION 3.9)
project(Template)

set(CMAKE_CXX_STANDARD 14)

add_executable(Template main.cpp
        Tea.hpp
        CaffeineBeverage.hpp
        Coffee.hpp
        CaffeineBeverageWithHook.hpp
        TeaWithHook.hpp
        CoffeeWithHook.hpp)