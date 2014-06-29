#pragma once
#include "Bazowa.h"

class Plyta: public Bazowa
{
private:
	string chipset;
	string socket;
public:
	Plyta(const string _producent,const string _model,const string _chipset,const string _socket,const float _cena);
	void Wyswietl(); 
	string Getchipset()
	{
		return chipset;
	}
	string Getsocket()
	{
		return socket;
	}
};