#pragma once
#include "Czlowiek.h"


class Klient: public Czlowiek
{
public:
	Klient(string _imie, string _nazwisko, string _telefon, string _ulica, string _miasto, string _email, int _id);
};