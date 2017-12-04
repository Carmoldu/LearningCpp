#include<iostream>

using namespace std;


int main() {

	int mat1[3][3], mat2[3][3], product[3][3];

	//Fill in the 1st matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\nIntroduce the matrix element [" << i + 1 << "][" << j + 1 << "]:  ";
			cin >> mat1[i][j];
		}
	}

	//Show the first matrix
	cout << "\n\nThe first matrix is:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mat1[i][j];
		}
		cout << endl;
	}

	//Fill in the 2nd matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\nIntroduce the matrix element [" << i + 1 << "][" << j + 1 << "]:  ";
			cin >> mat2[i][j];
		}
	}

	//Show the second matrix
	cout << "\n\nThe second matrix is:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mat2[i][j];
		}
		cout << endl;
	}



	//Compute the product
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			product[i][j] = 0;

			for (int k = 0; k < 3; k++) {
				product[i][j] = product[i][j] + mat1[i][k] * mat2[k][j];
			}
		}
	}


	//Show the product matrix
	cout << "\n\nThe product of both matrices is:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << product[i][j];
		}
		cout << endl;
	}
}