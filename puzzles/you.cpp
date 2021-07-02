// https://youtu.be/TzBoJV3liGo?t=372

#include "../solver/solver.h"

void you()
{
    solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1); }, { "ty", "vy" });
}
