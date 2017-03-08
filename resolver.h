#pragma once
#include <string>
#include <vector>

typedef unsigned short int digit;
typedef std::vector<std::string> TaskType;
typedef short int position_t;

class Resolver
{
public:
	
	Resolver(const TaskType& original);
	int makeAnyWord(const std::string& str) const;
	int makeWord(int index) const;
	bool next();	
	void print() const;
protected:
	void print_debug() const;
	virtual digit begin (position_t k) const;
	virtual digit end (position_t k) const;
	virtual bool char_on_position(position_t k, char c) const;
private:
	std::string first_letters;	
	bool nextStep(position_t k, digit value);
	bool chek (digit i, position_t k) const;
	bool is_first_letter(char c) const;
	std::string deleteAllDublicate(const std::string& str) const;
	std::string collectAllWods(const TaskType& original);
	const digit m_end;
	const std::string strNoDuplicates;
	const TaskType& _original;
	std::vector<digit> mass;
	Resolver(const Resolver&);
	Resolver& operator= (const Resolver&);
};
