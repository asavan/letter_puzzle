#include "../solver/solver.h"
namespace {
	bool lesokPredicator(const Resolver& r)
	{
		int elka = r.makeAnyWord("elka"), lesok = r.makeAnyWord("lesok");
		return lesok % elka == 0;
	}
}

void lesok()
{	
	solve(lesokPredicator, { "elka", "lesok" });
}
