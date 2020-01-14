#pragma once
#ifndef Paivays_H
#define Paivays_H

class Paivays
{
private:
	//Juu
public:
	int paiva, kuukausi, vuosi; //olion muuttujat
	//rakentajat----
	Paivays();
	Paivays(int paiva_, int kuukausi_, int vuosi_);
	Paivays(const Paivays& paivaysKopio);
	//purkaja
	~Paivays();

	//getters and setters
	void asetaPaiva(int paiva);
	void asetaKuukausi(int kuukausi);
	void asetaVuosi(int vuosi);

	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();

	// Funktiot
	void tulostaPaivays();
	void lisaaPaiva();
	bool karkausVuosi();
	int montakoPaivaaKuukaudessa();

};

#endif
