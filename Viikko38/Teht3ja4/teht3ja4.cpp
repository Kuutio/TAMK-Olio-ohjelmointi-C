// teht3ja4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdlib.h>
#include <iostream>
#include "Murtoluku.h"
#include<iostream>

using std::cout; using std::endl;

int main()
{
	int osoittaja,nimittaja,tekija;
	Murtoluku luku1;

	luku1.kysyTiedot();
	luku1.tulosta();

	nimittaja = luku1.annaNimittäjä();
	osoittaja = luku1.annaOsoittaja();
	
	tekija=luku1.findgcd(osoittaja, nimittaja);
	cout << "Suurin yhteinen tekija on: " << tekija << endl;

	system("PAUSE");
}
