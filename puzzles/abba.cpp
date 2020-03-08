// http://knop.livejournal.com/378619.html

#include "../solver/solver.h"
namespace {
	bool abbaPredicator(const Resolver& r)
	{
		int a = r.makeAnyWord("a"), b = r.makeAnyWord("b");
		if (a >= b) {
			return false;
		}
		int abba = r.makeAnyWord("abba"), aa = r.makeAnyWord("aa"), bb = r.makeAnyWord("bb"), ba = r.makeAnyWord("ba");
		return ((abba % aa) + (abba % bb) + (abba % ba)) == 0;
	}
}

void abba()
{
	solver_t<Resolver>(abbaPredicator, { "abba" });
}
