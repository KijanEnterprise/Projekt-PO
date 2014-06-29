#include "Pracownik.h"

Pracownik::Pracownik(string _imie, string _nazwisko, string _telefon, string _ulica, string _miasto, string _email, int _id):
imie(_imie), nazwisko(_nazwisko), telefon (_telefon), ulica(_ulica), miasto(_miasto), email(_email), id(_id)
{}

string Pracownik::Getimie()
{
	return imie;	
}

string Pracownik::Getnazwisko()
{
	return nazwisko;	
}

string Pracownik::Gettelefon()
{
	return telefon;	
}

string Pracownik::Getulica()
{
	return ulica;	
}

string Pracownik::Getmiasto()
{
	return miasto;	
}

string Pracownik::Getemail()
{
	return email;	
}

int Pracownik::Getid()
{
	return id;	
}

void Pracownik::Wyswietl()
{
	cout << setw(5) << Getid() << setw(15)  << Getimie() << setw(15)  << Getnazwisko() << setw(15)  << Gettelefon() << setw(15)  << Getulica() << setw(15)  << Getmiasto() << setw(25)  << Getemail() << endl;
}