#include "Siec.h"

Siec::Siec(const string _producent,const string _model,const int _predkosc,const string _typ,const float _cena):
Bazowa(_producent, _model,_cena), predkosc(_predkosc), typ(_typ)
{}

void Siec::Wyswietl()
{
	cout << Bazowa::Getproducent() << "\t" << Bazowa::Getmodel() << "\t" << predkosc << "\t" << typ << "\t" << Bazowa::Getcena() << "\t" << endl;
}