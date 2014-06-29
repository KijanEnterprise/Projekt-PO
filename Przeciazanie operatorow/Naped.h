#pragma once
#include "Bazowa.h"

class Naped: public Bazowa
{
private:
	string naped; // np. DVD, CD, Blue-Ray
	int szybkosc; // szybkoœc zapisu
public:
	Naped(const string _producent,const string _model,const string _typ,const int _szybkosc,const float _cena);
	void Wyswietl();
	string getNaped(){	return naped;}
	int getSzybkosc(){	return szybkosc;}
	friend ostream &operator <<(ostream &C, Naped &V);
	friend istream &operator >>(istream &C, Naped &V);
};