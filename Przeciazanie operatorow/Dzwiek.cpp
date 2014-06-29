#include "Dzwiek.h"

Dzwiek::Dzwiek(string _producent, string _model, int _probkowanie, int _czestotliwosc, float rodzaj, float _cena):
Bazowa(_producent, _model,_cena), probkowanie(_probkowanie), czestotliwosc(_czestotliwosc), rodzaj(rodzaj)
{}

void Dzwiek::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << probkowanie << "\t" << czestotliwosc << "\t" << rodzaj<< "\t" << Bazowa::Getcena() << " zl" << endl;
}