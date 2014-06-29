#include "Procesor.h"

Procesor::Procesor(const string _producent,const string _model,const float _taktowanie,const int _rdzenie,const float _cena):
Bazowa(_producent, _model,_cena), taktowanie(_taktowanie), rdzenie(_rdzenie)
{}

void Procesor::Wyswietl()
{
	cout << producent << "\t" << model << "\t" << taktowanie << "\t" << rdzenie << "\t" << cena << " zl" << endl;
}

ostream &operator << (ostream &C, Procesor &V)
{
	return C << 1 << " ; " << V.producent << " ; " << V.model << " ; " << V.taktowanie << " ; " << V.rdzenie << " ; " << V.cena<< endl;
}

istream &operator >> (istream &C, Procesor &V)
{
	string srednik;
	C >> srednik >> V.producent >> srednik >> V.model >> srednik >> V.taktowanie >> srednik >> V.rdzenie >> srednik >> V.cena;
	return C;
}