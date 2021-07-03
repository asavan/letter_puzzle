file(GLOB PUZZLE_SOURCES "*.cpp")

set(PUZZLE_HEADERS "functions.h")

add_library(puzzleslib STATIC ${PUZZLE_SOURCES} ${PUZZLE_HEADERS})
