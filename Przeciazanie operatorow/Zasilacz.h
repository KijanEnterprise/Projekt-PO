#pragma once
#include "Bazowa.h"

class Zasilacz: public Bazowa
{
private:
	int moc;
public:
	Zasilacz(string _producent, string _model, int _moc, float _cena);
	void Wyswietl();
	int Getmoc()
	{
		return moc;
	};
};