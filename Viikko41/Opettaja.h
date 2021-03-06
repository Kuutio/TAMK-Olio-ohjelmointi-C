#pragma once
#ifndef Opettaja_H
#define Opettaja_H
#include "Tyontekija.h"

class Opettaja :
	public Tyontekija
{
private:
	string opetusala;
public:
	Opettaja();
	Opettaja(string etunimi_, string osoite_, string puhelinnumero_, string sukunimi_, int palkka_, string tunnus_, string opetusala_);
	Opettaja(const Opettaja& Opettaja_);
	~Opettaja();

	string anna�petusala();
	void asetaOpetusala(string opetusala_);

	void kysyTiedot();
	void tulosta() const;

};

#endif