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
	int getRozmiar(){	return rozmiar;}
	string getTyp(){	return typ;}
	friend ostream &operator << (ostream &C, Pamiec &V);
	friend istream &operator >> (istream &C, Pamiec &V);
};