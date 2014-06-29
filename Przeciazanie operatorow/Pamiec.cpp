#include "Pamiec.h"

Pamiec::Pamiec(const string _producent,const string _model,const string _typ,const int _rozmiar,const float _cena):
Bazowa(_producent, _model,_cena), typ(_typ), rozmiar(_rozmiar)
{}

void Pamiec::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << typ << "\t" << rozmiar << "\t" << Bazowa::Getcena() << " zl" << endl;
}