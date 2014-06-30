#include "Grafika.h"

Grafika::Grafika(const string _producent,const string _model,const int _pamiec,const int _zegar,const float _cena):
Bazowa(_producent, _model,_cena), pamiec(_pamiec), zegar(_zegar)
{}

void Grafika::Wyswietl()
{
	cout << producent << "\t" <<model << "\t" << pamiec << "\t" << zegar << "\t" << cena << " zl" << endl;
}

ostream &operator << (ostream &C, Grafika &V)
{
	return C << 4 << " ; " << V.producent << " ; " << V.model << " ; " << V.pamiec << " ; " << V.zegar << " ; " << V.cena<< endl;
}

istream &operator >> (istream &C, Grafika &V)
{
	string srednik;
	C >> srednik >> V.producent >> srednik >> V.model >> srednik >> V.pamiec >> srednik >> V.zegar >> srednik >> V.cena;
	return C;
}