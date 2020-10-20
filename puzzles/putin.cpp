// https://forumlocal.ru/showthreaded.php?Number=13545587

#include "../solver/solver.h"

namespace {
	bool predicator(const Resolver& r)
	{
		int p = r.makeAnyWord("puti");
		if (p != 9876) {
			return false;
		}
		int a = r.makeAnyWord("trump"), b = r.makeAnyWord("biden");
		return a + b == 99999;
	}
}

void putin()
{
	solve(predicator, { "putin", "trump", "biden"});
}
