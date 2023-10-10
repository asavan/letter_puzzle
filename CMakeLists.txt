cmake_minimum_required(VERSION 3.19)

project(letter_puzzle)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_DISABLE_PRECOMPILE_HEADERS ON)

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_subdirectory(solver)
add_subdirectory(puzzles)

set(SOURCES main.cpp measure.cpp)
set(HEADERS measure.h puzzles/functions.h)

add_executable(letter_puzzle ${SOURCES} ${HEADERS})
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT letter_puzzle)

target_link_libraries(letter_puzzle puzzleslib)
