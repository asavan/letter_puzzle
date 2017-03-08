#include "resolver.h"
#include <iostream>

std::string Resolver::deleteAllDublicate(const std::string& s) const
{
	std::string result;
	for (const char& c : s)
	{
		if(result.find(c) == std::string::npos)
		{
			result.push_back(c);
		}
	}
	return result;
}

int Resolver::makeWord(int index) const
{
	return makeAnyWord(_original[index]);
}

bool Resolver::next()
{		
	for(position_t i = mass.size()-1; i >= 0; --i) {
	// for(int i = 0; i < mass.size(); ++i) {
		
		if (nextStep(i, mass[i]+1)) {
			return true;
		}
	}
	return false;

}

int Resolver::makeAnyWord(const std::string& s) const
{
	int result = 0;
	for (const char& c : s) {
		result *= 10;
		result += mass[strNoDuplicates.find(c)];
	}
	return result;
}

bool Resolver::nextStep(position_t k, digit start)
{	
	if (start > m_end) return false;
	for (digit i = start; i <= end(k); ++i)
	{
		if (chek(i, k)) continue;
		mass[k] = i;
		if (k+1 == mass.size())
		{
			return true;
		}
		else
		{
			return nextStep(k+1, begin(k+1));			
		}
	}
	return false;
}

bool Resolver::char_on_position(position_t k, char c) const
{
	return strNoDuplicates[k] == c;
}

bool Resolver::is_first_letter(char c) const
{
	std::size_t found = first_letters.find(c);	
	return (found!=std::string::npos);
}

std::string Resolver::collectAllWods(const TaskType& original)
{
	std::string allWords;
	for(TaskType::const_iterator it = original.begin(); it != original.end(); ++it)
	{
		first_letters.push_back(it->at(0));
		allWords.append(*it);
	}
	return allWords;
}

void Resolver::print() const
{
	for(TaskType::const_iterator it = _original.begin(); it != _original.end(); ++it)
	{
		std::cout << makeAnyWord(*it) << " ";
	}
	std::cout << std::endl;
}

void Resolver::print_debug() const
{
	std::cout << makeAnyWord(strNoDuplicates) << " " <<strNoDuplicates << std::endl;
	for(size_t i = 0; i < mass.size(); ++i) {
		std::cout <<  mass[i];
	}
	std::cout << std::endl;
}

Resolver::Resolver(const TaskType& original):_original(original), m_end(9), 
                                             strNoDuplicates(deleteAllDublicate(collectAllWods(original))), 
                                             mass(strNoDuplicates.size())
{
	nextStep(0, begin(0));
}

bool Resolver::chek(digit i, position_t k) const
{
	for (int j = 0; j < k; ++j)
	{
		if (mass[j] == i) return true;
	}
	return false;
}

digit Resolver::begin (position_t k) const
{
	if (is_first_letter(strNoDuplicates[k]))
	{
		return 1;
	}
	return 0;
}

digit Resolver::end (position_t) const
{
	return m_end;
}
