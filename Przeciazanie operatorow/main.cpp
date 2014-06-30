#include "Pracownik.h"
#include "Bazowa.h"
#include "Przyjecie.h"
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
#include <conio.h>


//  ######   ODCZYTYWANIE
void Odczytaj(vector<Procesor> &Procesory,vector<Plyta> &Plyty,vector<Pamiec> &Pamieci,vector<Grafika> &Graficzne,vector<Dzwiek> &Dzwiekowe,vector<Siec> &Sieciowe,vector<Naped> &Napedy,vector<Zasilacz> &Zasilacze)
{
	int rodzaj;
	ifstream plik("Podzespoly.csv");
	
	while (plik >> rodzaj)
	{
		
		switch (rodzaj){
		case 1:
			{
				Procesor procesor("","",0,0,0);
				plik >> procesor;
				Procesory.push_back(procesor);
			} break;
		case 2:
			{
				Plyta plyta("","","","",0);
				plik >> plyta;
				Plyty.push_back(plyta);
			} break;
		case 3:
			{
				Pamiec pamiec("","","",0,0);
				plik >> pamiec;
				Pamieci.push_back(pamiec);
			} break;
		case 4:
			{
				Grafika grafika("","",0,0,0);
				plik >> grafika;
				Graficzne.push_back(grafika);
			} break;
		case 5:
			{
				Dzwiek dzwiek("","",0,0,0,0);
				plik >> dzwiek;
				Dzwiekowe.push_back(dzwiek);
			} break;
		case 6:
			{
				Siec siec("","",0,"",0);
				plik >> siec;
				Sieciowe.push_back(siec);
			} break;
		case 7:
			{
				Naped naped("","","",0,0);
				plik >> naped;
				Napedy.push_back(naped);
			} break;
		case 8:
			{
				Zasilacz zasilacz("","",0,0);
				plik >> zasilacz;
				Zasilacze.push_back(zasilacz);
			} break;
		}

	}	
	plik.close();
}

void Odczytaj(vector<Klient> &Klienci, vector<Pracownik> &Pracownicy)
{
	int rodzaj;
	ifstream plik ("Dane osobowe.csv");
	while (plik>>rodzaj)
	{
		switch (rodzaj)
		{
		case 1:
			{
				Klient klient("","","","","","",5);
				plik >> klient;
				Klienci.push_back(klient);
			} break;
		case 2:			
			{

				Pracownik pracownik("","","","","","",0,1200);
				plik >> pracownik;
				Pracownicy.push_back(pracownik);
			} break;
		}

	}
	plik.close();
}


//  ######   ZAPISYWANIE
void Zapisz(vector<Procesor> Procesory,vector<Plyta> Plyty,vector<Pamiec> Pamieci,vector<Grafika> Graficzne,vector<Dzwiek> Dzwiekowe,vector<Siec> Sieciowe,vector<Naped> Napedy,vector<Zasilacz> Zasilacze)
{
	ofstream plik("Podzespoly.csv");

	for(int i=0;i<Procesory.size();i++) plik << Procesory[i];
	for(int i=0;i<Plyty.size();i++) plik << Plyty[i];
	for(int i=0;i<Pamieci.size();i++) plik << Pamieci[i];
	for(int i=0;i<Graficzne.size();i++) plik << Graficzne[i];
	for(int i=0;i<Dzwiekowe.size();i++) plik << Dzwiekowe[i];
	for(int i=0;i<Sieciowe.size();i++) plik << Sieciowe[i];
	for(int i=0;i<Napedy.size();i++) plik << Napedy[i];
	for(int i=0;i<Zasilacze.size();i++) plik << Zasilacze[i];
	plik.close();
}

void Zapisz(vector<Klient> Klienci, vector<Pracownik> Pracownicy)
{
	ofstream plik("Dane osobowe.csv");

	for(int i=0;i<Pracownicy.size();i++) plik << Pracownicy[i];
	for(int i=0;i<Klienci.size();i++) plik << Klienci[i];
	plik.close();
}


//  ######   WYSWIETLANIE ----- DO ZMODYFIKOWANIE (?)
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
	cout << setw(5) << "Imie" << setw(15) << "Nazwisko" << setw(15) << "Nr telefonu" << setw(15) << "Ulica" << setw(15) << "Miasto" << setw(25) << "Email" << setw(15) << "wynagrodzenie"  << endl; 
	for(int i=0;i<Pracownicy.size();i++) Pracownicy[i].Wyswietl();
}

void WyswietlKlientow(vector<Klient> Klienci)
{
	cout << endl << "### Lista klientow ####" << endl;
	cout << setw(5) << "Imie" << setw(15) << "Nazwisko" << setw(15) << "Nr telefonu" << setw(15) << "Ulica" << setw(15) << "Miasto" << setw(25) << "Email" << endl; 
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< 2 <<"</td><td>"<< Pracownicy[i].getImie() <<"</td><td>"<< Pracownicy[i].getNazwisko() <<"</td><td>"<< Pracownicy[i].getTelefon() <<"</td><td>"<< Pracownicy[i].getUlica() <<"</td><td>"<< Pracownicy[i].getMiasto() <<"</td><td>"<< Pracownicy[i].getEmail() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< 1 <<"</td><td>"<< Klienci[i].getImie() <<"</td><td>"<< Klienci[i].getNazwisko() <<"</td><td>"<< Klienci[i].getTelefon() <<"</td><td>"<< Klienci[i].getUlica() <<"</td><td>"<< Klienci[i].getMiasto() <<"</td><td>"<< Klienci[i].getEmail() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Procesory[i].getProducent() <<"</td><td>"<< Procesory[i].getModel() <<"</td><td>"<< Procesory[i].getTaktowanie() <<"</td><td>"<< Procesory[i].getRdzenie() <<"</td><td>"<< Procesory[i].getCena() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Plyty[i].getProducent() <<"</td><td>"<< Plyty[i].getModel() <<"</td><td>"<< Plyty[i].getChipset() <<"</td><td>"<< Plyty[i].getSocket() <<"</td><td>"<< Plyty[i].getCena() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Pamieci[i].getProducent() <<"</td><td>"<< Pamieci[i].getModel() <<"</td><td>"<< Pamieci[i].getRozmiar() <<"</td><td>"<< Pamieci[i].getTyp() <<"</td><td>"<< Pamieci[i].getCena() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Graficzne[i].getProducent() <<"</td><td>"<< Graficzne[i].getModel() <<"</td><td>"<< Graficzne[i].getPamiec() <<"</td><td>"<< Graficzne[i].getZegar() <<"</td><td>"<< Graficzne[i].getCena() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Dzwiekowe[i].getProducent() <<"</td><td>"<< Dzwiekowe[i].getModel() <<"</td><td>"<< Dzwiekowe[i].getRodzaj() <<"</td><td>"<< Dzwiekowe[i].getProbkowanie() <<"</td><td>"<< Dzwiekowe[i].getCzestotliwosc() <<"</td><td>"<< Dzwiekowe[i].getCena() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Sieciowe[i].getProducent() <<"</td><td>"<< Sieciowe[i].getModel() <<"</td><td>"<< Sieciowe[i].getTyp() <<"</td><td>"<< Sieciowe[i].getPredkosc() <<"</td><td>"<< Sieciowe[i].getCena() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Napedy[i].getProducent() <<"</td><td>"<< Napedy[i].getModel() <<"</td><td>"<< Napedy[i].getNaped() <<"</td><td>"<< Napedy[i].getSzybkosc() <<"</td><td>"<< Napedy[i].getCena() <<"</td></tr>"<<endl;
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
		plik<<"<tr><td>"<< i+1 <<"</td><td>"<< Zasilacze[i].getProducent() <<"</td><td>"<< Zasilacze[i].getModel() <<"</td><td>"<< Zasilacze[i].getMoc() <<"</td><td>"<< Zasilacze[i].getCena() <<"</td></tr>"<<endl;
	}
	plik<<"</table></body></html>"<<endl;
	plik.close();
	system("html\\zasilacze.html");
}

void NowePrzyjecie()
{
	int id_klienta, id_pracownika, id_przyjecia=1;
	string producent, model;
	int typ;
	float cena;
	// cout << "Podaj numer zamowienia: ";
	// cin >> id_przyjecia;
	cout << "Podaj id klienta skladajacego zamowienie: ";
	cin >> id_klienta;
	cout << "Podaj id pracownika skladajacego zamowienie: ";
	cin >> id_pracownika;
	cin.ignore();
	cout << "Podaj typ przedmiotu przyjmowanego: ";
	cin >> typ; 
	cout << "Podaj producenta przedmiotu przyjmowanego: ";
	cin >> producent;
	cout << "Podaj model przedmiotu przyjmowanego: ";
	cin >> model;
	cout << "Podaj cene przedmiotu przyjmowanego: ";
	cin >> cena;

	Przyjecie przyjecie(producent,model,typ,id_przyjecia,id_klienta,id_pracownika,cena);
 
	fstream plik;
	plik.open("zapis4.csv",std::ios::out | std::ios::app);
 
	plik << id_przyjecia << ";" << przyjecie << ";" << model << ";" << typ << ";" << id_klienta << ";" << id_pracownika << ";" << cena << endl;
 
	cout << "Zgloszenie przyjete i zapisane!" << endl;
	plik.close();
}
 
void WyswietlPrzyjecia(vector<Przyjecie> &Przyjecia)
{
	cout << endl << "#####################" << endl;
	cout << "### Lista przyjec ####" << endl;
	cout << "Id przyjecia\tProducent\tModel\tTyp\tId klienta\tId pracownika\tCena" << endl;
	for(int i=0;i<Przyjecia.size();i++) Przyjecia[i].Wyswietl();
}
 
int WybierzPrzyjecie(vector<Przyjecie> &Przyjecia)
{
	WyswietlPrzyjecia(Przyjecia);
	cout << "Podaj numer przyjecia";
	int id_przyjecia;
	cin >> id_przyjecia;
	return id_przyjecia;
}
 
void OdczytajPrzyjecia(vector<Przyjecie> &Przyjecia)
{
	string dana1,dana2;
	int rodzaj,dana3,dana4,dana5,dana6;
	float dana7;

	ifstream plik("Przyjecia.csv");
	while (plik>>rodzaj)
	{
		Przyjecie przyjecie("","",0,0,0,0,0);
		plik >> przyjecie;
		Przyjecia.push_back(przyjecie);		
	}
	plik.close();
}

// FUNKCJA MAIN (!)
int main()
{
	vector<Przyjecie> Przyjecia;
	vector<Procesor> Procesory;
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



	for(;;)
        {
                system("cls");
                cout << "### MENU v0.00001 ###" << endl;
                cout << "1. Pracownicy" << endl;
                cout << "2. Klienci" << endl;
                cout << "3. Sprzet" << endl;
                cout << "4. Zlecenie" << endl;
                cout << "5. Wydanie" << endl;
                cout << "6. Pomoc" << endl;
                cout << "0. Wyjscie" << endl;          
                switch(_getch())
                {
                        case '1':  //PRACOWNICY
                                system("cls");
                                cout << "### Pracownicy ###" << endl;
                                cout << "1. Wyswietl" << endl;
                                cout << "2. Zapisz" << endl;
                                cout << "3. Generuj HTML" << endl;
                                cout << "0 - Powrot" << endl;
                                switch(_getch())
                                {
                                        case '1':
                                        WyswietlPracownikow(Pracownicy);
                                        _getch();
                                        break;
                                        case '2':
                                        Zapisz(Klienci,Pracownicy);
                                        break;
                                        case '3':
                                    //HTML_klienci(Klienci);   
                                        break;
                                        default:
                                        cout << "Wybrales nieprawidlawa opcje" << endl;
                                        Sleep(300);
                                        break;
                                }      
                        break;
                        case '2':  //KLIENCI
                                system("cls");
                                cout << "### Klienci ###" << endl;
                                cout << "1. Wyswietl" << endl;
                                cout << "2. Zapisz" << endl;
                                cout << "3. Generuj HTML" << endl;
                                cout << "0 - Powrot" << endl;
                                switch(_getch())
                                {
                                        case '1':
                                        WyswietlKlientow(Klienci);     
                                        _getch();
                                        break;
                                        case '2':
                                        Zapisz(Klienci,Pracownicy);
                                        break;
                                        case '3':
                                    //HTML_klienci(Klienci);   
                                        break;
                                        default:
                                        cout << "Wybrales nieprawidlawa opcje" << endl;
                                        Sleep(300);
                                        break;
                                }                                      
                        break;
                        case '3': //SPRZET
                                system("cls");
                                cout << "### Sprzet ###" << endl;
                                cout << "1. Wyswietl" << endl;
                                cout << "2. Zapisz" << endl;
                                cout << "3. Generuj HTML" << endl;
                                cout << "0 - Powrot" << endl;
                                switch(_getch())
                                {
                                        case '1':
                                        Wyswietl(Procesory,Plyty,Pamieci,Graficzne,Dzwiekowe,Sieciowe,Napedy,Zasilacze);
                                        _getch();
                                        break;
                                        case '2':
                                        Zapisz(Procesory,Plyty,Pamieci,Graficzne,Dzwiekowe,Sieciowe,Napedy,Zasilacze);
                                        break;
                                        case '3':
                                    //HTML_procesory(Procesory);
                                    //HTML_plyty(Plyty);
                                    //HTML_pamieci(Pamieci);
                                    //HTML_graficzne(Graficzne);
                                    //HTML_dzwiekowe(Dzwiekowe);
                                    //HTML_sieciowe(Sieciowe);
                                    //HTML_napedy(Napedy);
                                    //HTML_zasilacze(Zasilacze);
                                        break;
                                        default:
                                        cout << "Wybrales nieprawidlawa opcje" << endl;
                                        Sleep(300);
                                        break;
                                }      
                        break;
                        case '4':  //ZLECENIE
                                system("cls");
                                cout << "### Zlecenie ###" << endl;
                                cout << "1. Wyswietl" << endl;
                                cout << "2. Zapisz" << endl;
                                cout << "3. Generuj HTML" << endl;
                                cout << "0 - Powrot" << endl;
                                switch(_getch())
                                {
                                        case '1':
                                        //WyswietlPracownikow(Pracownicy);     
                                        _getch();
                                        break;
                                        case '2':
                                        //Zapisz(Klienci,Pracownicy);
                                        break;
                                        case '3':
                                    //HTML_klienci(Klienci);   
                                        break;
                                        default:
                                        cout << "Wybrales nieprawidlawa opcje" << endl;
                                        Sleep(300);
                                        break;
                                }      
                        break;
                        case '5':   //WYDANIE
                                system("cls");
                                cout << "### Wydanie ###" << endl;
                                cout << "1. Wyswietl" << endl;
                                cout << "2. Zapisz" << endl;
                                cout << "3. Generuj HTML" << endl;
                                cout << "0 - Powrot" << endl;
                                switch(_getch())
                                {
                                        case '1':
                                        WyswietlPracownikow(Pracownicy);       
                                        break;
                                        case '2':
                                        Zapisz(Klienci,Pracownicy);
                                        break;
                                        case '3':
                                    //HTML_klienci(Klienci);   
                                        break;
                                        default:
                                        cout << "Wybrales nieprawidlawa opcje" << endl;
                                        Sleep(300);
                                        break;
                                }      
                        break;
                        case '6':  //POMOC
                                system("cls");
                                cout << "### Pomoc ###" << endl;
                                cout << "1. Autorzy" << endl;
                                cout << "2. Zapisz" << endl;
                                cout << "3. Generuj HTML" << endl;
                                cout << "0 - Powrot" << endl;
                                switch(_getch())
                                {
                                        case '1': //AUTORZY
                                                system("cls");
                                                cout << "Autorzy:" << endl;            
                                                cout << "Aleksander Chytkiewicz" << endl;
                                                cout << "Lukasz Kijanka" << endl;
                                                cout << "Dariusz Kwartnik" << endl;
                                                cout << "Lukasz Zaroda" << endl;
                                                _getch();
                                        break;
                                        case '2':
                                       
                                        break;
                                        case '3':
                                       
                                        break;
                                        default:
                                        cout << "Wybrales nieprawidlawa opcje" << endl;
                                        Sleep(300);
                                        break;
                                }      
                        break;
                        case '0':  // EXIT
                                system("cls");
                                cout << "Dziekujemy za skorzystanie z naszego programu ;)" << endl;
                                Sleep(500);
                                cout << ".";
                                Sleep(700);
                                cout << ".";
                                Sleep(700);
                                cout << ".";
                                Sleep(700);
                                exit(0);
                        break;
                        default:
                                cout << "Wybrales nieprawidlawa opcje" << endl;
                                Sleep(300);
                        break;
                }
        }
	
/*	Wyswietl(Procesory,Plyty,Pamieci,Graficzne,Dzwiekowe,Sieciowe,Napedy,Zasilacze);

	WyswietlKlientow(Klienci);
	WyswietlPracownikow(Pracownicy);

	Zapisz(Procesory,Plyty,Pamieci,Graficzne,Dzwiekowe,Sieciowe,Napedy,Zasilacze);
	Zapisz(Klienci,Pracownicy);

	HTML_pracownicy(Pracownicy);
	HTML_klienci(Klienci);
	HTML_procesory(Procesory);
	HTML_plyty(Plyty);
	HTML_pamieci(Pamieci);
	HTML_graficzne(Graficzne);
	HTML_dzwiekowe(Dzwiekowe);
	HTML_sieciowe(Sieciowe);
	HTML_napedy(Napedy);
	HTML_zasilacze(Zasilacze);
*/
	cin.get();
	return 0;
}