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

class Przyjecie: public Bazowa
{
private:
	int typ;
	int id_klienta;
	int id_pracownika;
	int id_przyjecia;
public:
	Przyjecie(string _producent, string _model, int _typ, int _id_przyjecia, int _id_klienta, int _id_pracownika, float _cena);
	void Wyswietl();
	int geTtyp(){ return typ; }
	int getIdpracownika(){ return id_pracownika;}
	int getIdklienta(){ return id_klienta;}
	friend ostream &operator << (ostream &C, Przyjecie &V);
	friend istream &operator >> (istream &C, Przyjecie &V);
};