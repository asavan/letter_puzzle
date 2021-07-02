// https://znanija.com/task/3977049

#include "../solver/solver.h"
namespace {
    bool pred(const Resolver& r)
    {
        int maiz = r.w(0), omm = r.w(1), zima = r.w(2), o = r.makeAnyWord("o");
        return (maiz + omm == zima) && o == 7;
    }
}

void maiz()
{
    solve(pred, { "maiz", "omm", "zima" });
}
