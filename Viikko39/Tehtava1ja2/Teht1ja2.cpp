#include "Paivays.h"
#include <iostream>
#include <stdlib.h>
#include <string>
//#include <ctime>

using std::cout; using std::endl; using std::string; using std::cin;


int main()
{
	//aseta oliot
	cout << "Asetetaan oletus, parametrillinen ja kopio olio" << endl;
	Paivays oletus, parametrillinen(23, 2, 1994);
	Paivays kopio = parametrillinen;

	//Tulosta päiväykset
	cout << "Päiväys oletus: ";
	oletus.tulostaPaivays();
	cout << "Päiväys parametrillinen: ";
	parametrillinen.tulostaPaivays();
	cout << "Päiväys kopio: ";
	kopio.tulostaPaivays();

	//pura oletus olio
	cout << "Puretaan oletus rakentajaa" << endl;
	oletus.~Paivays();
	cout << "Puretaan parametri rakentajaa" << endl;
	parametrillinen.~Paivays();
	cout << "Puretaan kopio rakentajaa" << endl;
	kopio.~Paivays();

	Paivays parametrillinen2(23, 2, 2020);


	int menuInput;
	while (1) {
		cin >> menuInput;

		switch (menuInput)
		{
		case 1: parametrillinen2.lisaaPaiva();
			parametrillinen2.tulostaPaivays();
			cout << endl;
		default:
			break;
		}

	}


	system("PAUSE");

	return 0;

}
