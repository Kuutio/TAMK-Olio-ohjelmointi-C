#include "Murtoluku.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;
//int osoittaja, nimittaja;

Murtoluku::Murtoluku()
	:osoittaja(4), nimittaja(8)
{

	//oletusrakentaja
}

Murtoluku::Murtoluku(int oso, int nimi)
	: osoittaja(oso), nimittaja(nimi)
{
	//parametrillinen rakentaja
}

Murtoluku::~Murtoluku()
{
	cout << "Tuhotaan olio " << endl;
	//onko tuhottavaaa vai onko automaattisesti kaikki tuhottu? Huonosti dokumentuito
	// varmaan muut jutut tänne mutta kummiinkin yksi tuhotaan tulostus per olio.
}

void Murtoluku::asetaOsoittaja(int x) {
	osoittaja = x;
}

void Murtoluku::asetaNimittäjä(int y) {
	nimittaja = y;
}

int Murtoluku::annaOsoittaja() {
	return osoittaja;
}

int Murtoluku::annaNimittäjä() {
	return nimittaja;
}


void Murtoluku::kysyTiedot() {
	int tempNimi, tempOso;

	cout << "Anna osoittaja!" << endl;
	cin >> tempOso;
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna osoittaja! ";
		cin >> tempOso;
	}

	cout << "Anna Nimittäjä!" << endl;
	cin >> tempNimi;
	while (!cin) { //virheentarkistus
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid argument!" << endl;
		cout << "Anna nimittäjä! ";
		cin >> tempNimi;
	}
	
	nimittaja = tempNimi;
	osoittaja = tempOso;

}

void Murtoluku::tulosta() {
	cout << "Osoittaja >" << osoittaja << " Nimittäjä >" << nimittaja<< endl; 
}

int Murtoluku::findgcd(int a,int b) {
	if (a == 0)
		return b;
	return findgcd(b % a, a);
}
