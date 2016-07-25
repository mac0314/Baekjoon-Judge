#include <iostream>

using namespace std;

int main(void) {
	int testCaseNum;
	int targetNum;
	int* num;
	int i, mCount = 0;

	cin >> testCaseNum;

	num = new int[testCaseNum];

	for (i = 0; i < testCaseNum; i++) {
		cin >> num[i];
	}
	
	cin >> targetNum;

	for (i = 0; i < testCaseNum; i++) {
		if (num[i] == targetNum) {
			mCount++;
		}
	}

	cout << mCount << endl;

	delete[] num;

	return 0;
}