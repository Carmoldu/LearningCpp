#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main() {
	int number, sum= 0, cont=0;

	do {
		cout << "Introduce a number: "; cin >> number;

		if (number > 0) { 
			sum = sum + pow(number, 2); 
			cont++; 
		}

	} while (cont < 10);

	cout << "The sum of the square of the first 10 numbers higher than zero is " << sum << endl;

	system("pause");
	return 0;
}