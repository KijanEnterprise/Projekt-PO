#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Czlowiek
{
protected:
	string imie;
	string nazwisko;
	string telefon;
	string ulica;
	string miasto;
	string email;
public:
	Czlowiek(const string _imie, const string _nazwisko, const string _telefon, const string _ulica, const string _miasto, const string _email);
	virtual void Wyswietl();
	string getImie();
	string getNazwisko();
	string getTelefon();
	string getUlica();
	string getMiasto();
	string getEmail();
};