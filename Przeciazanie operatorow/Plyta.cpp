#include "Plyta.h"

Plyta::Plyta(const string _producent,const string _model,const string _chipset,const string _socket,const float _cena):
Bazowa(_producent, _model,_cena), chipset(_chipset), socket(_socket)
{}

void Plyta::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << chipset << "\t" << socket << "\t" << Bazowa::Getcena() << " zl" << endl;
}