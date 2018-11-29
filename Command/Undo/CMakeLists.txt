cmake_minimum_required(VERSION 3.8)
project(Command)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
        RemoteControlWithUndo.hpp
        Command.hpp
        Light.hpp
        LightOnCommand.hpp
        NoCommand.hpp
        LightOffCommand.hpp
        CeilingFan.hpp
        CeilingFanMediumCommand.hpp
        CeilingFanHighCommand.hpp
        CeilingFanOffCommand.hpp)

add_executable(Command ${SOURCE_FILES})