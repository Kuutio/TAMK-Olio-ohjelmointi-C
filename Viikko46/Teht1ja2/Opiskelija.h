#pragma once
#ifndef Opiskelija_H
#define Opiskelija_H
#include "Henkilo.h"

class Opiskelija :
	public Henkilo
{
private:
	string opiskelijanumero;
public:
	Opiskelija();
	Opiskelija(string etunimi_, string osoite_, string puhelinnumero_, string sukunimi_, string opiskelijanumero_);
	Opiskelija(const Opiskelija& opiskelijaKopio);
	~Opiskelija();

	string annaOpiskelijanumero();
	void asetaOpiskelijanumero(string opiskelijanumero);

	void kysyTiedot();
	void tulosta() const;

	void operator=(Opiskelija& toinenOpiskelija);

};

#endif