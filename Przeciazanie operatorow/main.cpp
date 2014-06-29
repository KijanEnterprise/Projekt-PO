#include "Pracownik.h"
#include "Bazowa.h"

#include "Klient.h"
#include "Procesor.h"
#include "Pamiec.h"
#include "Plyta.h"
#include "Grafika.h"
#include "Dzwiek.h"
#include "Siec.h"
#include "Naped.h"
#include "Zasilacz.h"

#include <vector>
#include <fstream>
#include <Windows.h>
#include <stdlib.h>


//  ######   ODCZYTYWANIE
void Odczytaj(vector<Procesor> &Procesory,vector<Plyta> &Plyty,vector<Pamiec> &Pamieci,vector<Grafika> &Graficzne,vector<Dzwiek> &Dzwiekowe,vector<Siec> &Sieciowe,vector<Naped> &Napedy,vector<Zasilacz> &Zasilacze)
{
	string dana0,dana1,dana2,dana3,dana4,dana5,dana6;
	int rodzaj;
	char separator = ';';
	char konieclini = '\n';
	fstream plik;
	plik.open("dane.csv");
	while (!plik.eof())
	{
		getline(plik,dana0,';');
		rodzaj=atoi(dana0.c_str());
		if(rodzaj==1)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,konieclini);
			Procesor procesor(dana1,dana2,(float)atof(dana3.c_str()),atoi(dana4.c_str()),atof(dana5.c_str()));
			Procesory.push_back(procesor);
		}
		if(rodzaj==2)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,konieclini);
			Plyta plyta(dana1,dana2,dana3,dana4,atof(dana5.c_str()));
			Plyty.push_back(plyta);
		}
		if(rodzaj==3)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,konieclini);
			Pamiec pamiec(dana1,dana2,dana3,atoi(dana4.c_str()),atof(dana5.c_str()));
			Pamieci.push_back(pamiec);
		}
		if(rodzaj==4)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,konieclini);
			Grafika grafika(dana1,dana2,atoi(dana3.c_str()),atoi(dana4.c_str()),atof(dana5.c_str()));
			Graficzne.push_back(grafika);
		}
		if(rodzaj==5)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,separator);
			getline(plik,dana6,konieclini);
			Dzwiek dzwiek(dana1,dana2,atoi(dana3.c_str()),atoi(dana4.c_str()),(float)atof(dana5.c_str()),atof(dana6.c_str()));
			Dzwiekowe.push_back(dzwiek);
		}
		if(rodzaj==6)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,konieclini);
			Siec siec(dana1,dana2,atoi(dana3.c_str()),dana4,atof(dana5.c_str()));
			Sieciowe.push_back(siec);
		}
		if(rodzaj==7)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,konieclini);
			Naped naped(dana1,dana2,dana3,atoi(dana4.c_str()),atof(dana5.c_str()));
			Napedy.push_back(naped);
		}
		if(rodzaj==8)
		{
			getline(plik,dana1,separator);
			getline(plik,dana2,separator);
			getline(plik,dana3,separator);
			getline(plik,dana4,separator);
			getline(plik,dana5,konieclini);
			Zasilacz zasilacz(dana1,dana2,atoi(dana3.c_str()),atof(dana5.c_str()));
			Zasilacze.push_back(zasilacz);
		}
 
	}	
	plik.close();
}
 
void Odczytaj(vector<Klient> &Klienci, vector<Pracownik> &Pracownicy)
{
	string dana0,dana1,dana2,dana3,dana4,dana5,dana6,dana7;
	int rodzaj;
	char separator = ';';
	char konieclini = '\n';
	fstream plik;
	plik.open("dane2.csv");
	while (!plik.eof())
	{
		getline(plik,dana0,separator);
		rodzaj=atoi(dana0.c_str());
		getline(plik,dana1,separator);
		getline(plik,dana2,separator);
		getline(plik,dana3,separator);
		getline(plik,dana4,separator);
		getline(plik,dana5,separator);
		getline(plik,dana6,separator);
		getline(plik,dana7,konieclini);
		if(rodzaj==1)
		{
			Klient Klient(dana1,dana2,dana3,dana4,dana5,dana6,atoi(dana7.c_str()));
			Klienci.push_back(Klient);
		}
		if(rodzaj==5)
		{
			Pracownik Pracownik(dana1,dana2,dana3,dana4,dana5,dana6,atoi(dana7.c_str()));
			Pracownicy.push_back(Pracownik);
		}
		
	}
	plik.close();
}
 

//  ######   ZAPISYWANIE
void Zapisz(vector<Procesor> Procesory,vector<Plyta> Plyty,vector<Pamiec> Pamieci,vector<Grafika> Graficzne,vector<Dzwiek> Dzwiekowe,vector<Siec> Sieciowe,vector<Naped> Napedy,vector<Zasilacz> Zasilacze)
{
	fstream plik;
	plik.open("zapis1.csv",std::ios::out);
	for(int i=0;i<Procesory.size();i++) plik << "1;" << Procesory[i].Getproducent() << ";" << Procesory[i].Getmodel() << ";" << Procesory[i].Gettaktowanie() << ";" << Procesory[i].Getrdzenie() << ";" << Procesory[i].Getcena() << endl;
	for(int i=0;i<Plyty.size();i++) plik << "2;" << Plyty[i].Getproducent() << ";" << Plyty[i].Getmodel() << ";" << Plyty[i].Getchipset() << ";" << Plyty[i].Getsocket() << ";" << Plyty[i].Getcena() << endl;
	for(int i=0;i<Pamieci.size();i++) plik << "3;" << Pamieci[i].Getproducent() << ";" << Pamieci[i].Getmodel() << ";" << Pamieci[i].Gettyp() << ";" << Pamieci[i].Getrozmiar() << ";" << Pamieci[i].Getcena() << endl;
	for(int i=0;i<Graficzne.size();i++) plik << "4;" << Graficzne[i].Getproducent() << ";" << Graficzne[i].Getmodel() << ";" << Graficzne[i].Getpamiec() << ";" << Graficzne[i].Getzegar() << ";" << Graficzne[i].Getcena() << endl;
	for(int i=0;i<Dzwiekowe.size();i++) plik << "5;" << Dzwiekowe[i].Getproducent() << ";" << Dzwiekowe[i].Getmodel() << ";" << Dzwiekowe[i].Getprobkowanie() << ";" << Dzwiekowe[i].Getczestotliwosc() << ";" << Dzwiekowe[i].Getrodzaj() << ";" << Dzwiekowe[i].Getcena() << endl;
	for(int i=0;i<Sieciowe.size();i++) plik << "6;" << Sieciowe[i].Getproducent() << ";" << Sieciowe[i].Getmodel() << ";" << Sieciowe[i].Getpredkosc() << ";" << Sieciowe[i].Gettyp() << ";" << Sieciowe[i].Getcena() << endl;
	for(int i=0;i<Napedy.size();i++) plik << "7;" << Napedy[i].Getproducent() << ";" << Napedy[i].Getmodel() << ";" << Napedy[i].Getszybkosc() << ";" << Napedy[i].Getcena() << ";" << endl;
	for(int i=0;i<Zasilacze.size();i++) plik << "8;" << Zasilacze[i].Getproducent() << ";" << Zasilacze[i].Getmodel() << ";" << Zasilacze[i].Getmoc() << ";" << Zasilacze[i].Getcena() << endl;
	cout << "Lista klientow i pracownikow zostala zapisana!" << endl;
	plik.close();
}
 
void Zapisz(vector<Klient> Klienci, vector<Pracownik> Pracownicy)
{
	fstream plik;
	plik.open("zapis2.csv",std::ios::out);
	for(int i=0;i<Pracownicy.size();i++) plik << "5;" << Pracownicy[i].Getimie() << ";" << Pracownicy[i].Getnazwisko() << ";" << Pracownicy[i].Gettelefon() << ";" << Pracownicy[i].Getulica() << ";" << Pracownicy[i].Getmiasto() << ";" << Pracownicy[i].Getemail() << ";" << Pracownicy[i].Getid() << endl;
	for(int i=0;i<Klienci.size();i++) plik << "1;" << Klienci[i].Getimie() << ";" << Klienci[i].Getnazwisko() << ";" << Klienci[i].Gettelefon() << ";" << Klienci[i].Getulica() << ";" << Klienci[i].Getmiasto() << ";" << Klienci[i].Getemail() << ";" << Klienci[i].Getid() << endl;
 
	cout << "Lista sprzetu zostala zapisana!" << endl;
	plik.close();
}
 

//  ######   WYSWIETLANIE
void Wyswietl(vector<Procesor> &Procesory,vector<Plyta> &Plyty,vector<Pamiec> &Pamieci,vector<Grafika> &Graficzne,vector<Dzwiek> &Dzwiekowe,vector<Siec> &Sieciowe,vector<Naped> &Napedy,vector<Zasilacz> &Zasilacze)
{
	cout << endl << "########### DANE SPRZETOWE ##########" << endl;
	cout << "### Lista procesorow ####" << endl;
	cout << "Producent\tModel\tTaktowanie\tIlosc rdzeni\tCena" << endl;
	for(int i=0;i<Procesory.size();i++) Procesory[i].Wyswietl();
	
	cout << endl << "### Lista plyt glownych ####" << endl;
	cout << "Producent\tModel\tChipset\tSocket\tCena" << endl;
	for(int i=0;i<Plyty.size();i++) Plyty[i].Wyswietl();
	
	cout << endl << "### Lista pamieci ram" << endl;
	cout << "Producent\tModel\tRozmiar\tTyp\tCena" << endl;
	for(int i=0;i<Pamieci.size();i++) Pamieci[i].Wyswietl();
 
	cout << endl << "### Lista kart graficznych ####" << endl;
	cout << "Producent\tModel\tPamiec\tZegar\tCena" << endl;
	for(int i=0;i<Graficzne.size();i++) Graficzne[i].Wyswietl();
 
	cout << endl << "### Lista kart dzwiekowych ####" << endl;
	cout << "Producent\tModel\tProbkowanie\tCzestotliowsc\tRodzaj\tCena" << endl;
	for(int i=0;i<Dzwiekowe.size();i++) Dzwiekowe[i].Wyswietl();
 
	cout << endl << "### Lista kart sieciowych ####" << endl;
	cout << "Producent\tModel\tPredkosc\tTyp\tCena" << endl;
	for(int i=0;i<Sieciowe.size();i++) Sieciowe[i].Wyswietl();
 
	cout << endl << "### Lista napedow ####" << endl;
	cout << "Producent\tModel\tRodzaj\tSzybkosc\tCena" << endl;
	for(int i=0;i<Napedy.size();i++) Napedy[i].Wyswietl();
 
	cout << endl << "### Lista zasilaczy ####" << endl;
	cout << "Producent\tModel\tMoc\tCena" << endl;
	for(int i=0;i<Zasilacze.size();i++) Zasilacze[i].Wyswietl();
}
 
void WyswietlPracownikow(vector<Pracownik> Pracownicy)
{
	cout << endl << "### Lista pracownikow ####" << endl;
	cout << setw(5)  << "ID" << setw(15) << "Imie" << setw(15) << "Nazwisko" << setw(15) << "Nr telefonu" << setw(15) << "Ulica" << setw(15) << "Miasto" << setw(25) << "Email" << endl; 
	for(int i=0;i<Pracownicy.size();i++) Pracownicy[i].Wyswietl();
}
 
void WyswietlKlientow(vector<Klient> Klienci)
{
	cout << endl << "### Lista klientow ####" << endl;
	cout << setw(5) << "ID" << setw(15) << "Imie" << setw(15) << "Nazwisko" << setw(15) << "Nr telefonu" << setw(15) << "Ulica" << setw(15) << "Miasto" << setw(25) << "Email" << endl; 
	for(int i=0;i<Klienci.size();i++) Klienci[i].Wyswietl();
}


//  ######  GENEROWANIE HTML
void HTML_pracownicy(vector<Pracownik> Pracownicy)
{
	fstream plik;
	plik.open("html\\pracownicy.html",std::ios::out);
	plik<<"<html><head><title>Tabela - Pracownicy</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Pracownicy:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>ID</td><td>Imie</td><td>Nazwisko</td><td>Nr telefonu</td><td>Ulica</td><td>Miasto</td><td>Email</td></tr>"<<endl;
	for(int i=0;i<Pracownicy.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Pracownicy[i].Getid() <<"</td><td>"<< Pracownicy[i].Getimie() <<"</td><td>"<< Pracownicy[i].Getnazwisko() <<"</td><td>"<< Pracownicy[i].Gettelefon() <<"</td><td>"<< Pracownicy[i].Getulica() <<"</td><td>"<< Pracownicy[i].Getmiasto() <<"</td><td>"<< Pracownicy[i].Getemail() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\pracownicy.html");
}

void HTML_klienci(vector<Klient> Klienci)
{
	fstream plik;
	plik.open("html\\klienci.html",std::ios::out);
	plik<<"<html><head><title>Tabela - Klienci</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Klienci:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>ID</td><td>Imie</td><td>Nazwisko</td><td>Nr telefonu</td><td>Ulica</td><td>Miasto</td><td>Email</td></tr>"<<endl;
	for(int i=0;i<Klienci.size();i++){
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Klienci[i].Getid() <<"</td><td>"<< Klienci[i].Getimie() <<"</td><td>"<< Klienci[i].Getnazwisko() <<"</td><td>"<< Klienci[i].Gettelefon() <<"</td><td>"<< Klienci[i].Getulica() <<"</td><td>"<< Klienci[i].Getmiasto() <<"</td><td>"<< Klienci[i].Getemail() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\klienci.html"); 
}

void HTML_procesory(vector<Procesor> Procesory)
{
	fstream plik;
	plik.open("html\\procesory.html",std::ios::out);
	plik<<"<html><head><title>Tabela - procesory</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Procesory:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Taktowanie</td><td>Rdzenie</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Procesory.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Procesory[i].Getproducent() <<"</td><td>"<< Procesory[i].Getmodel() <<"</td><td>"<< Procesory[i].Gettaktowanie() <<"</td><td>"<< Procesory[i].Getrdzenie() <<"</td><td>"<< Procesory[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\procesory.html");
}

void HTML_plyty(vector<Plyta> Plyty)
{
	fstream plik;
	plik.open("html\\plytyglowne.html",std::ios::out);
	plik<<"<html><head><title>Tabela - plyty glowne</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Plyty glowne:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Chipset</td><td>Socket</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Plyty.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Plyty[i].Getproducent() <<"</td><td>"<< Plyty[i].Getmodel() <<"</td><td>"<< Plyty[i].Getchipset() <<"</td><td>"<< Plyty[i].Getsocket() <<"</td><td>"<< Plyty[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\plytyglowne.html");
}

void HTML_pamieci(vector<Pamiec> Pamieci)
{
	fstream plik;
	plik.open("html\\pamieci.html",std::ios::out);
	plik<<"<html><head><title>Tabela - pamiêci</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Pamiêci:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Rozmiar</td><td>Typ</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Pamieci.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Pamieci[i].Getproducent() <<"</td><td>"<< Pamieci[i].Getmodel() <<"</td><td>"<< Pamieci[i].Getrozmiar() <<"</td><td>"<< Pamieci[i].Gettyp() <<"</td><td>"<< Pamieci[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\pamieci.html");
}

void HTML_graficzne(vector<Grafika> Graficzne)
{
	fstream plik;
	plik.open("html\\graficzne.html",std::ios::out);
	plik<<"<html><head><title>Tabela - karty graficzne</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Karty graficzne:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Zegar</td><td>Typ</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Graficzne.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Graficzne[i].Getproducent() <<"</td><td>"<< Graficzne[i].Getmodel() <<"</td><td>"<< Graficzne[i].Getpamiec() <<"</td><td>"<< Graficzne[i].Getzegar() <<"</td><td>"<< Graficzne[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\graficzne.html");
}

void HTML_dzwiekowe(vector<Dzwiek> Dzwiekowe)
{
	fstream plik;
	plik.open("html\\dzwiekowe.html",std::ios::out);
	plik<<"<html><head><title>Tabela - karty dzwiêkowe</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Karty dzwiêkowe:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Rodzaj</td><td>Probkowanie</td><td>Czestotliwosc</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Dzwiekowe.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Dzwiekowe[i].Getproducent() <<"</td><td>"<< Dzwiekowe[i].Getmodel() <<"</td><td>"<< Dzwiekowe[i].Getrodzaj() <<"</td><td>"<< Dzwiekowe[i].Getprobkowanie() <<"</td><td>"<< Dzwiekowe[i].Getczestotliwosc() <<"</td><td>"<< Dzwiekowe[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\dzwiekowe.html");
}

void HTML_sieciowe(vector<Siec> Sieciowe)
{
	fstream plik;
	plik.open("html\\sieciowe.html",std::ios::out);
	plik<<"<html><head><title>Tabela - karty sieciowe</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Karty sieciowe:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Typ</td><td>Predkosc</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Sieciowe.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Sieciowe[i].Getproducent() <<"</td><td>"<< Sieciowe[i].Getmodel() <<"</td><td>"<< Sieciowe[i].Gettyp() <<"</td><td>"<< Sieciowe[i].Getpredkosc() <<"</td><td>"<< Sieciowe[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\sieciowe.html");
}

void HTML_napedy(vector<Naped> Napedy)
{
	fstream plik;
	plik.open("html\\napedy.html",std::ios::out);
	plik<<"<html><head><title>Tabela - napêdy</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Napêdy:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Rodzaj</td><td>Predkosc</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Napedy.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Napedy[i].Getproducent() <<"</td><td>"<< Napedy[i].Getmodel() <<"</td><td>"<< Napedy[i].Getnaped() <<"</td><td>"<< Napedy[i].Getszybkosc() <<"</td><td>"<< Napedy[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\napedy.html");
}

void HTML_zasilacze(vector<Zasilacz> Zasilacze)
{
	fstream plik;
	plik.open("html\\zasilacze.html",std::ios::out);
	plik<<"<html><head><title>Tabela - zasilacze</title><link rel='stylesheet' type='text/css' href='style.css' /></head><body>"<<endl;
	plik<<"<h1>Zasilacze:</h1><table>"<<endl;
	plik<<"<tr><td>Lp.</td><td>Producent</td><td>Model</td><td>Moc</td><td>Cena</td></tr>"<<endl;
	for(int i=0;i<Zasilacze.size();i++){	
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Zasilacze[i].Getproducent() <<"</td><td>"<< Zasilacze[i].Getmodel() <<"</td><td>"<< Zasilacze[i].Getmoc() <<"</td><td>"<< Zasilacze[i].Getcena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\zasilacze.html");
}
 
// FUNKCJA MAIN (!)
int main()
{
/*	vector<Procesor> Procesory;
	vector<Plyta> Plyty;
	vector<Pamiec> Pamieci;
	vector<Grafika> Graficzne;
	vector<Dzwiek> Dzwiekowe;
	vector<Siec> Sieciowe;
	vector<Naped> Napedy;
	vector<Zasilacz> Zasilacze;
 
	vector<Pracownik> Pracownicy;
	vector<Klient> Klienci;
	
	Odczytaj(Procesory,Plyty,Pamieci,Graficzne,Dzwiekowe,Sieciowe,Napedy,Zasilacze);
	Odczytaj(Klienci,Pracownicy);
 
	Wyswietl(Procesory,Plyty,Pamieci,Graficzne,Dzwiekowe,Sieciowe,Napedy,Zasilacze);
	
	WyswietlKlientow(Klienci);
	WyswietlPracownikow(Pracownicy);
 
	Zapisz(Procesory,Plyty,Pamieci,Graficzne,Dzwiekowe,Sieciowe,Napedy,Zasilacze);
	Zapisz(Klienci,Pracownicy);
 
	//HTML_pracownicy(Pracownicy);
	//HTML_klienci(Klienci);
	//HTML_procesory(Procesory);
	//HTML_plyty(Plyty);
	//HTML_pamieci(Pamieci);
	//HTML_graficzne(Graficzne);
	//HTML_dzwiekowe(Dzwiekowe);
	//HTML_sieciowe(Sieciowe);
	//HTML_napedy(Napedy);
	//HTML_zasilacze(Zasilacze);
 
	cin.get();
	return 0;*/
}