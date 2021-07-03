set(SOLVER_SOURCES resolver.cpp solver.cpp)
set(SOLVER_HEADERS resolver.h solver.h types.h)

add_library(solverlib STATIC ${SOLVER_SOURCES} ${SOLVER_HEADERS})
