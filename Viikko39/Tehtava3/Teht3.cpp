#include "Kello.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using std::cout; using std::endl; using std::cin;

int main()
{
	Kello aika2;
	aika2.tulostaAika();
	Kello aika(11, 15, 45);
	aika.tulostaAika();
	Kello kopioAika(aika);
	kopioAika.tulostaAika();


	//Loputon kello looppi. Ei huomioi latencya koska tehtävänannossa ei siitä puhuttu
	while (true) {
		Sleep(1000);
		int temp;
		temp = aika.gettime();
		aika.paivita(temp);
		aika.tulostaAika();
	}


	system("PAUSE");
	return 0;
}