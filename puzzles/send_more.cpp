// https://youtu.be/8vO1YVQgLog?t=2082

#include "../solver/solver.h"

void send_more()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "send", "more", "money" });
}
