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
	//Tulosta p�iv�ykset
	cout << "P�iv�ys oletus: ";
	oletus.tulostaPaivays();
	cout << "P�iv�ys parametrillinen: ";
	parametrillinen.tulostaPaivays();

	//pura oletus olio
	cout << "Puretaan oletus rakentajaa" << endl;
	oletus.~Paivays();
	cout << "Puretaan parametri rakentajaa"<<endl;
	parametrillinen.~Paivays();
	

	system("PAUSE");

	return 0;

}
  