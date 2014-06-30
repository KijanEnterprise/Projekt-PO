#include "Przyjecie.h"

Przyjecie::Przyjecie(string _producent, string _model, int _typ, int _id_przyjecia, int _id_klienta, int _id_pracownika, float _cena):
Bazowa(_producent, _model,_cena), typ(_typ), id_przyjecia(_id_przyjecia), id_klienta(_id_klienta), id_pracownika(_id_pracownika)
{}
 
void Przyjecie::Wyswietl()
{
	cout << id_przyjecia<< "\t" << producent << "\t" << model << "\t" << typ << "\t" << id_klienta << "\t" << id_pracownika << "\t"<< cena << " zl" << endl;
}

ostream &operator << (ostream &C, Przyjecie &V)
{
	return C << V.producent << " ; " << V.model << " ; " << V.typ << " ; " << V.id_przyjecia << " ; " << V.id_klienta << " ; " 
		<< V.id_pracownika << " ; " << V.cena << endl;
}

istream &operator >> (istream &C, Przyjecie &V)
{
	string srednik;
	C >> V.producent >> srednik >> V.model >> srednik >> V.typ >> srednik >> V.id_przyjecia >> srednik >> V.id_klienta >> srednik 
		>> V.id_pracownika >> srednik >> V.cena; 
	return C;
}