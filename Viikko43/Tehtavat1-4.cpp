// Tehtavat1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Henkilo.h"
#include "Tyontekija.h"

int main()
{
	Henkilo h1("mikke","mikenkatu2","0441111","laitila");
	Henkilo h2("trolo","lol","lol","lol");
	Henkilo h3;
	h2 = h1;
	h3 = h1;
	h3.tulosta();

	Tyontekija t1("Lalli", "Katu 2 a3", "04420", "Trolli", 3000, "e001");
	Tyontekija t2 = t1;
	t2.tulosta();
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
