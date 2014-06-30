#pragma once
#include "Czlowiek.h"

class Klient: public Czlowiek
{
protected:
	int id;
public:
	Klient(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
	const int _id);
	int getId() { return id;}
	friend ostream &operator << (ostream &C, Klient &V);
	friend istream &operator >> (istream &C, Klient &V);
};

