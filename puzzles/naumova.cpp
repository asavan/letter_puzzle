#include "../solver/solver.h"


namespace {

	static const TaskType all_words = { "dara", "maja", "naumova" };

	bool naumovaPredicator(const Resolver& r)
	{
		int maja = r.makeAnyWord("maja"), naumova = r.makeAnyWord("naumova"), dara = r.makeAnyWord("dara");
		return (dara * maja == naumova);
	}

	class FastResolver : public Resolver {
	public:
		FastResolver(const std::vector<std::string>& original) : Resolver(original) {}
	protected:
		virtual digit begin(position_t k) const;
		virtual digit end(position_t k) const;

	};

	digit FastResolver::begin(position_t k) const
	{
		if (char_on_position(k, 'n'))
		{
			return 2;
		}
		return Resolver::begin(k);
	}

	digit FastResolver::end(position_t k) const
	{
		if (char_on_position(k, 'a'))
		{
			return 6;
		}
		return Resolver::end(k);
	}
}

void naumova_fast()
{
	solver_t<FastResolver>(naumovaPredicator, all_words);
}

void naumova()
{
	solver_t<Resolver>(naumovaPredicator, all_words);
}
