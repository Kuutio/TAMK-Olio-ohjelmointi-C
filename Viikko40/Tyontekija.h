#pragma once
#ifndef Tyontekija_H
#define Tyontekija_H
#include "Henkilo.h"

class Tyontekija :
	public Henkilo
{
private:
	int palkka;
	string tunnus;
public:
	Tyontekija();
	Tyontekija(string etunimi_, string osoite_, string puhelinnumero_, string sukunimi_, int palkka_,string tunnus_);
	Tyontekija(const Tyontekija& tyontekijaKopio);
	~Tyontekija();

	int annaPalkka();
	string annaTunnus();
	void asetaPalkka(int palkka_);
	void asetaTunnus(string tunnus_);

	void kysyTiedot();
	void tulosta() const;

};

#endif