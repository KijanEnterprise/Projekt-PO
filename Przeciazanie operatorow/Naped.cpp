#include "Naped.h"

Naped::Naped(const string _producent,const string _model,const string _naped,const int _szybkosc,const float _cena):
Bazowa(_producent, _model,_cena), naped(_naped), szybkosc(_szybkosc)
{}

void Naped::Wyswietl()
{
	cout << Bazowa::getProducent() << "\t" << Bazowa::getModel() << "\t" << naped << "\t" << szybkosc << "\t" << Bazowa::getCena() << " zl" << endl;
}

ostream &operator << (ostream &C, Naped &V)
{
	return C << 7 << " ; " << V.producent << " ; " << V.model << " ; " << V.naped << " ; " << V.szybkosc << " ; " << V.cena<< endl;
}

istream &operator >> (istream &C, Naped &V)
{
	string srednik;
	C >> srednik >> V.producent >> srednik >> V.model >> srednik >> V.naped >> srednik >> V.szybkosc >> srednik >> V.cena;
	return C;
}