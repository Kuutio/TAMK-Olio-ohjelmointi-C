#include "Tyontekija.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Tyontekija::Tyontekija()
	:tunnus("ABCDE")
{
	palkka = 400;
	cout << "Tyontekija: Oletus rakentaja" << endl;
}

Tyontekija::Tyontekija(string etunimi_, string osoite_, string puhelinnumero_, string sukunimi_, string palkka_, string tunnus_)
	: Henkilo(etunimi_, osoite_, puhelinnumero_, sukunimi_), palkka(palkka_), tunnus(tunnus_)
{
	cout << "Tyontekija: Parametri rakentaja" << endl;
}

Tyontekija::Tyontekija(const Tyontekija& tyontekija_) : Henkilo(tyontekija_), palkka(tyontekija_.palkka), tunnus(tyontekija_.tunnus)

{
	cout << "Tyontekija: Kopio rakentaja" << endl;
}

Tyontekija::~Tyontekija()
{
//	cout << "Tyontekija: tuhotaan oliota" << endl;
}

string Tyontekija::annaPalkka()
{
	return palkka;
}

string Tyontekija::annaTunnus()
{
	return tunnus;
}

void Tyontekija::asetaPalkka(string palkka_)
{
	palkka = palkka_;
}

void Tyontekija::asetaTunnus(string tunnus_)
{
	tunnus = tunnus_;
}

void Tyontekija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	cout << "Anna palkka! >>";
	getline(cin, palkka);
		while (!cin) { //virheentarkistus
			cin.clear();
			cin.ignore(std::numeric_limits<int>::max(), '\n');
			cout << "Invalid argument!" << endl;
			cout << "Anna palkka! >>";
			cin >> palkka;
		}
		cin.ignore(10000, '\n');
	cout << "Anna tunnus! >>";
	getline(cin, tunnus);
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(std::numeric_limits<int>::max(), '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna tunnus! >>";
		getline(cin, tunnus);
	}
}

void Tyontekija::tulosta() const
{
	Henkilo::tulosta();
	cout << "Palkka: " << palkka << endl << "Tunnus: " << tunnus << endl;
}

void Tyontekija::operator=(Tyontekija& toinenTyontekija)
{
	palkka = toinenTyontekija.annaPalkka();
	tunnus = toinenTyontekija.annaTunnus();

}
