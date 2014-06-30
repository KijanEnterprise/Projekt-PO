#pragma once
#include "Bazowa.h"

class Dzwiek: public Bazowa
{
private:
	int probkowanie;
	int czestotliwosc;
	float rodzaj; // np. 5.1 7.1 2.1 2.0 itd.
public:
	Dzwiek(const string _producent,const string _model,const int _probkowanie,const int _czestotliwosc,const float rodzaj,const float _cena);
	void Wyswietl();
	int getProbkowanie(){	return probkowanie;}
	int getCzestotliwosc(){	return czestotliwosc;}
	float getRodzaj(){		return rodzaj;}
	void setProbkowanie(const int _probkowanie){ probkowanie=_probkowanie;}
	void setCzestotliwosc(const int _czestotliwosc){ czestotliwosc=_czestotliwosc;}
	void setRodzaj(const float _rodzaj){ rodzaj=_rodzaj;}
	friend ostream &operator << (ostream &C, Dzwiek &V);
	friend istream &operator >> (istream &C, Dzwiek &V);
};