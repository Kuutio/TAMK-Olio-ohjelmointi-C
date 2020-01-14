#pragma once
#ifndef Tyontekija_H
#define Tyontekija_H
#include "Henkilo.h"

class Tyontekija :
	public Henkilo
{
private:
	string palkka;
	string tunnus;
public:
	Tyontekija();
	Tyontekija(string etunimi_, string osoite_, string puhelinnumero_, string sukunimi_, string palkka_, string tunnus_);
	Tyontekija(const Tyontekija& tyontekijaKopio);
	~Tyontekija();

	string annaPalkka();
	string annaTunnus();
	void asetaPalkka(string palkka_);
	void asetaTunnus(string tunnus_);

	void kysyTiedot();
	void tulosta() const;

	void operator=(Tyontekija& toinenTyontekija);

};

#endif