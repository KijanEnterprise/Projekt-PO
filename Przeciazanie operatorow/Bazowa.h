#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Bazowa
{
private:
	string producent;
	string model;
	float cena;
public:
	Bazowa(string _producent, string _model, float _cena);
	string Getproducent();
	string Getmodel();
	float Getcena();
};