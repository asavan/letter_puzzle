#include "solver.h"
#include <iostream>
void solve(Resolver& resolver, std::function<bool(const Resolver&)> pred)
{
	size_t count = 0;
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
