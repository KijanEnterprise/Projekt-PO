#pragma once
#include "Bazowa.h"

class Plyta: public Bazowa
{
private:
	string chipset;
	string socket;
public:
	Plyta(string _producent, string _model, string _chipset, string _socket, float _cena);
	void Wyswietl(); 
	string Getchipset()
	{
		return chipset;
	};
	string Getsocket()
	{
		return socket;
	};
};