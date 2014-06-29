#pragma once
#include "Bazowa.h"

class Pamiec: public Bazowa
{
private:
	int rozmiar;
	string typ; // typy np. DDR3, DDR2 itd.    oraz   Pamiêæ masowa SSD, HDD
public:
	Pamiec(const string _producent,const string _model,const string _typ,const int _rozmiar,const float _cena);
	void Wyswietl();
	int Getrozmiar()
	{
		return rozmiar;
	}
	string Gettyp()
	{
		return typ;
	}
};
 