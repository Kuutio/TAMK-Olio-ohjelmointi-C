#include <iostream>

using std::cout; using std::endl;

int main()

{
	const int KOKO = 6;
	double kulutus[KOKO] = { 7.8, 8.1, 8.05, 7.7, 7.9, 8.21 };

	cout << "Normikulutuslukemat (l/100km) ovat:" << endl;
	for (int i = 0; i < KOKO; i++) {
		cout << i + 1 << ". Lukema: " << kulutus[i] << endl;
	}
	system("pause");
	return 0;
}

