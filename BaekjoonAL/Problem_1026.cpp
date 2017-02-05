#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int multipleArray(int aArray[], int bArray[], int lastIdx);
void copyArray(int tArray[], int dArray[], int lastIdx);
void printArray(int nArray[], int lastIdx);

int main(void) {
	int n;
	int result = 0;
	int* aArray;
	int* aSubArray;
	int* bArray;
	int* bSubArray;
	int* bCheckArray;

	cin >> n;

	aArray = new int[n + 1];
	aSubArray = new int[n + 1];
	bArray = new int[n + 1];
	bSubArray = new int[n + 1];
	bCheckArray = new int[n + 1];

	for (int i = 0; i < n; i++) {
		cin >> aArray[i];
	}
	copyArray(aSubArray, aArray, n);

	aArray[n] = '\0';
	aSubArray[n] = '\0';

	for (int i = 0; i < n; i++) {
		cin >> bArray[i];
		bCheckArray[i] = 0;
	}
	copyArray(bSubArray, bArray, n);

	bArray[n] = '\0';
	bSubArray[n] = '\0';
	bCheckArray[n] = '\0';

	sort(aArray, aArray + n, greater<int>());
	sort(bArray, bArray + n);

	/*
	sort(aSubArray, aSubArray + n, greater<int>());
	sort(bSubArray, bSubArray + n);

	
	// Check number array
	cout << "---- Before ----" << endl;
	cout << "a" << endl;
	printArray(aArray, n);
	cout << "aSub" << endl;
	printArray(aSubArray, n);
	cout << "b" << endl;
	printArray(bArray, n);
	cout << "bSub" << endl;
	printArray(bSubArray, n);
	cout << "bCheck" << endl;
	printArray(bCheckArray, n);
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (bSubArray[i] == bArray[j] && bCheckArray[j] == 0) {
				aArray[j] = aSubArray[i];
				bCheckArray[j] = -1;
			}
		}
	}

	
	// Check number array
	cout << "---- After ----" << endl;
	cout << "a" << endl;
	printArray(aArray, n);
	cout << "aSub" << endl;
	printArray(aSubArray, n);
	cout << "b" << endl;
	printArray(bArray, n);
	cout << "bSub" << endl;
	printArray(bSubArray, n);
	cout << "bCheck" << endl;
	printArray(bCheckArray, n);
	*/

	result = multipleArray(aArray, bArray, n);
	cout << result << endl;

	delete[] aArray;
	delete[] aSubArray;
	delete[] bArray;
	delete[] bSubArray;
	delete[] bCheckArray;

	return 0;
}

void copyArray(int tArray[], int dArray[], int lastIdx) {
	for (int i = 0; i < lastIdx; i++) {
		tArray[i] = dArray[i];
	}
}

void printArray(int nArray[], int lastIdx) {
	for (int i = 0; i < lastIdx; i++) {
		cout << nArray[i] << " ";
	}
	cout << endl;
}

int multipleArray(int aArray[], int bArray[], int lastIdx) {
	int result = 0;
	for (int i = 0; i < lastIdx; i++) {
		result += aArray[i] * bArray[i];
	}
	return result;
}