#include "Plyta.h"

Plyta::Plyta(const string _producent,const string _model,const string _chipset,const string _socket,const float _cena):
Bazowa(_producent, _model,_cena), chipset(_chipset), socket(_socket)
{}

void Plyta::Wyswietl()
{
	cout << Bazowa::getProducent() << "\t" << Bazowa::getModel() << "\t" << chipset << "\t" << socket << "\t" << Bazowa::getCena() << " zl" << endl;
}

ostream &operator << (ostream &C, Plyta &V)
{
	return C << V.producent << " ; " << V.model << " ; " << V.chipset << " ; " << V.socket << " ; " << V.cena<< endl;
}

istream &operator >> (istream &C, Plyta &V)
{
	string srednik;
	C >> V.producent >> srednik >> V.model >> srednik >> V.chipset >> srednik >> V.socket >> srednik >> V.cena;
	return C;
}