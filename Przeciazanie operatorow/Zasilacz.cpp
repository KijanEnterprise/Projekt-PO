#include "Zasilacz.h"

Zasilacz::Zasilacz(const string _producent,const string _model,const int _moc,const float _cena):
Bazowa(_producent, _model,_cena), moc(_moc)
{}

void Zasilacz::Wyswietl()
{
	cout << Bazowa::getProducent() << "\t" << Bazowa::getModel() << "\t" << moc << "\t" << Bazowa::getCena() << " zl" << endl;
}

ostream &operator << (ostream &C, Zasilacz &V)
{
	return C << 8 << " ; " << V.producent << " ; " << V.model << " ; " << V.moc << " ; " << V.cena<< endl;
}

istream &operator >> (istream &C, Zasilacz &V)
{
	string srednik;
	C >> srednik >> V.producent >> srednik >> V.model >> srednik >> V.moc >> srednik >> V.cena;
	return C;
}