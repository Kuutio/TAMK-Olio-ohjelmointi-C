#include "Paivays.h"
#include <iostream>
#include <stdlib.h>
//#include <ctime>

using std::cout; using std::endl; 


int main()
{
	//aseta oliot
	cout << "Asetetaan oletus- ja parametrillinen olio" << endl;
	Paivays oletus, parametrillinen(23,2,1994);
	//Tulosta päiväykset
	cout << "Päiväys oletus: ";
	oletus.tulostaPaivays();
	cout << "Päiväys parametrillinen: ";
	parametrillinen.tulostaPaivays();

	//pura oletus olio
	cout << "Puretaan oletus rakentajaa" << endl;
	oletus.~Paivays();
	cout << "Puretaan parametri rakentajaa"<<endl;
	parametrillinen.~Paivays();
	

	system("PAUSE");

	return 0;

}
  