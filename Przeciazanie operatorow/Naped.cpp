#include "Naped.h"

Naped::Naped(string _producent, string _model, string _naped, int _szybkosc, float _cena):
Bazowa(_producent, _model,_cena), naped(_naped), szybkosc(_szybkosc)
{}

void Naped::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << naped << "\t" << szybkosc << "\t" << Bazowa::Getcena() << " zl" << endl;
}