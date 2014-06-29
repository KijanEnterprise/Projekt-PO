#include "Grafika.h"

Grafika::Grafika(string _producent, string _model, int _pamiec, int _zegar, float _cena):
Bazowa(_producent, _model,_cena), pamiec(_pamiec), zegar(_zegar)
{}

void Grafika::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << pamiec << "\t" << zegar << "\t" << Bazowa::Getcena() << " zl" << endl;
}