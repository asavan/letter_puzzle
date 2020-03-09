#pragma once
#include "resolver.h"
#include <functional>

void solve(std::function<bool(const Resolver&)> pred, Resolver& resolver);
void solve(std::function<bool(const Resolver&)> pred, const TaskType& task);
