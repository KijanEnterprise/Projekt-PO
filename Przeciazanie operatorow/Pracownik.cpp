#include "Pracownik.h"


Pracownik::Pracownik(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
const int _id,const int _wynagrodzenie):id(_id),
Czlowiek(_imie,_nazwisko,_telefon,_ulica,_miasto,_email),wynagrodzenie(_wynagrodzenie)
{}

void Pracownik::Wyswietl()
{
	cout << setw(5)  << imie << setw(15)  << nazwisko << setw(15)  << telefon << setw(15)  << ulica << setw(15)  
		<< miasto << setw(25)  << email << setw(15) << wynagrodzenie <<  endl;
}

ostream &operator << (ostream &C, Pracownik &V)
{
	return C << "2 " << " ; " << V.id << " ; " << V.imie << " ; " << V.nazwisko << " ; " << V.telefon << " ; " << V.email << " ; " << V.ulica << " ; " 
		<< V.miasto << " ; " << V.wynagrodzenie << endl;
}

istream &operator >> (istream &C, Pracownik &V)
{
	string srednik;
	C >> srednik >> V.id >> srednik >> V.imie >> srednik >> V.nazwisko >> srednik >> V.telefon >> srednik >> V.email
		>> srednik >> V.ulica >> srednik >> V.miasto >> srednik >> V.wynagrodzenie;
	return C;
}