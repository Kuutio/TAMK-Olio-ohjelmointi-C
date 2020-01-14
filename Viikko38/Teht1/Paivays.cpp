#include "Paivays.h"
#include <iostream>

using std::cout; using std::endl;

Paivays::Paivays()
	:paiva(1),kuukausi(1),vuosi(1980)
{
	cout << "Paivays: oletus rakentaja " << endl;
}
Paivays::Paivays(int p, int k, int v)
	:paiva(p),kuukausi(k),vuosi(v)
{
	cout << "Paivays: parametrillinen rakentaja " << endl;
}

void Paivays::asetaPaiva(int x) { paiva = x; }
void Paivays::asetaKuukausi(int x) { kuukausi = x; }
void Paivays::asetaVuosi(int x) { vuosi = x; }

int Paivays::annaPaiva() { return paiva; }
int Paivays::annaKuukausi() { return kuukausi; }
int Paivays::annaVuosi() { return vuosi; }

void Paivays::tulostaPaivays()
{
	cout << paiva << "." << kuukausi << "." << vuosi << endl;
	return;

}
//purkaja
Paivays::~Paivays() 
{
	cout << "TUHOTAAAN " << endl;
	//onko tuhottavaaa vai onko automaattisesti kaikki tuhottu? Huonosti dokumentuito
	// varmaan muut jutut tänne mutta kummiinkin yksi tuhotaan tulostus per olio.

}

