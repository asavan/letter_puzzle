// http://olympiads.mccme.ru/mmo/2020/

#include "../solver/solver.h"

namespace {
	bool predicat(const Resolver& r)
	{
		int a = r.makeAnyWord("abcdefhig");
		return (a % 202 == 0);
	}

	class FastResolver : public Resolver {
	public:
		FastResolver(const std::vector<std::string>& original) : Resolver(original) {}
	protected:
		virtual digit begin(position_t k) const;
	};

	digit FastResolver::begin(position_t k) const
	{
		return 1;
	}

}

void p2020()
{
	solve(predicat, FastResolver({ "abcdefhig" }));
}
