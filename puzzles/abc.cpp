// https://knop.livejournal.com/378619.html?thread=7998459#t7998459

#include "../solver/solver.h"
#include <cmath>
namespace {
	bool is_prime(int abc) {
		int primes[] = { 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199,
		239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383,
			389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541,
			547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683,
			691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857,
			859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997 };
		for (int prime : primes) {
			if (prime == abc) {
				return true;
			}
		}
		return false;
	}

	bool abcPredicator(const Resolver& resolver)
	{
		int a = resolver.makeAnyWord("a"), b = resolver.makeAnyWord("b");
		if (a >= b) {
			return false;
		}
		int c = static_cast<int>(std::pow(b, a));
		if (c > 9) {
			return false;
		}
		if (b >= c) {
			return false;
		}
		int c1 = resolver.makeAnyWord("c");
		if (c != c1) {
			return false;
		}
		return is_prime(resolver.makeAnyWord("abc"));
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
		if (char_on_position(k, 'c'))
		{
			return 9;
		}
		if (char_on_position(k, 'a'))
		{
			return 2;
		}
		if (char_on_position(k, 'b'))
		{
			return 3;
		}
		return Resolver::begin(k);
	}

	digit FastResolver::end(position_t k) const
	{
		if (char_on_position(k, 'a'))
		{
			return 2;
		}
		if (char_on_position(k, 'b'))
		{
			return 3;
		}
		return Resolver::end(k);
	}
}

void abc()
{
	solve(abcPredicator, { "abc" });
}

void abc_fast()
{
	FastResolver r({ "abc" });
	solve(abcPredicator, r);
}
