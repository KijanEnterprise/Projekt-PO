#pragma once
#include "Bazowa.h"


class Procesor: public Bazowa
{
private:
	float taktowanie;
	int rdzenie;
public:
	Procesor(const string _producent,const string _model,const float _taktowanie,const int _rdzenie,const float _cena);
	void Wyswietl();
	float Gettaktowanie()
	{
		return taktowanie;
	}
	int Getrdzenie()
	{
		return rdzenie;
	}
};