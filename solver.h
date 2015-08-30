#pragma once
#include "resolver.h"
#include <iostream>

class Predicator
{
public:
	virtual bool pred(const Resolver& resolver) = 0;
};


template< typename T, typename P> 
void solver_t(const taskType& task)
{
	size_t count = 0;
	T resolver(task);
	P p;
	// FastResolver resolver("nmdajaaraaumova");
	do 
	{
		if (p.pred(resolver))
		{
			resolver.print();
		}
		++count;
	} while(resolver.next());
	std::cout << count << std::endl;
}
