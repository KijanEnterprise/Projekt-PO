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
	Pracownik(string _imie, string _nazwisko, string _telefon, string _ulica, string _miasto, string _email, int _id, int _wynagrodzenie);
	void Wyswietl();
};