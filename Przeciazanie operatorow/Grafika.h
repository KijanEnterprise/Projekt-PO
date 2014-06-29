#pragma once
#include "Bazowa.h"

class Grafika: public Bazowa
{
private:
	int pamiec;
	int zegar;
public:
	Grafika(string _producent, string _model, int _pamiec, int _zegar, float _cena);
	void Wyswietl();
	int Getpamiec()
	{
		return pamiec;
	};
	int Getzegar()
	{
		return zegar;
	};
};