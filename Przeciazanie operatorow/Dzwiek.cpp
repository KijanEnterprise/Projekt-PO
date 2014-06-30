#include "Dzwiek.h"

Dzwiek::Dzwiek(const string _producent,const string _model,const int _probkowanie,const int _czestotliwosc,const float rodzaj,const float _cena):
Bazowa(_producent, _model,_cena), probkowanie(_probkowanie), czestotliwosc(_czestotliwosc), rodzaj(rodzaj)
{}

void Dzwiek::Wyswietl()
{
	cout << producent << "\t" << model << "\t" << probkowanie << "\t" << czestotliwosc << "\t" << rodzaj << "\t" << cena << " zl" << endl;
}

ostream &operator << (ostream &C, Dzwiek &V)
{
	return C << 5 << " ; " << V.producent << " ; " << V.model << " ; " << V.probkowanie << " ; " << V.czestotliwosc << " ; " << V.rodzaj<< " ; " 
		<< V.cena << endl;
}

istream &operator >> (istream &C, Dzwiek &V)
{
	string srednik;
	C >> srednik >> V.producent >> srednik >> V.model >> srednik >> V.probkowanie >> srednik >> V.czestotliwosc >> srednik >> V.rodzaj 
		>> srednik >> V.cena;
	return C;
}