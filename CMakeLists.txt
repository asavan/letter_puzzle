cmake_minimum_required(VERSION 2.8)

# SET(CMAKE_CXX_FLAGS "-std=c++0x -Wall -Wextra -pedantic")



file(GLOB SOURCES
    "*.cpp"
)

file(GLOB HEADERS
    "*.h"
)

add_executable(resolver ${SOURCES} ${HEADERS})
set_property(TARGET resolver PROPERTY CXX_STANDARD 20)