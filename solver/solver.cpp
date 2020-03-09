#include "solver.h"
#include <iostream>

void solve(std::function<bool(const Resolver&)> pred, Resolver& resolver)
{
	size_t count = 0;
	resolver.init();
	do
	{
		if (pred(resolver))
		{
			resolver.print();
		}
		++count;
	} while (resolver.next());
	std::cout << count << std::endl;
}

void solve(std::function<bool(const Resolver&)> pred, const TaskType& task)
{
	Resolver resolver(task);
	solve(pred, resolver);
}
