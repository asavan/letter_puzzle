#pragma once
#include "resolver.h"

class Predicator
{
public:
	virtual bool pred(const Resolver& resolver) const = 0;
};

void solve(Resolver& resolver, const Predicator& p);

template< typename T, typename P> 
void solver_t(const TaskType& task)
{
	T resolver(task);
	P p;
	solve(resolver, p);
}
