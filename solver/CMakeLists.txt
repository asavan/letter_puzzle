file(GLOB SOLVER_SOURCES
    "*.cpp"
)

file(GLOB SOLVER_HEADERS
    "*.h"
)

add_library(solverlib STATIC ${SOLVER_SOURCES} ${SOLVER_HEADERS})
