#include<iostream>

using namespace std;

int main() {
	int number;

	cout << "Introduce an integer: ";	cin >> number;

	if (number % 2 == 0) {
		cout << "\nThe number is even." << endl;
	}
	else {
		cout << "\nThe number is odd." << endl;
	}

	return 0;
}