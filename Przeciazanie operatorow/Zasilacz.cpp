#include "Zasilacz.h"

Zasilacz::Zasilacz(const string _producent,const string _model,const int _moc,const float _cena):
Bazowa(_producent, _model,_cena), moc(_moc)
{}

void Zasilacz::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << moc << "\t" << Bazowa::Getcena() << " zl" << endl;
}