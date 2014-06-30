#include "Pamiec.h"

Pamiec::Pamiec(const string _producent,const string _model,const string _typ,const int _rozmiar,const float _cena):
Bazowa(_producent, _model,_cena), typ(_typ), rozmiar(_rozmiar)
{}

void Pamiec::Wyswietl()
{
	cout << producent << "\t" << model << "\t" << typ << "\t" << rozmiar << "\t" << cena << " zl" << endl;
}

ostream &operator << (ostream &C, Pamiec &V)
{
	return C << 3 << " ; " << V.producent << " ; " << V.model << " ; " << V.typ << " ; " << V.rozmiar << " ; " << V.cena<< endl;
}

istream &operator >> (istream &C, Pamiec &V)
{
	string srednik;
	C >> srednik >> V.producent >> srednik >> V.model >> srednik >> V.typ >> srednik >> V.rozmiar >> srednik >> V.cena;
	return C;
}