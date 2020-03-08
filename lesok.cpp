#include "solver.h"
namespace {
	bool lesokPredicator(const Resolver& r)
	{
		int elka = r.makeAnyWord("elka"), lesok = r.makeAnyWord("lesok");
		int n = lesok / elka;
		return (n * elka == lesok);
	}
}

void lesok()
{	
	solver_t<Resolver>(lesokPredicator, { "elka", "lesok" });
}
