#include "Opettaja.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Opettaja::Opettaja()
	:opetusala("Kalastus")
{
	cout << "Opettaja: Oletus rakentaja" << endl;
}

Opettaja::Opettaja(string etunimi_, string osoite_, string puhelinnumero_, string sukunimi_, int palkka_, string tunnus_, string opetusala_)
	:Tyontekija(etunimi_,osoite_,puhelinnumero_,sukunimi_,palkka_,tunnus_),opetusala(opetusala_)
{
	cout << "Opettaja: Parametri rakentaja" << endl;
}

Opettaja::Opettaja(const Opettaja& Opettaja_) : Tyontekija(Opettaja_), opetusala(Opettaja_.opetusala)
{
	cout << "Opettaja: Kopio rakentaja" << endl;
}

Opettaja::~Opettaja()
{
	cout << "Opettaja: Tuhotaan oliota" << endl;
}

string Opettaja::annaOpetusala()
{
	return opetusala;
}

void Opettaja::asetaOpetusala(string opetusala_)
{
	opetusala = opetusala_;
}

void Opettaja::kysyTiedot()
{
	Tyontekija::kysyTiedot();
	cout << "Anna opetusala! >>";
	getline(cin, opetusala);
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna opetusala! >>";
		getline(cin, opetusala);
	}
}

void Opettaja::tulosta() const
{
	Tyontekija::tulosta();
	cout << "Opetusala: " << opetusala << endl;
}
