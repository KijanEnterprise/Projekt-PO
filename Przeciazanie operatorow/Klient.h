#pragma once
#include "Czlowiek.h"


class Klient: public Czlowiek
{
public:
	Klient(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
	const int _id);
};