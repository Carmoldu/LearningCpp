#include<iostream>

using namespace std;

int main() {
	int matrix[3][3], transpMat[3][3];


	//Fill in the matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\nIntroduce the matrix element [" << i+1 << "][" << j+1 << "]:  ";
			cin >> matrix[i][j];
		}
	}

	//Show the original matrix
	cout << "\n\nThe original matrix is:" << endl;
	//Show the complete matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j];
		}
		cout << endl;
	}

	//Transpose the matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			transpMat[j][i] = matrix[i][j];
		}
	}


	//Show the transposed matrix
	cout << "\n\nThe transposed matrix is:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << transpMat[i][j];
		}
		cout << endl;
	}

	return 0;
}