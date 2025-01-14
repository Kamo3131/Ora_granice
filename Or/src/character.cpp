#include <iostream>
#include "character.h"
#include <cmath>

Character::Character() : _stats{Stats()}, _level{1}{}
Character::Character(const Stats & stats, const int number, std::string name) : _stats{stats}, _level{number}
, _name{name}{
    _max_health = 15+2*_stats.getEnc()+_Race*_level;
    if(_stats.getDex()<_stats.getLuck()){
        _unik = 3+number+floor(_stats.getLuck()/2);
        std::cout << "Dodge from luck: " << _unik << std::endl;
    }
    else {
        _unik = 3+number+floor(_stats.getDex()/2);
        std::cout << "Dodge from dexterity: " << _unik << std::endl;
    }
}

void Character::print() const{
    _stats.print();
    
    std::cout << std::endl << "Health: "<< _max_health << std::endl;
    std::cout << "Dodge: " << _unik << std::endl;
}

void Character::chance(int granica) const{
    std::cout << _name << "\'s dodge chance: " << (20-granica+_unik)*5 << std::endl;
}