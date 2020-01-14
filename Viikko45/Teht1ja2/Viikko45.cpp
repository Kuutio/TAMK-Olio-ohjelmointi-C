// Viikko45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <exception>

std::vector <int> vektori;
int main()
{
	int luku1 = -112, luku2 = -5, luku3 = 45;
	try {
		vektori.push_back(luku1); vektori.push_back(luku2); vektori.push_back(luku3);
		//int element = vektori[10]; Does not throw exception.
		int element = vektori.at(124141);
	}catch(std::out_of_range){
		std::cout << "out of range! " << std::endl;
	}
	catch (std::exception) {
		std::cout << "EXCEPTION! joka periytyy exception luokasta" << std::endl;
	}
	catch (...) {
		std::cout << "EXCEPTION! joka periytyy exception luokasta muuut" << std::endl;
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
