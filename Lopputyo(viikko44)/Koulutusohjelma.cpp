#include "Koulutusohjelma.h"
#include <iostream>
#include <fstream>
using std::vector; using std::cout; using std::endl; using std::cin;

Koulutusohjelma::Koulutusohjelma()
	: nimi(), opiskelijat(), opettajat()
{
}

Koulutusohjelma::Koulutusohjelma(string nimi)
	:
	nimi(nimi), opiskelijat(), opettajat()
{
}

Koulutusohjelma::~Koulutusohjelma()
{
}

void Koulutusohjelma::asetaNimi(string nimi_)
{
	nimi = nimi_;
}

string Koulutusohjelma::annaNimi()
{
	return nimi;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja Opettaja_;
	Opettaja_.kysyTiedot();
	opettajat.push_back(new Opettaja(Opettaja_));

}

bool Koulutusohjelma::poistaOpettaja()
{
	cout << "Anna opettajan tunnus! >>";
	string tunnus;
	while (!(cin >> tunnus)) {
		cin.clear();
		cin.ignore(std::numeric_limits<int>::max(), '\n');
		cout << "Invalid input. Please, try again! >>";
	}
	
	string temp;
	for (int i = 0; i != opettajat.size(); i++) {
		temp = opettajat[i]->annaTunnus();
		if (temp == tunnus) { opettajat.erase(opettajat.begin() + i); return true; }
	}
	return false;
}

bool Koulutusohjelma::poistaOppilas()
{
	cout << "Anna opiskelija tunnus! >>";
	string tunnus;
	while (!(cin >> tunnus)) {
		cin.clear();
		cin.ignore(std::numeric_limits<int>::max(), '\n');
		cout << "Invalid input. Please, try again! >>";
	}

	string temp;
	for (int i = 0; i != opiskelijat.size(); i++) {
		temp = opiskelijat[i]->annaOpiskelijanumero();
		if (temp == tunnus) { opiskelijat.erase(opiskelijat.begin() + i); return true; }
	}
	return false;
}
bool Koulutusohjelma::paivitaOpettaja(){
	cout << "Anna opettajan tunnus! >>";
	string tunnus;
	while (!(cin >> tunnus)) {
		cin.clear();
		cin.ignore(std::numeric_limits<int>::max(), '\n');
		cout << "Invalid input. Please, try again! >>";
	}

	string temp;
	for (int i = 0; i != opettajat.size(); i++) {
		temp = opettajat[i]->annaTunnus();
		if (temp == tunnus) { 
			opettajat[i]->kysyTiedot();
			 return true; }
	}
	return false;

}

bool Koulutusohjelma::paivitaOpiskelija()
{
	cout << "Anna opiskelijanumero! >>";
	string tunnus;
	while (!(cin >> tunnus)) {
		cin.clear();
		cin.ignore(std::numeric_limits<int>::max(), '\n');
		cout << "Invalid input. Please, try again! >>";
	}

	string temp;
	for (int i = 0; i != opiskelijat.size(); i++) {
		temp = opiskelijat[i]->annaOpiskelijanumero();
		if (temp == tunnus) {
			opiskelijat[i]->kysyTiedot();
			return true;
		}
	}
	return false;
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija Opiskelija_;
	Opiskelija_.kysyTiedot();
	opiskelijat.push_back(new Opiskelija(Opiskelija_));
}

void Koulutusohjelma::tulostaOpettajat() const
{
	int koko = opettajat.size();
	for (unsigned int i = 0; i != opettajat.size(); i++) {
		opettajat[i]->tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelijat() const
{
	int koko = opiskelijat.size();
	for (unsigned int i = 0; i != opiskelijat.size(); i++) {
		opiskelijat[i]->tulosta();
	}
}

void Koulutusohjelma::tallennaTiedot(int x)
{
	//cout << "X ON " << x << endl;
	std::ofstream tiedostoOpettajat;
	std::ofstream tiedostoOpiskelijat;
	if (x==0){ tiedostoOpettajat.open("Opettajat.csv");}
	else {
		tiedostoOpettajat.open("Opettajat.csv", std::ios_base::app);
	}
	for (int i=0; i < opettajat.size(); i++) {
		tiedostoOpettajat << nimi << ";" << opettajat[i]->annaEtunimi() << ";" << opettajat[i]->annaSukunimi() << ";" << opettajat[i]->annaOsoite() << ";"
			<< opettajat[i]->annaPuhelinnumero() << ";" << opettajat[i]->annaOpetusala() << ";" << opettajat[i]->annaPalkka() << ";" << opettajat[i]->annaTunnus() << "\n";
	}
	tiedostoOpettajat.close();
	//cout << "Opettajat tallennettu!" << endl;
	
	if (x == 0) { tiedostoOpiskelijat.open("Opiskelijat.csv"); }
	else { tiedostoOpiskelijat.open("Opiskelijat.csv", std::ios_base::app); }

	for (int i=0; i < opiskelijat.size(); i++) {
		tiedostoOpiskelijat << nimi << ";" << opiskelijat[i]->annaEtunimi() << ";" << opiskelijat[i]->annaSukunimi() << ";" << opiskelijat[i]->annaOsoite() << ";" <<
			opiskelijat[i]->annaPuhelinnumero() << ";" << opiskelijat[i]->annaOpiskelijanumero() << "\n";
	}
	tiedostoOpiskelijat.close();
	//cout << "Opiskelijat tallennettu! " << endl;


}

