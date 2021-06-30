#include "../solver/solver.h"

// Разгадать ребус ABCDE*A=EEEEEE

void shad_2021()
{
	solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "abcde", "a", "eeeeee" });
}
