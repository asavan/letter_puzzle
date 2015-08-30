#include "solver.h"
class LesokPredicator : public Predicator
{
public:
	virtual bool pred(const Resolver& resolver);
};

bool LesokPredicator::pred(const Resolver& resolver)
{
	int elka = resolver.makeAnyWord("elka"), lesok = resolver.makeAnyWord("lesok");
	int n = lesok/elka;
	return (n*elka == lesok);
}


void lesok()
{	
	std::vector<std::string> task;
	task.push_back("lesok");
	task.push_back("elka");
	solver_t<Resolver, LesokPredicator>(task);
}
