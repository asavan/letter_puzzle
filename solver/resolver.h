#pragma once
#include "types.h"

class Resolver
{
public:
    explicit Resolver(const TaskType& original);
    int makeAnyWord(const std::string& str) const;
    int makeWord(int index) const;
    int w(int index) const;
    bool next();
    void print() const;
    bool init();
protected:
    void print_debug() const;
    virtual digit begin(position_t k) const;
    virtual digit end(position_t k) const;
    virtual bool char_on_position(position_t k, char c) const;
private:
    const digit m_end;
    const TaskType _original;
    std::string first_letters;
    const std::string strNoDuplicates;
    std::vector<digit> mass;
    
    bool nextStep(position_t k, digit value);
    bool chek(digit i, position_t k) const;
    bool is_first_letter(char c) const;
    std::string deleteAllDublicate(const std::string& str) const;
    std::string collectAllWords(const TaskType& original);
    
    Resolver(const Resolver&) = delete;
    Resolver& operator= (const Resolver&) = delete;
};
