#include "../solver/solver.h"
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
	solve(lesokPredicator, { "elka", "lesok" });
}
