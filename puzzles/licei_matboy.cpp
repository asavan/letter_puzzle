// https://www.youtube.com/watch?v=5mNHoxvghqM

#include "../solver/solver.h"

void matboy()
{
    solve([](const Resolver& r) {
        int l = r.makeAnyWord("l");
        int i = r.makeAnyWord("i");
        int c = r.makeAnyWord("c");
        int e = r.makeAnyWord("e");
        int y = r.makeAnyWord("y");
        
        int m = r.makeAnyWord("m");
        int a = r.makeAnyWord("a");
        int t = r.makeAnyWord("t");
        int b = r.makeAnyWord("b");
        int o = r.makeAnyWord("o");

        return l * i * c * e * y == m * a * t * b * o * y;
        }, { "licey", "matboy" });
}
