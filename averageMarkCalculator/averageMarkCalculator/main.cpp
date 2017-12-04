#include<iostream>

using namespace std;

int main() {
	float mark1, mark2, mark3, mark4, average = 0;

	cout << "Introduce the first mark: ";    cin >> mark1;
	cout << "\nIntroduce the second mark: "; cin >> mark2;
	cout << "\nIntroduce the third mark: ";  cin >> mark3;
	cout << "\nIntroduce the forth mark: ";  cin >> mark4;

	average = (mark1 + mark2 + mark3 + mark4) / 4;

	cout << "\nThe average mark is: " << average << endl;

	return 0;
}