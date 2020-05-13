cmake_minimum_required(VERSION 3.6)

# SET(CMAKE_CXX_FLAGS "-std=c++0x -Wall -Wextra -pedantic")

project(letter_puzzle)

add_subdirectory(solver)
add_subdirectory(puzzles)

set(SOURCES main.cpp)

add_executable(letter_puzzle ${SOURCES})
set_property(TARGET letter_puzzle PROPERTY CXX_STANDARD 20)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT letter_puzzle)

target_link_libraries(letter_puzzle solverlib puzzleslib)
