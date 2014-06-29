#include "Pracownik.h"


Pracownik::Pracownik(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
const int _id,const int _wynagrodzenie):
Czlowiek(_imie,_nazwisko,_telefon,_ulica,_miasto,_email,_id),wynagrodzenie(_wynagrodzenie)
{}

void Pracownik::Wyswietl()
{
	cout << setw(5) << Getid() << setw(15)  << Getimie() << setw(15)  << Getnazwisko() << setw(15)  << Gettelefon() << setw(15)  << Getulica() << setw(15)  << Getmiasto() << setw(25)  << Getemail() << endl;
}

ostream &operator << (ostream &C, Pracownik &V)
{
	return C << V.id << " ; " << V.imie << " ; " << V.nazwisko << " ; " << V.telefon << " ; " << V.email << " ; " << V.ulica << " ; " 
		<< V.miasto << " ; " << V.wynagrodzenie << endl;
}

istream &operator >> (istream &C, Pracownik &V)
{
	string srednik;
	C >> V.id >> srednik >> V.imie >> srednik >> V.nazwisko >> srednik >> V.telefon >> srednik >> V.email
		>> srednik >> V.ulica >> srednik >> V.miasto >> srednik >> V.wynagrodzenie;
	return C;
}