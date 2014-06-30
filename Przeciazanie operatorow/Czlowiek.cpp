#include "Czlowiek.h"

Czlowiek::Czlowiek(const string _imie, const string _nazwisko, const string _telefon, const string _ulica, const string _miasto, const string _email):
imie(_imie),nazwisko(_nazwisko),telefon(_telefon),ulica(_ulica),miasto(_miasto),email(_email)
{}

string Czlowiek::getImie()
{
	return Czlowiek::imie;	
}

string Czlowiek::getNazwisko()
{
	return nazwisko;	
}

string Czlowiek::getTelefon()
{
	return telefon;	
}

string Czlowiek::getUlica()
{
	return ulica;	
}

string Czlowiek::getMiasto()
{
	return miasto;	
}

string Czlowiek::getEmail()
{
	return email;	
}

void Czlowiek::Wyswietl()
{
		cout << setw(5)  << imie << setw(15)  << nazwisko << setw(15)  << telefon << setw(15)  << ulica << setw(15)  
		<< miasto << setw(25)  << email << setw(15) <<  endl;
}
