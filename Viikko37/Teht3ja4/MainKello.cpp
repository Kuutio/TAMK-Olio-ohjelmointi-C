#include "Kello.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using std::cout; using std::endl; using std::cin;

int main()
{
	int t, m, s;
	Kello aika;

	aika.asetaAika(14, 49, 12);
	aika.tulostaAika();

	cout << endl << "Anna tunnit :";
	cin >> t;
	while (!cin || (t < 0 || t > 24)) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna tunnit: ";
		cin >> t;
	}
	cout << endl << "Anna minuutit :";
	cin >> m;
	while (!cin || (m < 0 || m > 59)) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna minuutit: ";
		cin >> m;
	}
	cout << endl << "Anna Sekunnit :";
	cin >> s;
	while (!cin || (s < 0 || s > 59)) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna sekunnit: ";
		cin >> s;
	}
	aika.asetaAika(t, m, s);
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