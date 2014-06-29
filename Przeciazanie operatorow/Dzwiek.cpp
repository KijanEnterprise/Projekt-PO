#include "Dzwiek.h"

Dzwiek::Dzwiek(const string _producent,const string _model,const int _probkowanie,const int _czestotliwosc,const float rodzaj,const float _cena):
Bazowa(_producent, _model,_cena), probkowanie(_probkowanie), czestotliwosc(_czestotliwosc), rodzaj(rodzaj)
{}

void Dzwiek::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << probkowanie << "\t" << czestotliwosc << "\t" << rodzaj<< "\t" << Bazowa::Getcena() << " zl" << endl;
}