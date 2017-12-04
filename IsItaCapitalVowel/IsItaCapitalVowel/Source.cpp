#include<iostream>

using namespace std;

int main() {

	char letter;

	cout << "Introduce a letter: "; cin >> letter;

	switch (letter)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':	cout << "\nThe letter is a capital vowel." << endl; break;
	default:	cout << "\nThe letter is NOT a capital vowel." << endl; break;
	}

	return 0;
}