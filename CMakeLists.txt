cmake_minimum_required(VERSION 3.1)

# SET(CMAKE_CXX_FLAGS "-std=c++0x -Wall -Wextra -pedantic")

project(letter_puzzle)

add_subdirectory(solver)
add_subdirectory(puzzles)

set(SOURCES main.cpp)

add_executable(letter_puzzle ${SOURCES})
set_property(TARGET letter_puzzle PROPERTY CXX_STANDARD 20)

target_link_libraries(letter_puzzle solverlib puzzleslib)
