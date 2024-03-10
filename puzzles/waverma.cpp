// https://www.youtube.com/watch?v=5mNHoxvghqM

#include "../solver/solver.h"

void waverma()
{
    solve([](const Resolver& r) {
        int k = r.w(0);
        int s = r.w(1);
        int w = r.w(2);
        return k + s == w;
        }, { "kowka",  "sobaka", "waverma"});
}
