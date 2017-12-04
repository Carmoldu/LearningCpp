#include<iostream>

using namespace std;

int main() {
	int numIn, auxNum=0, i=2;

	cout << "Intorduce a number: ";
	cin >> numIn; auxNum = numIn;
	
	cout << "\nThe number " << numIn << " is decomposed in: ";


	while (i <= auxNum) {

		if (auxNum%i == 0) {
			auxNum = auxNum / i;
			cout << i << " ";
		}
		else {
			i++;
		}

	}

	cout << endl;

}