#include "Siec.h"

Siec::Siec(const string _producent,const string _model,const int _predkosc,const string _typ,const float _cena):
Bazowa(_producent, _model,_cena), predkosc(_predkosc), typ(_typ)
{}

void Siec::Wyswietl()
{
	cout << producent << "\t" << model << "\t" << predkosc << "\t" << typ << "\t" << cena << "\t" << endl;
}

ostream &operator << (ostream &C, Siec &V)
{
	return C << 6 << " ; " << V.producent << " ; " << V.model << " ; " << V.predkosc << " ; " << V.typ << " ; " << V.cena<< endl;
}

istream &operator >> (istream &C, Siec &V)
{
	string srednik;
	C >> srednik >> V.producent >> srednik >> V.model >> srednik >> V.predkosc >> srednik >> V.typ >> srednik >> V.cena;
	return C;
}