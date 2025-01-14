#pragma once
#include "stats.h"
#include <string>
class Character{
public:
Character();
Character(const Stats & stats, const int number, std::string name);
void print() const;
void chance(int granica) const;
private:
std::string _name;
int _unik;
int _max_health;
int _level;
Stats _stats;
int _Race=6;

};