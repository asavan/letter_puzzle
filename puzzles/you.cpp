// https://youtu.be/TzBoJV3liGo?t=372

#include "../solver/solver.h"

namespace {
	bool predicator(const Resolver& r)
	{
		int a = r.makeAnyWord("ty"), b = r.makeAnyWord("vy");
		return a*4 == b;
	}
}

void you()
{
	solve(predicator, { "ty", "vy" });
}
