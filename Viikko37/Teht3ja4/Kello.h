#pragma once
#ifndef Kello_H
#define Kello_H

class Kello
{
public:
	int tunnit, minuutit, sekunnit;
	//public:

	void asetaAika(int tunnit, int minuutit, int sekunnit);
	void tulostaAika();
	void paivita(int sekunnit);
	//void
	int gettime();
};

#endif