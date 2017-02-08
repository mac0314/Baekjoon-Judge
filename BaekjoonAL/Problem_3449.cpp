#include <iostream>
#include <cstring>

#define INPUT_MAX 101

using namespace std;

int main(void) {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		char aInput[INPUT_MAX];
		char bInput[INPUT_MAX];
		int aLength = 0;
		int bLength = 0;
		int hDistance = 0;

		cin >> aInput;
		cin >> bInput;

		aLength = strlen(aInput);
		//cout << aInput << endl;
		//cout << bInput << endl;

		for (int j = 0; j < aLength; j++) {
			//cout << aInput[j] << endl;
			if (aInput[j] != bInput[j]) {
				hDistance++;
			}

		}

		cout << "Hamming distance is " << hDistance << "." << endl;
	}



	return 0;
}