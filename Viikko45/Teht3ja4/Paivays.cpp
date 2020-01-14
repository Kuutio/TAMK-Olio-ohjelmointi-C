#include "Paivays.h"
#include <iostream>

using std::cout; using std::endl;


//Rakentajat: oletus,parametrillinen,kopio.
Paivays::Paivays()
	:paiva(1), kuukausi(1), vuosi(1980)
{

	cout << "Paivays: oletus rakentaja " << endl;
}
Paivays::Paivays(int p, int k, int v)
	: paiva(p), kuukausi(k), vuosi(v)
{
	cout << "Paivays: parametrillinen rakentaja " << endl;
	try {
		if (kuukausi > 12 || kuukausi < 1) { throw std::runtime_error("date out of bounds!"); }
		else if (paiva > 31 || paiva < 1) {
			throw std::runtime_error("date out of bounds!");
		}
		else if (vuosi > 9999 || vuosi < 1) { throw std::runtime_error("date out of bounds!"); }

		bool karkaus = karkausVuosi();
		if (kuukausi == 2 && paiva > 28)
		{
			if (karkaus == true && paiva == 29) {
				return;
			}
			else { throw(1); }
		}
		else if (kuukausi == 3 && paiva > 30) { throw std::runtime_error("date out of bounds!"); }
		else if (kuukausi == 6 && paiva > 30) { throw std::runtime_error("date out of bounds!"); }
		else if (kuukausi == 9 && paiva > 30) { throw std::runtime_error("date out of bounds!"); }
		else if (kuukausi == 11 && paiva > 30) { throw std::runtime_error("date out of bounds!"); }


	}
	catch (std::runtime_error& e) {
		cout << e.what() << endl;
	}
}
Paivays::Paivays(const Paivays& paivaysKopio) {
	cout << "Paivays: kopio rakentaja " << endl;
	paiva = paivaysKopio.paiva;
	kuukausi = paivaysKopio.kuukausi;
	vuosi = paivaysKopio.vuosi;
}

//Getter and setters

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

void Paivays::lisaaPaiva() {
	bool karkaus = karkausVuosi();
	paiva = paiva + 1;
	if (kuukausi == 1 && paiva > 31) { kuukausi = 2; paiva = 1; }
	else if (kuukausi == 2 && paiva > 28)
	{
		if (karkaus == true && paiva == 29) {
			return;
		}
		else { kuukausi = 3; paiva = 1; }
	}
	else if (kuukausi == 3 && paiva > 30) { kuukausi = 4; paiva = 1; }
	else if (kuukausi == 4 && paiva > 31) { kuukausi = 5; paiva = 1; }
	else if (kuukausi == 5 && paiva > 31) { kuukausi = 6; paiva = 1; }
	else if (kuukausi == 6 && paiva > 30) { kuukausi = 7; paiva = 1; }
	else if (kuukausi == 7 && paiva > 31) { kuukausi = 8; paiva = 1; }
	else if (kuukausi == 8 && paiva > 31) { kuukausi = 9; paiva = 1; }
	else if (kuukausi == 9 && paiva > 30) { kuukausi = 10; paiva = 1; }
	else if (kuukausi == 10 && paiva > 31) { kuukausi = 11; paiva = 1; }
	else if (kuukausi == 11 && paiva > 30) { kuukausi = 12; paiva = 1; }
	else if (kuukausi == 12 && paiva > 31) { kuukausi = 1; paiva = 1; }

}

bool Paivays::karkausVuosi() {

	if (vuosi % 4 == 0 && vuosi % 100 > 0) {
		return (true);
	}
	else if (vuosi % 400 == 0) { return (true); }
	return (false);
}


int Paivays::montakoPaivaaKuukaudessa() {
	bool karkaus = karkausVuosi();
	switch (kuukausi)
	{
	case 1: return 31; break;
	case 2: if (karkaus == true) { return 29; }
			else { return 28; } break;
	case 3: return 30; break;
	case 4: return 31; break;
	case 5: return 31; break;
	case 6: return 30; break;
	case 7: return 31; break;
	case 8: return 31; break;
	case 9: return 30; break;
	case 10: return 31; break;
	case 11: return 30; break;
	case 12: return 31; break;
	default:
		return 0;
		break;
	}
}
//purkaja
Paivays::~Paivays()
{
	cout << "TUHOTAAAN OLIO Paivays" << endl;
	//onko tuhottavaaa vai onko automaattisesti kaikki tuhottu? Huonosti dokumentuito
	// varmaan muut jutut tänne mutta kummiinkin yksi tuhotaan tulostus per olio.

}
