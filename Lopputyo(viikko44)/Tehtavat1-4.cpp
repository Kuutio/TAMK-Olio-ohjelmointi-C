// Tehtavat1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Koulu.h"
using std::ifstream; using std::string; using std::cout; using std::cin; using std::endl;
int valinta=1;

int main()
{
	//////////////////////////////////
	Koulu tamk;
	////////////////////////////////

	ifstream startfile("Aloitus.txt");
	string str;
	string startfile_contents;
	while (std::getline(startfile, str))
	{
		startfile_contents += str;
		startfile_contents.push_back('\n');

	}
	while (valinta != 0) {
		cout << endl;
		cout << startfile_contents << endl << ">>";
		while (!(cin >> valinta) || (valinta > 16)) {
			cin.clear();
			cin.ignore(std::numeric_limits<int>::max(), '\n');
			cout << "Invalid input. Please, try again! >>";
		}
		switch (valinta)
		{
		case 1: tamk.lisaaKoulutusohjelma(); break;
		case 2: tamk.tulostaKoulutusOhjelmat(); break;
		case 3: tamk.tulostaKoulutusOhjelmienMaara(); break;
		case 4: tamk.lisaaKoulutusohjelmaanOpettaja(); break;
		case 5: tamk.tulostaKoulutusohjelmanOpettajat(); break;
		case 6: tamk.lisaaKoulutusohjelmaanOpiskelija(); break;
		case 7: tamk.tulostaKoulutusohjelmanOpiskelijat(); break;
		case 8: tamk.poistaKoulutusohjelma(); break;
		case 9: tamk.poistaOpettaja(); break;
		case 10: tamk.poistaOppilas(); break;
		case 11: tamk.paivitaKoulutusohjelmanNimi(); break;
		case 12: tamk.paivitaOpettajanTiedot();  break;
		case 13: tamk.paivitaOpiskelijanTiedot();  break;
		case 14: tamk.lueTiedot(); break;
		case 15: tamk.tallennaTiedot(); break;
		case 0: break;
		default:
			break;
		}
	}

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
