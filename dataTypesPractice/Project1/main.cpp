#include<iostream>

using namespace std;

int main() {
	int Age;
	char Sex;
	float height;

	cout << "Enter the person's age: ";			cin >> Age;
	cout << "\nEnter the person's sex (m/f): ";	cin >> Sex;
	cout << "\nEnter the person's height: ";	cin >> height;

	cout << "\nThe person is " << Age << " years old, " << Sex << ", and " << height << " meters tall."<< endl;

	return 0;
}