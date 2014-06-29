#include "Plyta.h"

Plyta::Plyta(string _producent, string _model, string _chipset, string _socket, float _cena):
Bazowa(_producent, _model,_cena), chipset(_chipset), socket(_socket)
{}

void Plyta::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << chipset << "\t" << socket << "\t" << Bazowa::Getcena() << " zl" << endl;
}