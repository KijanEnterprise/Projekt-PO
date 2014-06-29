#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Pracownik
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
	Pracownik(string _imie, string _nazwisko, string _telefon, string _ulica, string _miasto, string _email, int _id);
	string Getimie();
	string Getnazwisko();
	string Gettelefon();
	string Getulica();
	string Getmiasto();
	string Getemail();
	int Getid();
	void Wyswietl();
};