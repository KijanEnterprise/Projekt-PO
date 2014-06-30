#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Bazowa
{
protected:
	string producent;
	string model;
	float cena;
public:
	Bazowa(const string _producent,const string _model,const float _cena);
	string getProducent()const{	return producent;}
	string getModel()const{	return model;} 
	float getCena()const{	return cena;}
	virtual void Wyswietl();
/*	void setProducent(const string _producent){		producent=_producent;}
	void setModel(const string _model){		model=_model;}
	void setCena(const int _cena){	cena=_cena;}*/
};