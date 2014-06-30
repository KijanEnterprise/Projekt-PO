#pragma once
#include "Klient.h"
#include "Pracownik.h"
#include "Bazowa.h"
#include "Procesor.h"
#include "Plyta.h"
#include "Pamiec.h"
#include "Grafika.h"
#include "Dzwiek.h"
#include "Siec.h"
#include "Naped.h"
#include "Zasilacz.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Przyjecie
{
private:
	Klient * klient;
	Pracownik * pracownik;
	list <Bazowa*> elementy;
	int ilosc;
	list <Bazowa*> ::iterator it;
public:
	Przyjecie();
	void wyswietl();
	void dodajPrzyjecie(vector<Klient> &Klienci, vector<Pracownik> &Pracownicy);
};