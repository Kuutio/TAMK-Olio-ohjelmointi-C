#ifndef Paivays_H
#define Paivays_H

class Paivays
{
private:
	int paiva, kuukausi, vuosi;
public:

	void asetaPaiva(int d_paiva);
	void asetaKuukausi(int kuukausi);
	void asetaVuosi(int vuosi);
	
	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();
	void tulostaPaivays();
};

#endif