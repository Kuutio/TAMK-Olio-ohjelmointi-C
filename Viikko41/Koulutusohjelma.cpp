#include "Koulutusohjelma.h"
#include <iostream>
using std::vector; using std::cout; using std::endl;

Koulutusohjelma::Koulutusohjelma()
	: nimi(),opiskelijat(),opettajat()
{
}

Koulutusohjelma::Koulutusohjelma(string nimi) 
	:
	nimi(nimi), opiskelijat(), opettajat()
{
}

Koulutusohjelma::~Koulutusohjelma()
{
}

void Koulutusohjelma::asetaNimi(string nimi_)
{
	nimi = nimi_;
}

string Koulutusohjelma::annaNimi()
{
	return nimi;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja Opettaja_;
	Opettaja_.kysyTiedot();
	opettajat.push_back(new Opettaja(Opettaja_));
	
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija Opiskelija_;
	Opiskelija_.kysyTiedot();
	opiskelijat.push_back(new Opiskelija(Opiskelija_));
}

void Koulutusohjelma::tulostaOpettajat() const
{
	int koko = opettajat.size();
	for (unsigned int i = 0; i != opettajat.size(); i++) {
		opettajat[i]->tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelijat() const
{
	int koko = opiskelijat.size();
	for (unsigned int i = 0; i != opiskelijat.size(); i++) {
		opiskelijat[i]->tulosta();
	}
}
