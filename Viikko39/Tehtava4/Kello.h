#pragma once
#ifndef Kello_H
#define Kello_H

class Kello
{
public:
	int tunnit, minuutit, sekunnit;
	//rakentajat
	Kello();
	Kello(int tunnit_, int minuutit_, int sekunnit_);
	Kello(const Kello& kelloKopio);
	//Purkaja
	~Kello();
	//funktiots
	void asetaAika(int tunnit, int minuutit, int sekunnit);
	void tulostaAika();
	void paivita(int sekunnit);
	int gettime();
};

#endif