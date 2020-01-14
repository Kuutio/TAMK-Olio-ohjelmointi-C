// viikko40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Henkilo.h"
#include "Opiskelija.h"
#include "Tyontekija.h"
#include "Opettaja.h"

using std::cout; using std::endl;

int main()
{
	//HENKILÖ LUOKKA JUTUT
	Henkilo oletusHenkilo;
	Henkilo parametriHenkilo("Seppo","Seponkatu 5","04012345","Maikkari");
	Henkilo kopioHenkilo(parametriHenkilo);

	kopioHenkilo.tulosta();
	kopioHenkilo.kysyTiedot();
	kopioHenkilo.tulosta();
    
	cout << endl;

	//OPISKELIJA LUOKKA JUTUT
	Opiskelija oletusOpiskelija;
	Opiskelija parametriOpiskelija("Kalle", "Opiskelijankatu 35 a 53", "04012345", "Koululainen","999999");
	Opiskelija kopioOpiskelija(parametriOpiskelija);

	kopioOpiskelija.tulosta();
	kopioOpiskelija.kysyTiedot();
	kopioOpiskelija.tulosta();

	//TYONTEKIJA LUOKKA JUTUT
	Tyontekija oletusTyontekija;
	Tyontekija parametriTyontekija("Kaisa", "Vuoritie 1", "+35844502520", "Kemppainen", 1000, "A506694");
	Tyontekija kopioTyontekija(parametriTyontekija);

	kopioTyontekija.tulosta();
	kopioTyontekija.kysyTiedot();
	kopioTyontekija.tulosta();

	//OPETTAJA LUOKKA JUTUT
	Opettaja oletusOpettaja;
	Opettaja parametriOpettaja("Ope", "Opentie 44", "0204242", "Opettaja", 2000, "A33","netinkaytto");
	Opettaja kopioOpettaja(parametriOpettaja);

	kopioOpettaja.tulosta();
	kopioOpettaja.kysyTiedot();
	kopioOpettaja.tulosta();
	


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
