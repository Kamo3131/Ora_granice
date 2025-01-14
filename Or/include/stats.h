#pragma once

class Stats{
public:
Stats();
Stats(int Enc, int Luck, int Dex, int Int, int Pow);
void print() const;
int getEnc() const;
int getLuck() const;
int getDex() const;
int getInt() const;
int getPow() const;
private:
int _enc; //Esencja
int _luck; //Szczescie
int _dex; //Zrecznosc
int _int; //Inteligencja
int _pow; //Moc
};