// http://olympiads.mccme.ru/mmo/2020/ задача 1 (9 класс)

#include "../solver/solver.h"

namespace {
	class FastResolver : public Resolver {
	public:
		FastResolver(const std::vector<std::string>& original) : Resolver(original) {}
	protected:
		virtual digit begin(position_t /*unused*/) const { return 1; }
	};
}

void p2020()
{
	FastResolver res({ "123456789" });
	solve([](const Resolver& r) { return (r.w(0) % 202 == 0); }, res);
}
