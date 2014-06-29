#include "Procesor.h"

Procesor::Procesor(string _producent, string _model, float _taktowanie, int _rdzenie, float _cena):
Bazowa(_producent, _model,_cena), taktowanie(_taktowanie), rdzenie(_rdzenie)
{}

void Procesor::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << taktowanie << "\t" << rdzenie << "\t" << Bazowa::Getcena() << " zl" << endl;
}