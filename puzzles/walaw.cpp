// https://youtu.be/TzBoJV3liGo?t=372

#include "../solver/solver.h"

void walaw()
{
    solve([](const Resolver& r) {
        int w = r.makeAnyWord("w");
        int a = r.makeAnyWord("a");
        int l = r.makeAnyWord("l");
        int sum = w + a + l;
        return sum * sum * sum * sum == r.w(0);
        }, { "walaw" });
}
