#pragma once
#include "Bazowa.h"

class Naped: public Bazowa
{
private:
	string naped; // np. DVD, CD, Blue-Ray
	int szybkosc; // szybkoœc zapisu
public:
	Naped(string _producent, string _model, string _typ, int _szybkosc, float _cena);
	void Wyswietl();
	string Getnaped()
	{
		return naped;
	};
	int Getszybkosc()
	{
		return szybkosc;
	};
};