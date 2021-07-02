#include "../solver/solver.h"

void lesok()
{	
	solve([](const Resolver& r) { return r.w(1) % r.w(0) == 0; }, { "elka", "lesok" });
}
