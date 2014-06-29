#pragma once
#include "Bazowa.h"

class Siec: public Bazowa
{
private:
	int predkosc;
	string typ; // np. RJ-45, Swiat³owód, BNC
public:
	Siec(const string _producent,const string _model,const int _predkosc,const string _typ,const float _cena);
	void Wyswietl();
	int getPredkosc(){	return predkosc;}
	string getTyp(){	return typ;}
	friend ostream &operator << (ostream &C, Siec &V);
	friend istream &operator >> (istream &C, Siec &V);
};