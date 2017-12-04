#include<iostream>

using namespace std;

int main() {

	float num1, num2, num3;

	cout << "Introduce 3 numbers: "; cin >> num1 >> num2 >> num3;

	if ((num1 > num2) && (num1 > num3)) {
		cout << "\n The higher number is " << num1 << endl;
	}
	else if ((num2 > num1) && (num2 > num3)) {
		cout << "\n The higher number is " << num2 << endl;
	} 
	else {
		cout << "\n The higher number is " << num3 << endl;
	}


	return 0;
}