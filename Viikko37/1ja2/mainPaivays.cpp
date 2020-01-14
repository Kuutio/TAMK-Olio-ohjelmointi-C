#include "Paivays.h"
#include <iostream>
#include <stdlib.h>
//#include <ctime>

using std::cout; //using std::endl; 


int main()
{
	Paivays tanaan, huomenna;

	tanaan.asetaPaiva(9);
	tanaan.asetaKuukausi(9);
	tanaan.asetaVuosi(2018);

	huomenna.asetaPaiva(10);
	huomenna.asetaKuukausi(9);
	huomenna.asetaVuosi(2018);

	cout << "Tanaan: ";
	tanaan.tulostaPaivays();
	cout << "Huomenna: ";
	huomenna.tulostaPaivays();

	system("PAUSE");

	return 0;
}
