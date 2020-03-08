cmake_minimum_required(VERSION 2.8)

file(GLOB PUZZLE_SOURCES
    "*.cpp"
)

file(GLOB PUZZLE_HEADERS
    "*.h"
)

add_library(puzzleslib STATIC ${PUZZLE_SOURCES} ${PUZZLE_HEADERS})