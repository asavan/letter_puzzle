#include "../solver/solver.h"

// http://rebus1.com/index.php?item=rebusx&rebus=35 ЦВЕТОК х В = БУКЕТИК

void buketik()
{
	solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "cvetok", "v", "buketik" });
}
