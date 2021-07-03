#include "../solver/solver.h"

// http://rebus1.com/index.php?item=rebusx&rebus=69 - ГОЛ^2=ФУТБОЛ

void futbol()
{
	solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "gol", "futbol" });
}
