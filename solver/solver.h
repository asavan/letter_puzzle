#pragma once
#include "resolver.h"
#include <functional>

void solve(Resolver& resolver, std::function<bool(const Resolver&)> pred);

template<typename T> 
void solver_t(std::function<bool(const Resolver&)> pred, const TaskType& task)
{
	T resolver(task);
	solve(resolver, pred);
}
