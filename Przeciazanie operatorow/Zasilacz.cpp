#include "Zasilacz.h"

Zasilacz::Zasilacz(string _producent, string _model, int _moc, float _cena):
Bazowa(_producent, _model,_cena), moc(_moc)
{}

void Zasilacz::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << moc << "\t" << Bazowa::Getcena() << " zl" << endl;
}