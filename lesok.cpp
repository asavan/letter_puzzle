#include "solver.h"
class LesokPredicator : public Predicator
{
public:
	virtual bool pred(const Resolver& resolver) const;
};

bool LesokPredicator::pred(const Resolver& resolver) const
{
	int elka = resolver.makeAnyWord("elka"), lesok = resolver.makeAnyWord("lesok");
	int n = lesok/elka;
	return (n*elka == lesok);
}


void lesok()
{	
	solver_t<Resolver, LesokPredicator>({ "elka", "lesok" });
}
