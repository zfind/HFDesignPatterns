cmake_minimum_required(VERSION 3.9)
project(Beverage)

set(CMAKE_CXX_STANDARD 17)

add_executable(Beverage main.cpp
        Beverage.hpp
        HouseBlend.hpp
        DarkRoast.hpp
        Decaf.hpp
        Espresso.hpp
        CondimentDecorator.hpp
        Milk.hpp
        Mocha.hpp
        Soy.hpp
        Whip.hpp)