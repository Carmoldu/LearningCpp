#include<iostream>

using namespace std;

int main() {

	int numList[100], n, sum=0;


	//Input numbers
	cout << "How many numbers do you want to input? "; cin >> n;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". Introduce a number: ";
		cin >> numList[i];
	}



	for (int i = 0; i < n; i++) {		//This process will be repeated for each vector element
		
		sum = 0;						//The sum of the rest of elements in the vector is set to zero


		for (int j = 0; j < n; j++) {	//The vector elements are summed, except for one of the elements
			if (j != i) {
				sum += numList[j];
			}
		}


		if (sum == numList[i]) {		//Check if the current element is equal to the sum of the rest of elements 
			cout << endl << numList[i] << " is equal to ";

			for (int j = 0; j < n; j++) {	
				if (j != i) {
					cout<< numList[j]<<" + ";
				}
			}
		}

	}

	cout << endl;
}