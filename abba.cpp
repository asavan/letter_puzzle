// http://knop.livejournal.com/378619.html

#include "solver.h"

class AbbaPredicator:public Predicator
{
public:
	virtual bool pred(const Resolver& resolver);
};

bool AbbaPredicator::pred(const Resolver& resolver)
{
	int abba = resolver.makeAnyWord("abba"), aa = resolver.makeAnyWord("aa"), bb = resolver.makeAnyWord("bb");
	int ba = resolver.makeAnyWord("ba"), a = resolver.makeAnyWord("a"), b = resolver.makeAnyWord("b");
	return ((abba%aa) + (abba%bb) + (abba%ba)) == 0 && a<b;
}

void abba()
{
	taskType task;
	task.push_back("abba");
	task.push_back("bb");
	solver_t<Resolver, AbbaPredicator>(task);
}
