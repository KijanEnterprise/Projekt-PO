#pragma once
#include "Bazowa.h"

class Zasilacz: public Bazowa
{
private:
	int moc;
public:
	Zasilacz(const string _producent,const string _model,const int _moc,const float _cena);
	void Wyswietl();
	int Getmoc()
	{
		return moc;
	}
};