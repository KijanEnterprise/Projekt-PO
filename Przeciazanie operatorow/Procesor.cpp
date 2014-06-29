#include "Procesor.h"

Procesor::Procesor(const string _producent,const string _model,const float _taktowanie,const int _rdzenie,const float _cena):
Bazowa(_producent, _model,_cena), taktowanie(_taktowanie), rdzenie(_rdzenie)
{}

void Procesor::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << taktowanie << "\t" << rdzenie << "\t" << Bazowa::Getcena() << " zl" << endl;
}