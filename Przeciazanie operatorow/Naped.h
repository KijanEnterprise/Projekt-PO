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
	string Getnaped()
	{
		return naped;
	}
	int Getszybkosc()
	{
		return szybkosc;
	}
};