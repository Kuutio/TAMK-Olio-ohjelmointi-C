#pragma once
#ifndef Murtoluku_H
#define Murtoluku_H

class Murtoluku
{
private:
	int osoittaja,nimittaja; //muuttujat
public:
	//rakentaja
	Murtoluku();
	Murtoluku(int osoittaja_, int nimittaja_);

	//purkaja
	~Murtoluku();
	//getters,setters
	void asetaOsoittaja(int osoittaja);
	void asetaNimittäjä(int nimittäjä);

	int annaOsoittaja();
	int annaNimittäjä();

	//funktiot
	void kysyTiedot();
	void tulosta();
	int findgcd(int osoittaja, int nimittaja);

};

#endif