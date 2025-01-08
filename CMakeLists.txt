cmake_minimum_required(VERSION 3.30)
project(areaCalcualtor)

set(CMAKE_CXX_STANDARD 20)

add_executable(areaCalcualtor main.cpp
        getUserLength.cpp
        getUserHeight.cpp
        doCalculations.cpp
)
