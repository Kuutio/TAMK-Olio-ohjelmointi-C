#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout; using std::endl; using std::cin;

int tarkistus();

int arvotut[7];
int arvatut[7];
int oikein;

int main()

{

	srand(time(NULL));


	for (int i=0; i < 7; i++) {
		arvotut[i] = (rand() % 39) + 1;
		cout << "Arvaa numero: ";
		cin >> arvatut[i];
		while (!cin || (arvatut[i] > 39 || arvatut[i]<1)) { //virheentarkistus
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invalid argument! Arvaa numero väliltä 1-39" << endl;
			cout << "Arvaa numero: ";
			cin >> arvatut[i];
		}
		//cout << arvotut[i];

	}
	oikein = tarkistus();

	for (int i = 0; i < 7; i++) {
		cout << "Numero "<<i+1<<": "<<arvotut[i]<<endl;
	}
	cout << "Sait " << oikein << " oikein!" << endl;

	system("PAUSE");
	return 0;
}

int tarkistus()
{
	int maara = 0;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (arvotut[i] == arvatut[j]) { maara = maara + 1; }
		}
	}
	return maara;
}