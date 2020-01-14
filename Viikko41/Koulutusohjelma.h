#pragma once
#pragma once
#ifndef Koulutusohjelma_H
#define Koulutusohjelma_H
#include "Opiskelija.h"
#include "Opettaja.h"
#include <string>
#include <vector>

class Koulutusohjelma {
private:
	string nimi;
	std::vector <Opiskelija*> opiskelijat;
	std::vector <Opettaja*> opettajat;
public:
	Koulutusohjelma();
	Koulutusohjelma(string nimi_);
	~Koulutusohjelma();

	void asetaNimi(string nimi_);
	string annaNimi();

	void lisaaOpettaja();
	void lisaaOpiskelija();
	void tulostaOpettajat() const;
	void tulostaOpiskelijat() const;

};

#endif