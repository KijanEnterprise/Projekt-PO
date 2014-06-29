#include "Pracownik.h"


Pracownik::Pracownik(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
const int _id,const int _wynagrodzenie):
Czlowiek(_imie,_nazwisko,_telefon,_ulica,_miasto,_email,_id),wynagrodzenie(_wynagrodzenie)
{}

void Pracownik::Wyswietl()
{
	cout << setw(5) << Getid() << setw(15)  << Getimie() << setw(15)  << Getnazwisko() << setw(15)  << Gettelefon() << setw(15)  << Getulica() << setw(15)  << Getmiasto() << setw(25)  << Getemail() << endl;
}