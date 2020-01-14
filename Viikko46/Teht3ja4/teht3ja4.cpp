// teht3ja4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Opettaja.h"
#include <fstream>
#include <sstream>
#include <string>


std::vector <Opettaja*> opettajat;
int main()
{
	//std::getline(startfile, str)
	//getline(cin, opetusala);
	//string tiedot;

		string tiedot2, field;
		std::ifstream tiedosto1("Opettajat.csv");




		std::vector<std::string> v;
		std::stringstream ss(tiedot2);
		Opettaja Opettaja_;

		while (getline(tiedosto1, tiedot2, '\n'))
		{
			//std::cout << tiedot2 << std::endl;
			v.clear();
			std::stringstream ss(tiedot2);

			while (getline(ss, field, ';'))  // break line into comma delimitted fields
			{
				v.push_back(field);  // add each field to the 1D array
			}
			//std::cout << v.size();
			Opettaja_.asetaEtunimi(v[0]); 
			Opettaja_.asetaSukunimi(v[1]);
			Opettaja_.asetaOsoite(v[2]);
			Opettaja_.asetaPuhelinnumero(v[3]);
			Opettaja_.asetaTunnus(v[4]);
			Opettaja_.asetaPalkka(v[5]);
			Opettaja_.asetaOpetusala(v[6]);
			opettajat.push_back(new Opettaja(Opettaja_));
			

		}
		for (int i = 0; i < opettajat.size(); i++) {
			opettajat[i]->tulosta();
		}
		std::cout << std::endl;
		tiedosto1.close();
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
