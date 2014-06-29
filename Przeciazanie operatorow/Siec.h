#pragma once
#include "Bazowa.h"

class Siec: public Bazowa
{
private:
	int predkosc;
	string typ; // np. RJ-45, Swiat³owód, BNC
public:
	Siec(string _producent, string _model, int _predkosc, string _typ, float _cena);
	void Wyswietl();
	int Getpredkosc()
	{
		return predkosc;
	};
	string Gettyp()
	{
		return typ;
	};
};