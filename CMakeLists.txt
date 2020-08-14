cmake_minimum_required(VERSION 3.16)

project(letter_puzzle)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_DISABLE_PRECOMPILE_HEADERS ON)

add_subdirectory(solver)
add_subdirectory(puzzles)

add_executable(letter_puzzle main.cpp)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT letter_puzzle)

target_link_libraries(letter_puzzle solverlib puzzleslib)
