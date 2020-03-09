#include "solver.h"
#include <iostream>

void solve(std::function<bool(const Resolver&)> pred, Resolver& resolver)
{
    size_t count = 0;
    bool res = resolver.init();
    if (!res) {
        std::cout << "Bad init. May loose some solutions" << std::endl;
    }
    do
    {
        if (pred(resolver))
        {
            resolver.print();
        }
        ++count;
    } while (resolver.next());
    std::cout << "variants counted " << count << std::endl;
}

void solve(std::function<bool(const Resolver&)> pred, const TaskType& task)
{
    Resolver resolver(task);
    solve(pred, resolver);
}
