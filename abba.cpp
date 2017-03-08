// http://knop.livejournal.com/378619.html

#include "solver.h"

class AbbaPredicator:public Predicator
{
public:
	virtual bool pred(const Resolver& resolver) const;
};

bool AbbaPredicator::pred(const Resolver& resolver) const
{
	int abba = resolver.makeAnyWord("abba"), aa = resolver.makeAnyWord("aa"), bb = resolver.makeAnyWord("bb");
	int ba = resolver.makeAnyWord("ba"), a = resolver.makeAnyWord("a"), b = resolver.makeAnyWord("b");
	return ((abba%aa) + (abba%bb) + (abba%ba)) == 0 && a<b;
}

void abba()
{
	// second word need to not set b to zero
	solver_t<Resolver, AbbaPredicator>({ "abba", "b" });
}
