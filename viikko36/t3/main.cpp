#include <iostream>

using std::cout; using std::endl; using std::cin;

int main()

{
	int arvosanat[6] = {0,0,0,0,0,0};
	int arvosana=0;
	int opiskelijat = 0;

	while (arvosana >= 0) {
		cout << "Anna arvosana: ";
		cin >> arvosana;
		while (!cin || arvosana > 5) { //virheentarkistus
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invalid argument!" << endl;
			cout << "Anna arvosana: ";
			cin >> arvosana;
		}
		switch (arvosana)
		{
		case 0: arvosanat[0] = arvosanat[0] + 1; opiskelijat = opiskelijat + 1; break;
		case 1: arvosanat[1] = arvosanat[1] + 1; opiskelijat = opiskelijat + 1; break;
		case 2: arvosanat[2] = arvosanat[2] + 1; opiskelijat = opiskelijat + 1; break;
		case 3: arvosanat[3] = arvosanat[3] + 1; opiskelijat = opiskelijat + 1; break;
		case 4: arvosanat[4] = arvosanat[4] + 1; opiskelijat = opiskelijat + 1; break;
		case 5: arvosanat[5] = arvosanat[5] + 1; opiskelijat = opiskelijat + 1; break;
		default:
			break;
		}
		opiskelijat + 1;

	}
	for (int i = 0; i < 6; i++) {
		cout << i << " " << arvosanat[i] << " ";
		for (int j = 0; j < arvosanat[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << "Opiskelijoita: " << opiskelijat << ", keskiarvo: "<< (arvosanat[1] + arvosanat[2]*2 + arvosanat[3]*3 + arvosanat[4]*4 + arvosanat[5]*5)/opiskelijat<<endl;

	system("PAUSE");
	return 0;

}