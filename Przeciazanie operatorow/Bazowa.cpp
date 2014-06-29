#include "Bazowa.h"

Bazowa::Bazowa(const string _producent,const string _model,const float _cena):
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