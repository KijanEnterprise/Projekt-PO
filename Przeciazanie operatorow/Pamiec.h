#pragma once
#include "Bazowa.h"

class Pamiec: public Bazowa
{
private:
	int rozmiar;
	string typ; // typy np. DDR3, DDR2 itd.    oraz   Pamiêæ masowa SSD, HDD
public:
	Pamiec(string _producent, string _model, string _typ, int _rozmiar, float _cena);
	void Wyswietl();
	int Getrozmiar()
	{
		return rozmiar;
	};
	string Gettyp()
	{
		return typ;
	};
};
 