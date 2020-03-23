// https://znanija.com/task/3977049

#include "../solver/solver.h"
namespace {
	bool pred(const Resolver& r)
	{
		int maiz = r.makeAnyWord("maiz"), omm = r.makeAnyWord("omm"), zima = r.makeAnyWord("zima"), o = r.makeAnyWord("o");
		return (maiz + omm == zima) && o == 7;
	}

	class FastResolver : public Resolver {
	public:
		FastResolver(const std::vector<std::string>& original) : Resolver(original) {}
	protected:
		virtual digit begin(position_t k) const;
	};

	digit FastResolver::begin(position_t k) const
	{
		if (char_on_position(k, 'o'))
		{
			return 7;
		}
		return Resolver::begin(k);
	}
}

void maiz()
{	
	solve(pred, { "maiz", "omm", "zima" });
}
