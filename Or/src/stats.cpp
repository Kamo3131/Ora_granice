#include <iostream>
#include "stats.h"

Stats::Stats() : _enc{0}, _luck{0}, _dex{0}, _int{0}, _pow{0}{}
Stats::Stats(int Enc, int Luck, int Dex, int Int, int Pow) : _enc{Enc}, _luck{Luck}, _dex{Dex}, _int{Int}, _pow{Pow}{}
void Stats::print() const{
    std::cout << "Esencja: "<< _enc << std::endl;
    std::cout << "Esencja: "<< _luck << std::endl;
    std::cout << "Esencja: "<< _dex << std::endl;
    std::cout << "Esencja: "<< _int << std::endl;
    std::cout << "Esencja: "<< _pow << std::endl;
}

int Stats::getEnc() const{
    return _enc;
}
int Stats::getLuck() const{
    return _luck;
}
int Stats::getDex() const{
    return _dex;
}
int Stats::getInt() const{
    return _int;
}
int Stats::getPow() const{
    return _pow;
}