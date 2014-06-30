#include "Przyjecie.h"

Przyjecie::Przyjecie():ilosc(0)
{
	pracownik=NULL;
	klient=NULL;
}

void Przyjecie::dodajPrzyjecie(vector<Klient> &Klienci, vector<Pracownik> &Pracownicy)
{
	string producent, model;
	int idpracownika;
	int idklienta;
	int typ;
	cout << "Podaj id klienta: ";
	cin >> idklienta;
	cout << "Podaj id pracownika: ";
	cin >> idpracownika;
	cout << "Podaj typ przedmiotu przyjmowanego: ";
	cin >> typ;
	cout << "Podaj producenta przedmiotu przyjmowanego: ";
	cin >> producent;
	cout << "Podaj model przedmiotu przyjmowanego: ";
	cin >> model;

	for (unsigned int i=0; i<1; i++)
	{
		if(idklienta==Klienci[i].getId())
			klient=&Klienci[i];
		if(idpracownika==Pracownicy[i].getId())
			pracownik=&Pracownicy[i];
	}

	switch (typ){
		case 1:
			{
				Procesor procesor(producent,model,0,0,0);
				Bazowa *a = &procesor;
				elementy.push_back(a);
			} break;
		case 2:
			{
				Plyta plyta(producent,model,"","",0);
				Bazowa *b = &plyta;
				elementy.push_back(b);
			} break;
		case 3:
			{
				Pamiec pamiec(producent,model,"",0,0);
				Bazowa *c = &pamiec;
				elementy.push_back(c);
			} break;
		case 4:
			{
				Grafika grafika(producent,model,0,0,0);
				Bazowa *d = &grafika;
				elementy.push_back(d);
			} break;
		case 5:
			{
				Dzwiek dzwiek(producent,model,0,0,0,0);
				Bazowa *e = &dzwiek;
				elementy.push_back(e);
			} break;
		case 6:
			{
				Siec siec(producent,model,0,"",0);
				Bazowa *f = &siec;
				elementy.push_back(f);
			} break;
		case 7:
			{
				Naped naped(producent,model,"",0,0);
				Bazowa *g = &naped;
				elementy.push_back(g);
			} break;
		case 8:
			{
				Zasilacz zasilacz(producent,model,0,0);
				Bazowa *h = &zasilacz;
				elementy.push_back(h);
			} break;
		}
}

void Przyjecie::wyswietl()
{

}