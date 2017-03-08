#include "solver.h"
class NaumovaPredicator : public Predicator
{
public:
	virtual bool pred(const Resolver& resolver) const;
};

bool NaumovaPredicator::pred(const Resolver& resolver) const
{
	int maja = resolver.makeAnyWord("maja"), naumova = resolver.makeAnyWord("naumova"), dara = resolver.makeAnyWord("dara");
	return (dara * maja == naumova);
}

TaskType make_task()
{
	std::vector<std::string> task;
	task.push_back("dara");
	task.push_back("maja");
	task.push_back("naumova");
	return task;
}


class FastResolver : public Resolver {
public:
	FastResolver(const std::vector<std::string>& original): Resolver(original) {}
protected:
	virtual digit begin (position_t k) const;
	virtual digit end (position_t k) const;

};

digit FastResolver::begin (position_t k) const
{
	if (char_on_position(k, 'n')) 
	{
		return 2;
	}
	return Resolver::begin(k);
}

digit FastResolver::end (position_t k) const
{
	if (char_on_position(k, 'a')) 
	{
		return 6;
	}
	return Resolver::end(k);
}

void naumova_fast()
{
	solver_t<FastResolver, NaumovaPredicator>(make_task());
}

void naumova()
{
	solver_t<Resolver, NaumovaPredicator>(make_task());
}