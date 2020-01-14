#include "Koulu.h"
#include <iostream>
#include <fstream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::vector;

Koulu::Koulu()
	:nimi("tamk"), koulutusohjelmat()
{
}

Koulu::Koulu(string nimi_)
	: nimi(nimi_), koulutusohjelmat()
{
}

Koulu::~Koulu()
{
}

void Koulu::lisaaKoulutusohjelma()
{
	string nimi;
	cout << "Anna koulutusohjelman nimi: ";
	cin >> nimi;
	koulutusohjelmat.push_back(new Koulutusohjelma(nimi));
}

void Koulu::tulostaKoulutusOhjelmat() const
{
	for (int i = 0; i < koulutusohjelmat.size(); i++) {
		cout << "Nimi " << i << " : " << koulutusohjelmat[i]->annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusOhjelmienMaara() const
{
	cout << "Koulutusohjelmia on yhteensä :" << koulutusohjelmat.size() << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	int index;
	index = etsiKoulutusohjelma();
	if (index == -1) { tulostaError(1); }
	else {
		koulutusohjelmat[index]->lisaaOpettaja();
	}
}


void Koulu::tulostaKoulutusohjelmanOpettajat()
{
	int index = etsiKoulutusohjelma();
	koulutusohjelmat[index]->tulostaOpettajat();


}

void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{
	int index;
	index = etsiKoulutusohjelma();
	if (index == -1) { tulostaError(1); }
	else {
		koulutusohjelmat[index]->lisaaOpiskelija();
	}
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat()
{
	int index = etsiKoulutusohjelma();
	koulutusohjelmat[index]->tulostaOpiskelijat();
}

void Koulu::poistaKoulutusohjelma()
{
	int index = etsiKoulutusohjelma();
	if (index != -1) {
		koulutusohjelmat.erase(koulutusohjelmat.begin() + index);
		cout << "Koulutusohjelma poistettu!" << endl;
	}else{ tulostaError(1); }
}

void Koulu::poistaOpettaja()
{
	int index = etsiKoulutusohjelma();
	if (index != -1) {
		bool tarkistus = koulutusohjelmat[index]->poistaOpettaja();
		if (tarkistus == false) {tulostaError(2);}
		else { cout << "Opettaja poistettu!" << endl; }
	}
	else { tulostaError(1); }
	
}

void Koulu::poistaOppilas()
{
	int index = etsiKoulutusohjelma();
	if (index != -1) {
		bool tarkistus = koulutusohjelmat[index]->poistaOppilas();
		if (tarkistus == false) { tulostaError(3); }
		else { cout << "Oppilas poistettu!" << endl; }
	}
	else { tulostaError(1); }
}

void Koulu::paivitaKoulutusohjelmanNimi()
{
	string nimi_;
	int index = etsiKoulutusohjelma();
	if (index != -1) {
		cout << "Anna koulutusohjelman uusinimi! >>";
		while (!(cin >> nimi_)) {
			cin.clear();
			cin.ignore(std::numeric_limits<int>::max(), '\n');
			cout << "Invalid input. Please, try again! >>";
		}
		koulutusohjelmat[index]->asetaNimi(nimi_);
		cout << "Koulutusohjelman nimi vaihdettu!" << endl;
		
	}
	else { tulostaError(1); }
}

void Koulu::paivitaOpettajanTiedot()
{
	int index = etsiKoulutusohjelma();
	if (index != -1) {
		bool tarkistus = koulutusohjelmat[index]->paivitaOpettaja();
		if (tarkistus == false) { tulostaError(2); }
		else { cout << "Opettajan tiedot päivitetty!" << endl; }
	}
	else { tulostaError(1); }
}

void Koulu::paivitaOpiskelijanTiedot()
{
	int index = etsiKoulutusohjelma();
	if (index != -1) {
		bool tarkistus = koulutusohjelmat[index]->paivitaOpiskelija();
		if (tarkistus == false) { tulostaError(3); }
		else { cout << "Opiskelijan tiedot päivitetty!" << endl; }
	}
	else { tulostaError(1); }
}

void Koulu::lueTiedot()

{
	if (koulutusohjelmat.size() == 0) { cout << "Koulutusohjelmia on 0 kappaletta !" << endl; }
	//std::getline(startfile, str)
	//getline(cin, opetusala);
	//string tiedot;
	else {
		string tiedot,tiedot2,tiedot3;
		vector<string> tiedostoData;
		std::ifstream tiedosto("koulutusohjelmat.csv");
		cout << "Koulutoshjelmat: ";
		while (getline(tiedosto, tiedot,'\n'))
		{
			cout << tiedot << endl;

		}
		cout << endl;
		tiedosto.close();

		std::ifstream tiedosto2("Opettajat.csv");
		cout << "Opettajat: ";
		while (getline(tiedosto2, tiedot2, '\n'))
		{
			cout << tiedot2<<endl;

		}
		cout << endl;
		tiedosto2.close();

		std::ifstream tiedosto3("Opiskelijat.csv");
		cout << "Opiskelijat: ";
		while (getline(tiedosto3, tiedot3, '\n'))
		{
			cout << tiedot3 << endl;
		}
		cout << endl << "Tiedot luettu!" << endl;
		tiedosto3.close();
		}
}

void Koulu::tallennaTiedot()
{
	if (koulutusohjelmat.size() == 0) { cout << "Koulutusohjelmia on 0 kappaletta !" << endl; }
	else{
		std::ofstream tiedosto;
		tiedosto.open("koulutusohjelmat.csv");
		for ( int i = 0; i < koulutusohjelmat.size(); i++) {
			tiedosto << koulutusohjelmat[i]->annaNimi() << ";" << "\n";
			koulutusohjelmat[i]->tallennaTiedot(i);
		}
		tiedosto.close();
		cout << "Koulutusohjelmat tallennettu!" << endl;
		
	}
	
}

int Koulu::etsiKoulutusohjelma()
{
	string nimi_;
	cout << "Anna koulutusohjelman nimi: ";
	while (!(cin >> nimi_)) {
		cin.clear();
		cin.ignore(std::numeric_limits<int>::max(), '\n');
		cout << "Invalid input. Please, try again! >>";
	}

	for (int i = 0; i < koulutusohjelmat.size(); i++) {
		if (nimi_ == koulutusohjelmat[i]->annaNimi()) {
			return i;
		}
	}
	return -1;
}

void Koulu::tulostaError(int virhekoodi){
	switch (virhekoodi)
	{
	default: break;
	case 1: cout << "error 15 : Koulutusohjelmaa ei ole olemassa !"; break;
	case 2: cout << "error 16 : Opettajaa ei ole koulutusohjelmassa !"; break;
	case 3: cout << "error 17 : Oppilasta ei ole koulutusohjelmassa !"; break;
	case 4: cout << "error 18 : Paivitys ei onnistunut"; break;
	}
	cout << endl;

}
