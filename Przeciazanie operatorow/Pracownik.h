#pragma once
#include "Czlowiek.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Pracownik: public Czlowiek
{
protected:
	int wynagrodzenie;
	int id;
public:
	Pracownik(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
	const int _id,const int _wynagrodzenie);
	void Wyswietl();
	int getId() { return id;}
	friend ostream &operator <<(ostream &C, Pracownik &V);
	friend istream &operator >>(istream &C, Pracownik &V);
};