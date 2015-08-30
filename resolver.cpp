#include "resolver.h"
#include <iostream>
Resolver::Resolver(const std::string& original) : strNoDuplicates(deleteAllDublicate(original.c_str())), mass(strNoDuplicates.size()), m_end(9)
{
	nextStep(0, begin(0));
}

std::string Resolver::deleteAllDublicate(const std::string& str) const
{
	std::string result;
	for(size_t i = 0; i < str.size(); ++i)
	{
		if(result.find(str[i]) == std::string::npos)
		{
			result.push_back(str[i]);
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

int Resolver::makeAnyWord(const std::string& S) const
{
	int i = 0;
	int result = 0;
	while(S[i]!=0) 
	{ 
		result *=10;
		result += mass[strNoDuplicates.find(S[i])];
		i++; 
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

std::string Resolver::collectAllWods(const std::vector<std::string>& original)
{
	std::string allWords;
	for(std::vector<std::string>::const_iterator it = original.begin(); it != original.end(); ++it)
	{
		first_letters.push_back(it->at(0));
		allWords.append(*it);
	}
	return allWords;
}

void Resolver::print() const
{
	for(std::vector<std::string>::const_iterator it = _original.begin(); it != _original.end(); ++it)
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

Resolver::Resolver(const std::vector<std::string>& original):_original(original), m_end(9), strNoDuplicates(deleteAllDublicate(collectAllWods(original))), mass(strNoDuplicates.size())
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
