#include<iostream>

using namespace std;

int main() {
	int numList[100], n, max=-999;

	cout << "How many numbers do you want to input? "; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << i+1 << ". Introduce a number: ";
		cin >> numList[i];
	}

	for (int j = 0; j < n; j++) {
		if (numList[j] > max) {
			max = numList[j]; 
		}
	}

	cout << "\nThe highest number entered was: " << max << endl;

}