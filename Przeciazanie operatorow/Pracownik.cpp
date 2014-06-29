#include "Pracownik.h"


Pracownik::Pracownik(string _imie, string _nazwisko, string _telefon, string _ulica, string _miasto, string _email, int _id, int _wynagrodzenie):
Czlowiek(_imie,_nazwisko,_telefon,_ulica,_miasto,_email,_id),wynagrodzenie(_wynagrodzenie)
{}

void Pracownik::Wyswietl()
{
	cout << setw(5) << Getid() << setw(15)  << Getimie() << setw(15)  << Getnazwisko() << setw(15)  << Gettelefon() << setw(15)  << Getulica() << setw(15)  << Getmiasto() << setw(25)  << Getemail() << endl;
}