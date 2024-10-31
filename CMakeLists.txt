cmake_minimum_required(VERSION 3.20)
project(cpp_starter_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp)
add_executable(fmt src/format.cpp)
add_executable(menu src/menu.cpp)
add_executable(tst src/tst.cpp)
add_executable(week04 src/week04.cpp)
add_executable(week05 src/week05.cpp)
add_executable(week06 src/week06.cpp)
add_executable(week08 src/week08.cpp)
add_executable(week09 src/week09.cpp src/point.cpp)
add_executable(week10 src/week10.cpp)
