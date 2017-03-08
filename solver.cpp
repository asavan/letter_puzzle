#include "solver.h"
#include <iostream>
void solve(Resolver& resolver, const Predicator& p)
{
	size_t count = 0;
	do
	{
		if (p.pred(resolver))
		{
			resolver.print();
		}
		++count;
	} while (resolver.next());
	std::cout << count << std::endl;
}