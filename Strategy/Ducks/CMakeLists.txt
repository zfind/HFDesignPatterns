cmake_minimum_required(VERSION 3.9)
project(Strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Strategy
        main.cpp
        Duck.hpp
        DecoyDuck.hpp
        MallardDuck.hpp
        ModelDuck.hpp
        RedheadDuck.hpp
        RubberDuck.hpp
        FlyBehavior.hpp
        FlyNoWay.hpp
        FlyRocketPowered.hpp
        FlyWithWings.hpp
        QuackBehavior.hpp
        Quack.hpp
        FakeQuack.hpp
        MuteQuack.hpp
        Squeak.hpp)