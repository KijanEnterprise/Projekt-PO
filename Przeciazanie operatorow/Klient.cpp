#include "Klient.h"

Klient::Klient(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
const int _id):
Czlowiek(_imie, _nazwisko, _telefon, _ulica, _miasto, _email, _id)
{}

ostream &operator << (ostream &C, Klient &V)
{
	return C << V.id << " ; " << V.imie << " ; " << V.nazwisko << " ; " << V.telefon << " ; " << V.email << " ; "<< V.ulica << " ; " 
		<< V.miasto << endl;
}

istream &operator >> (istream &C, Klient &V)
{
	string srednik;
	C >> V.id >> srednik >> V.imie >> srednik >> V.nazwisko >> srednik >> V.telefon >> srednik >> V.email >> srednik >> V.ulica >> srednik 
		>> V.miasto;
	return C;
}