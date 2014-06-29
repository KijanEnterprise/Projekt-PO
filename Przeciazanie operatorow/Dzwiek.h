#pragma once
#include "Bazowa.h"

class Dzwiek: public Bazowa
{
private:
	int probkowanie;
	int czestotliwosc;
	float rodzaj; // np. 5.1 7.1 2.1 2.0 itd.
public:
	Dzwiek(string _producent, string _model, int _probkowanie, int _czestotliwosc, float rodzaj, float _cena);
	void Wyswietl();
	int Getprobkowanie()
	{
		return probkowanie;
	};
	int Getczestotliwosc()
	{
		return czestotliwosc;
	};
	float Getrodzaj()
	{
		return rodzaj;
	};
};