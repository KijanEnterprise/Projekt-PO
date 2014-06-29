#include "Grafika.h"

Grafika::Grafika(const string _producent,const string _model,const int _pamiec,const int _zegar,const float _cena):
Bazowa(_producent, _model,_cena), pamiec(_pamiec), zegar(_zegar)
{}

void Grafika::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << pamiec << "\t" << zegar << "\t" << Bazowa::Getcena() << " zl" << endl;
}