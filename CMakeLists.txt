cmake_minimum_required(VERSION 2.8)

file(GLOB SOURCES
    "*.cpp"
)

file(GLOB HEADERS
    "*.h"
)


add_executable(resolver ${SOURCES} ${HEADERS})