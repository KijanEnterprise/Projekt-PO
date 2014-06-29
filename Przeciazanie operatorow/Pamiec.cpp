#include "Pamiec.h"

Pamiec::Pamiec(string _producent, string _model, string _typ, int _rozmiar, float _cena):
Bazowa(_producent, _model,_cena), typ(_typ), rozmiar(_rozmiar)
{}

void Pamiec::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << typ << "\t" << rozmiar << "\t" << Bazowa::Getcena() << " zl" << endl;
}