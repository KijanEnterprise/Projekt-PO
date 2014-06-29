#include "Czlowiek.h"

Czlowiek::Czlowiek(const string _imie, const string _nazwisko, const string _telefon, const string _ulica, const string _miasto, const string _email,
const int _id):imie(_imie),nazwisko(_nazwisko),telefon(_telefon),ulica(_ulica),miasto(_miasto),email(_email),id(_id)
{}

string Czlowiek::Getimie()
{
	return Czlowiek::imie;	
}

string Czlowiek::Getnazwisko()
{
	return nazwisko;	
}

string Czlowiek::Gettelefon()
{
	return telefon;	
}

string Czlowiek::Getulica()
{
	return ulica;	
}

string Czlowiek::Getmiasto()
{
	return miasto;	
}

string Czlowiek::Getemail()
{
	return email;	
}

int Czlowiek::Getid()
{
	return id;	
}

void Czlowiek::Wyswietl()
{

}