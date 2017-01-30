#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int factorNumber;
	int* factor;
	int originalNumber;

	cin >> factorNumber;

	factor = new int[factorNumber + 1];

	for (int i = 0; i < factorNumber; i++) {
		cin >> factor[i];
	}
	
	sort(factor, factor + (factorNumber));

	// if last index is not '\0', delete error
	factor[factorNumber] = '\0';

	/*
	// check input data
	for (int i = 0; i < factorNumber + 1; i++) {
		cout << factor[i];
	}
	cout << endl;
	*/
	
	originalNumber = factor[0] * factor[factorNumber - 1];


	cout << originalNumber << endl;


	delete[] factor;

	return 0;
}