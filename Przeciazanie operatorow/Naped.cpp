#include "Naped.h"

Naped::Naped(const string _producent,const string _model,const string _naped,const int _szybkosc,const float _cena):
Bazowa(_producent, _model,_cena), naped(_naped), szybkosc(_szybkosc)
{}

void Naped::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << naped << "\t" << szybkosc << "\t" << Bazowa::Getcena() << " zl" << endl;
}