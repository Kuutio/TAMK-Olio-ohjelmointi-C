#pragma once
#ifndef Paivays_H
#define Paivays_H

class Paivays
{
private:
	int paiva, kuukausi, vuosi; //olion muuttujat
public:
	//rakentajat----
	Paivays();
	Paivays(int paiva_, int kuukausi_, int vuosi_);
	//purkaja
	~Paivays();

	//getters and setters
	void asetaPaiva(int paiva);
	void asetaKuukausi(int kuukausi);
	void asetaVuosi(int vuosi);

	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();
	//
	// Funktiot
	void tulostaPaivays();

};

#endif
