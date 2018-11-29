cmake_minimum_required(VERSION 3.8)
project(ObserverPattern)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
        Subject.hpp
        Observer.hpp
        DisplayElement.hpp
        WeatherData.hpp
        CurrentConditionsDisplay.hpp
        ForecastDisplay.hpp
        StatisticsDisplay.hpp)

add_executable(ObserverPattern ${SOURCE_FILES})