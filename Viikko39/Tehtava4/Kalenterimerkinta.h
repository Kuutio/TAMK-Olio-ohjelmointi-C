#pragma once
#ifndef Kalenterimerkinta_H
#define Kalenterimerkinta_H
#include "Paivays.h"
#include "Kello.h"
#include <string>
using std::string;

class Kalenterimerkinta :
	public Paivays, public Kello
{
private:
	string asia;
	bool muistutus;
public:
	//rakentajat
	Kalenterimerkinta(); //oletus rakentaja
	//Kalenterimerkinta(string asia_,bool muistutus_);
	Kalenterimerkinta(Paivays paivays_, Kello kello_, string asia_, bool muistutus_); // parametrillinen rakentaja jossa parametreinä luokat paivays ja kello sekä asia ja muistutus.
	Kalenterimerkinta(const Kalenterimerkinta& kalenterimerkintaKopio); // kopio rakentaja

	//Purkaja
	~Kalenterimerkinta();

	//getters & setters
	void asetaAsia(string asia);
	void asetaMuistutus(bool muistutus);

	string annaAsia();
	bool annaMuistutus();

	//funktiot
	void tulostaMerkinta();
	void kysyTiedot();

};
#endif
