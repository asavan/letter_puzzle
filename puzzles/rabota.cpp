#include "../solver/solver.h"

// http://rebus1.com/index.php?item=rebusx&rebus=123 nauka+u4eba=rabota

void rabota()
{
	solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "nauka", "u4eba", "rabota" });
}
