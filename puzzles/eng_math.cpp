/*
    ONE + ONE = TWO
    ONE + TWO = THREE
    TW0 + TWO = FOUR
    ONE + THREE = FOUR
    FOUR + FIVE = NINE
    
*/
#include "../solver/solver.h"

namespace {
	bool predicatorTwo(const Resolver& r)
	{
		int one = r.makeAnyWord("one");
		int two = r.makeAnyWord("two");
		return one + one == two;
	}

	bool predicatorThree(const Resolver& r)
	{
		int one = r.makeAnyWord("one");
		int two = r.makeAnyWord("wo");
		int three = r.makeAnyWord("rex");
		return one + two == three + 1000;
	}

	bool predicatorFour(const Resolver& r)
	{
		int two = r.makeAnyWord("two");
		int four = r.makeAnyWord("four");
		return two + two == four;
	}

	bool predicatorNine(const Resolver& r)
	{
		int four = r.makeAnyWord("four");
		int five = r.makeAnyWord("five");
		int nine = r.makeAnyWord("nine");
		return four + five == nine;
	}
}

void eng_math()
{
	solve(predicatorTwo, { "one", "two"});
	solve(predicatorThree, { "one", "wo", "rex"});
	solve(predicatorFour, { "two", "four"});
	solve(predicatorNine, { "four", "five", "nine"});
}
