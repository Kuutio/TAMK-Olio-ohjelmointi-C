#include "Kello.h"
#include <iostream>
#include <iomanip> 

using std::cout; using std::endl; using std::setw; using std::setfill;

void Kello::asetaAika(int t, int m, int s)
{
	tunnit = t; minuutit = m; sekunnit = s;
}

void Kello::tulostaAika()
{
	cout << setw(2)<< setfill('0') << tunnit << ":" << setw(2) << setfill('0') << minuutit << ":" << setw(2) << setfill('0') << sekunnit << endl;
}
void Kello::paivita(int valinta) {
	if (tunnit == 24 && sekunnit == 59 && minuutit == 59) { sekunnit = 0; minuutit = 0; tunnit = 0; }
	else if (minuutit == 59 && sekunnit == 59) { sekunnit = 0; minuutit = 0; tunnit = tunnit + 1; }
	else if (sekunnit == 59) { sekunnit = 0; minuutit = minuutit + 1; }
	else { sekunnit = sekunnit + 1; }


} 
int Kello::gettime() {
	return sekunnit;
}