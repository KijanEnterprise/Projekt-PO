#pragma once
#include "Bazowa.h"


class Procesor: public Bazowa
{
private:
	float taktowanie;
	int rdzenie;
public:
	Procesor(string _producent, string _model, float _taktowanie, int _rdzenie, float _cena);
	void Wyswietl();
	float Gettaktowanie()
	{
		return taktowanie;
	};
	int Getrdzenie()
	{
		return rdzenie;
	};
};