#pragma once
#ifndef Henkilo_H
#define Henkilo_H
#include <string>
using std::string;

class Henkilo
{
private:
	string etunimi, osoite, puhelinnumero, sukunimi;
public:
	//rakentajat
	Henkilo();
	Henkilo(string etunimi_, string osoite_,string puhelinnumero_,string sukinimi_);
	Henkilo(const Henkilo& HenkiloKopio);
	// Purkaja
	~Henkilo();
	//gettersAndSetters
	string annaEtunimi();
	string annaOsoite();
	string annaPuhelinnumero();
	string annaSukunimi();

	void asetaEtunimi(string etunimi);
	void asetaOsoite(string osoite);
	void asetaPuhelinnumero(string puhelinnumero);
	void asetaSukunimi(string sukunimi);

	//funktiot
	void kysyTiedot();
	void tulosta() const;



};
#endif