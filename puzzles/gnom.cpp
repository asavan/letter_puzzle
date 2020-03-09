// https://vashurok.ru/questions/v-chislovom-rebuse-gnom-gnom-skala-gnom-gnom-skala-raznie-bukvi-oboznachayut-raznie-tsifr

#include "../solver/solver.h"
namespace {
	bool pred(const Resolver& r)
	{
		int gnom = r.makeAnyWord("gnom"), skala = r.makeAnyWord("skala"), m = r.makeAnyWord("m");
		return gnom + gnom == skala && m == 3;
	}

	class FastResolver : public Resolver {
	public:
		FastResolver(const std::vector<std::string>& original) : Resolver(original) {}
	protected:
		virtual digit begin(position_t k) const;
	};

	digit FastResolver::begin(position_t k) const
	{
		if (char_on_position(k, 'm'))
		{
			return 3;
		}
		return Resolver::begin(k);
	}
}

void gnom()
{	
	FastResolver g({ "gnom", "skala"});
	FastResolver s({ "skala", "gnom" });
	// solve(pred, g);
	solve(pred, s);
}
