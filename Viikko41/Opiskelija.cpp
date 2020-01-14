#include "Opiskelija.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;

Opiskelija::Opiskelija()
	:opiskelijanumero("123456")
{
	cout << "Opiskelija: oletus rakentaja" << endl;
}

Opiskelija::Opiskelija(string etunimi_, string osoite_, string puhelinnumero_, string sukinimi_, string opiskelijanumero_)
	: Henkilo(etunimi_, osoite_, puhelinnumero_, sukinimi_), opiskelijanumero(opiskelijanumero_)

{
	cout << "Opiskelija: parametri rakentaja" << endl;
}


Opiskelija::Opiskelija(const Opiskelija& opiskelija_) :Henkilo(opiskelija_)

{
	opiskelijanumero = opiskelija_.opiskelijanumero;
	cout << "Opiskelija: kopio rakentaja" << endl;
}

Opiskelija::~Opiskelija()
{
	cout << "Opiskelija: tuhotaan oliota" << endl;
}

string Opiskelija::annaOpiskelijanumero()
{
	return opiskelijanumero;
}

void Opiskelija::asetaOpiskelijanumero(string teksti)
{
	opiskelijanumero = teksti;
}

void Opiskelija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	cout << "Anna opiskelijanumero! >>";
	getline(cin, opiskelijanumero);
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna opiskelijanumero! >>";
		getline(cin, opiskelijanumero);
	}
}

void Opiskelija::tulosta() const
{
	Henkilo::tulosta();
	cout << "Opiskelijanumero: " << opiskelijanumero << endl;
}
