#include "Bazowa.h"

Bazowa::Bazowa(string _producent, string _model, float _cena):
producent(_producent), model(_model), cena(_cena)
{}

string Bazowa::Getproducent()
{
	return producent;
}
 
string Bazowa::Getmodel()
{
	return model;
}	
 
float Bazowa::Getcena()
{
	return cena;
}