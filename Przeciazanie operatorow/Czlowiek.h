#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Czlowiek
{
private:
	string imie;
	string nazwisko;
	string telefon;
	string ulica;
	string miasto;
	string email;
	int id;
public:
	Czlowiek(const string _imie, const string _nazwisko, const string _telefon, const string _ulica, const string _miasto, const string _email,
	const int _id);
	virtual void Wyswietl();
	string Getimie();
	string Getnazwisko();
	string Gettelefon();
	string Getulica();
	string Getmiasto();
	string Getemail();
	int Getid();
};