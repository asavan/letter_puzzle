#include "../solver/solver.h"

// ��������� ����� udar + udar = draka

void udar()
{
	solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "udar", "draka" });
}
