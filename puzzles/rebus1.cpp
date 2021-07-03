#include "../solver/solver.h"

// Ğàçãàäàòü ğåáóñ udar + udar = draka

void udar()
{
	solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "udar", "draka" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=35 ÖÂÅÒÎÊ õ Â = ÁÓÊÅÒÈÊ

void buketik()
{
	solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "cvetok", "v", "buketik" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=69 - ÃÎË^2=ÔÓÒÁÎË

void futbol()
{
	solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "gol", "futbol" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=37

void gorod()
{
	solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1); }, { "raion", "gorod" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=12 ÊÍÈÃÀ+ÊÍÈÃÀ+ÊÍÈÃÀ=ÍÀÓÊÀ

void nauka()
{
	solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "kniga", "nauka" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=123 nauka+u4eba=rabota

void rabota()
{
	solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "nauka", "u4eba", "rabota" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=131
void dyry()
{
	solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "tri", "dyry"});
}


// http://rebus1.com/index.php?item=rebusx&rebus=49
void eda()
{
	solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "da", "eda" });
}
