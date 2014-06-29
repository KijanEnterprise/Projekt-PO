#pragma once
#include "Bazowa.h"

class Grafika: public Bazowa
{
private:
	int pamiec;
	int zegar;
public:
	Grafika(const string _producent,const string _model,const int _pamiec,const int _zegar,const float _cena);
	void Wyswietl();
	int Getpamiec()
	{
		return pamiec;
	}
	int Getzegar()
	{
		return zegar;
	}
};