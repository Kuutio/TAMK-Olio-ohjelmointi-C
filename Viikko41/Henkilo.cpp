#include "Henkilo.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

//Constructors
Henkilo::Henkilo()
	:etunimi("Jussi"), sukunimi("Pussinen"), osoite("Kangastie 5"), puhelinnumero("0400000")
{
	cout << "Henkilo: Oletus rakentaja" << endl;
}

Henkilo::Henkilo(string etunimi_, string osoite_, string puhelinnumero_, string sukunimi_)
	: etunimi(etunimi_), sukunimi(sukunimi_), osoite(osoite_), puhelinnumero(puhelinnumero_)
{
	cout << "Henkilo: Parametri rakentaja" << endl;
}

Henkilo::Henkilo(const Henkilo& HenkiloKopio)
{
	etunimi = HenkiloKopio.etunimi;
	sukunimi = HenkiloKopio.sukunimi;
	puhelinnumero = HenkiloKopio.puhelinnumero;
	osoite = HenkiloKopio.osoite;
	cout << "Henkilo: kopio rakentaja" << endl;
}

Henkilo::~Henkilo()
{
	cout << "Tuhotaan oliota" << endl;
}
//GETTERS AND SETTERS
string Henkilo::annaEtunimi()
{
	return etunimi;
}

string Henkilo::annaOsoite()
{
	return osoite;
}

string Henkilo::annaPuhelinnumero()
{
	return puhelinnumero;
}

string Henkilo::annaSukunimi()
{
	return sukunimi;
}

void Henkilo::asetaEtunimi(string teksti)
{
	etunimi = teksti;
}

void Henkilo::asetaOsoite(string teksti)
{
	osoite = teksti;
}

void Henkilo::asetaPuhelinnumero(string teksti)
{
	puhelinnumero = teksti;
}

void Henkilo::asetaSukunimi(string teksti)
{
	sukunimi = teksti;
}
//FUNCTIONS
void Henkilo::kysyTiedot()
{
	cout << "Anna etunimi >>";
	cin >> etunimi;
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna etunimi! >>";
		cin >> etunimi;
	}

	cout << "Anna sukunimi >>";
	cin >> sukunimi;
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna sukunimi! >>";
		cin >> sukunimi;
	}

	cin.ignore(10000, '\n');
	cout << "Anna osoite >>";
	getline(cin, osoite);
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna osoite! >>";
		getline(cin, osoite);
	}

	cout << "Anna puhelinnumero! >>";
	getline(cin, puhelinnumero);
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna puhelinnumero! >>";
		getline(cin, puhelinnumero);
	}
}

void Henkilo::tulosta() const
{
	cout << "Nimi: " << etunimi << " " << sukunimi << endl << "Osoite: " << osoite << endl << "Puh: " << puhelinnumero << endl;
}
