#include "Koulu.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::vector;

Koulu::Koulu()
	:nimi("ohjelma"),koulutusohjelmat()
{
}

Koulu::Koulu(string nimi_)
	:nimi(nimi_),koulutusohjelmat()
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
		cout << "Nimi "<<i<<" : "<<koulutusohjelmat[i]->annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusOhjelmienMaara() const
{
	cout << "Koulutusohjelmia on yhteensä :" << koulutusohjelmat.size()<<endl; 
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	int index;
	index = etsiKoulutusohjelma();
	if (index == -1) { cout << "KOULUTUSOHJELMAA EI OLE OLEMASSA" << endl; }
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
	if (index == -1) { cout << "KOULUTUSOHJELMAA EI OLE OLEMASSA" << endl; }
	else {
		koulutusohjelmat[index]->lisaaOpiskelija();
	}
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat()
{
	int index = etsiKoulutusohjelma();
	koulutusohjelmat[index]->tulostaOpiskelijat();
}

int Koulu::etsiKoulutusohjelma()
{
	string nimi_;
	cout << "Anna koulutusohjelman nimi: ";
	cin >> nimi_;

	for (int i = 0; i < koulutusohjelmat.size(); i++) {
		if (nimi_ == koulutusohjelmat[i]->annaNimi()) {
			return i;
		}
	}
	return -1;
}
