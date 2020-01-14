#include "Kalenterimerkinta.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;

Kalenterimerkinta::Kalenterimerkinta() :
	asia("tyhja"), muistutus(false) //Kello(),Paivays() //Ei tarvitse laittaa sillä jossei erikseen määritä suorittaa oletusrakentajat.

{
	cout << "Kalenterimerkinta oletusrakentaja" << endl;

}

//Kalenterimerkinta::Kalenterimerkinta(int paiva,int kuukausi,int vuosi)
//Batter(Player const& p, other arguments) :
//	Player(p),


Kalenterimerkinta::Kalenterimerkinta(Paivays paivays_, Kello kello_, string asia_, bool muistutus_)
	:asia(asia_), muistutus(muistutus_), Paivays(paivays_), Kello(kello_)
{
	//paiva = paivays_.paiva; kuukausi = paivays_.kuukausi; vuosi = paivays_.vuosi;
	//tunnit = kello_.tunnit; minuutit = kello_.minuutit; sekunnit = kello_.sekunnit;
	//paiva = paivays_.annaPaiva(); kuukausi = paivays_.annaKuukausi(); vuosi = paivays_.annaVuosi();
	//tunnit = kello_.tunnit; minuutit = kello_.minuutit; sekunnit = kello_.sekunnit;


	cout << "Kalenterimerkinta parametrirakentaja" << endl;
}

Kalenterimerkinta::Kalenterimerkinta(const Kalenterimerkinta& kalenteriKopio) :
	asia(kalenteriKopio.asia), muistutus(kalenteriKopio.muistutus), Kello(kalenteriKopio), Paivays(kalenteriKopio)
{

	cout << "Kalenterimerkinta kopiorakentaja" << endl;
}

Kalenterimerkinta::~Kalenterimerkinta()
{
	cout << "Tuhotaan olio kalenterimerkinta " << endl;
}

//setters and getters
void Kalenterimerkinta::asetaAsia(string teksti) { asia = teksti; }
void Kalenterimerkinta::asetaMuistutus(bool haly) { muistutus = haly; }

string Kalenterimerkinta::annaAsia() { return asia; }
bool Kalenterimerkinta::annaMuistutus() { return muistutus; }
//functions
//void tulostaMerkinta();
//void kysyTiedot();
void Kalenterimerkinta::tulostaMerkinta() {
	cout << asia << endl;
}
void Kalenterimerkinta::kysyTiedot() {
	char halyvalinta = 'O';
	cout << "Anna muistutuksen tiedot >>";
	cin >> asia;
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna asia! ";
		cin >> asia;
	}
	cout << "Haluatko hälytyksen Y/N >>";
	while (halyvalinta != 'Y' && halyvalinta != 'N') {


		cin >> halyvalinta;
		while (!cin) { //virheentarkistus
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invalid argument!" << endl;
			cout << "Anna Y TAI N! ";
			cin >> halyvalinta;
		}
	}
	if (halyvalinta == 'Y') { muistutus = true; }
	else if (halyvalinta == 'N') { muistutus = false; }
}
