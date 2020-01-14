// Viikko46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Opettaja.h"
std::vector <Opettaja*> opettajat;


int main()
{
	Opettaja uusi1,uusi2;
	uusi1.kysyTiedot();
	uusi2.kysyTiedot();

	opettajat.push_back(new Opettaja(uusi1));
	opettajat.push_back(new Opettaja(uusi2));

	//uusi1.~Opettaja(); uusi2.~Opettaja();

	std::ofstream tiedostoOpettajat;
    tiedostoOpettajat.open("Opettajat.csv"); 
	
    //write to end
	//tiedostoOpettajat.open("Opettajat.csv", std::ios_base::app);

	for (int i = 0; i < opettajat.size(); i++) {
		tiedostoOpettajat  << opettajat[i]->annaEtunimi() << ";" << opettajat[i]->annaSukunimi() << ";" << opettajat[i]->annaOsoite() << ";"
			<< opettajat[i]->annaPuhelinnumero() << ";" << opettajat[i]->annaOpetusala() << ";" << opettajat[i]->annaPalkka() << ";" << opettajat[i]->annaTunnus() << "\n";
	}
	tiedostoOpettajat.close();
	std::cout << "Opettajat tallennettu!" << std::endl;


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
