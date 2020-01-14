#include "Paivays.h"
#include <iostream>

using std::cout; using std::endl;

	void Paivays::asetaPaiva(int x) {paiva=x;}
	void Paivays::asetaKuukausi(int x) {kuukausi=x;}
	void Paivays::asetaVuosi(int x) {vuosi=x;}

	int Paivays::annaPaiva() { return paiva; }
	int Paivays::annaKuukausi() { return kuukausi; }
	int Paivays::annaVuosi() { return vuosi; }

	void Paivays::tulostaPaivays()
	{
		cout << paiva <<"."<<kuukausi<<"."<<vuosi<<endl;
	
	}

