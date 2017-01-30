#include <iostream>

#define MAX 20

using namespace std;

int main(void) {
	int testCaseNumber = 0;
	int inputNumber = 0;
	int binaryArray[MAX] = {0};
	int maxIdx = 0;
	int binaryNumber = 0;
	int dividend = 0;
	

	cin >> testCaseNumber;

	for (int i = 0; i < testCaseNumber; i++) {
		cin >> inputNumber;

		int j = 0;
		dividend = inputNumber;
		
		while (1) {
			if (dividend == 1) { 
				binaryArray[j] = 1;
				maxIdx = j;
				break;
			}


			binaryNumber = dividend % 2;
			dividend = dividend / 2;

		
			binaryArray[j] = binaryNumber;

			j++;

			//cout << dividend << ", " << binaryNumber << endl;

		}

		for (j = 0; j <= maxIdx; j++) {
			//cout << binaryArray[j] << " ";
			if (binaryArray[j] == 1) {
				cout << j << " ";
			}
		}

		cout << endl;

	}

	return 0;
}