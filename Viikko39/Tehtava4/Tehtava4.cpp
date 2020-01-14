// Tehtava4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Kalenterimerkinta.h"

using std::cout; using std::cin; using std::endl;
int main()
{
	//aseta oliot
	cout << "Asetetaan oletus olio" << endl;
	Kalenterimerkinta oletus;
	cout << endl;

	cout << "Parametri oliot" << endl;
	Kello parametriKello(11, 12, 11);
	Paivays parametriPaiva(11, 12, 1900);
	cout << "Parametri Kalenteri" << endl;
	//Ei ole hyvä idea laittaa olioita suoraan koska kopioi 2 kertaa tulostuksessa
	Kalenterimerkinta parametriKalenteri(parametriPaiva, parametriKello, "Tunti alkaa", true);
	parametriKalenteri.tulostaAika();

	bool muistutustulostus = parametriKalenteri.annaMuistutus();
	string asiatulostus = parametriKalenteri.annaAsia();

	if (muistutustulostus == false) { cout << "false"; }
	else if (muistutustulostus == true) { cout << "true"; }
	else { cout << "error"; }
	cout << endl << asiatulostus << endl;
	cout << "Asetetaan kopio olio" << endl;
	Kalenterimerkinta kopiokalenteri(oletus);
	kopiokalenteri.kysyTiedot();
	asiatulostus = kopiokalenteri.annaAsia();
	cout << asiatulostus;



	//parametrillinen(23, 2, 1994);
	//Paivays kopio = parametrillinen;

	//Tulosta päiväykset
	//cout << "Päiväys oletus: ";
	//oletus.tulostaPaivays();
	//cout << "Päiväys parametrillinen: ";
	//parametrillinen.tulostaPaivays();
	//cout << "Päiväys kopio: ";
	//kopio.tulostaPaivays();

	//pura oletus olio
	//cout << "Puretaan oletus rakentajaa" << endl;
	//oletus.~Paivays();
	//cout << "Puretaan parametri rakentajaa" << endl;
	//parametrillinen.~Paivays();
	//cout << "Puretaan kopio rakentajaa" << endl;
	//kopio.~Paivays();

	//Paivays parametrillinen2(23, 2, 2020);
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
