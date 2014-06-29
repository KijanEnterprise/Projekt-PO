#pragma once
#include "Czlowiek.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Pracownik: public Czlowiek
{
private:
	int wynagrodzenie;
public:
	Pracownik(const string _imie,const string _nazwisko,const string _telefon,const string _ulica,const string _miasto,const string _email,
	const int _id,const int _wynagrodzenie);
	void Wyswietl();
};