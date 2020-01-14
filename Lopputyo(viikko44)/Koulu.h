#pragma once
#ifndef Koulu_H
#define Koulu_H
#include "Opiskelija.h"
#include "Opettaja.h"
#include "Koulutusohjelma.h"
#include <string>
#include <vector>

using std::vector;

class Koulu {
private:
	string nimi;
	vector <Koulutusohjelma*> koulutusohjelmat;
public:
	Koulu();
	Koulu(string nimi_);
	~Koulu();

	void lisaaKoulutusohjelma();
	void tulostaKoulutusOhjelmat() const;
	void tulostaKoulutusOhjelmienMaara() const;
	void lisaaKoulutusohjelmaanOpettaja();
	void tulostaKoulutusohjelmanOpettajat();
	void lisaaKoulutusohjelmaanOpiskelija();
	void tulostaKoulutusohjelmanOpiskelijat();

	void poistaKoulutusohjelma();
	void poistaOpettaja();
	void poistaOppilas();

	void paivitaKoulutusohjelmanNimi();
	void paivitaOpettajanTiedot();
	void paivitaOpiskelijanTiedot();

	void lueTiedot();
	void tallennaTiedot();

	int etsiKoulutusohjelma();

	void tulostaError(int virhekoodi);





};

#endif