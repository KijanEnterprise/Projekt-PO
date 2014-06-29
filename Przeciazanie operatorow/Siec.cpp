#include "Siec.h"

Siec::Siec(string _producent, string _model, int _predkosc, string _typ, float _cena):
Bazowa(_producent, _model,_cena), predkosc(_predkosc), typ(_typ)
{}

void Siec::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << predkosc << "\t" << typ << "\t" << Bazowa::Getcena() << "\t" << endl;
}