#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	int number, cont = 0;

	do {
		cout << "Introduce a number: "; cin >> number;
		if (number > 0) { cont++; }
	} while (number!=0);

	cout << "You entered " << cont << " numbers bigger than zero before entering 0." << endl;

	system("pause");
	return 0;
}