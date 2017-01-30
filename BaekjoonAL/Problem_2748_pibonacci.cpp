#include <iostream>
#include <cstring>

#define NUM_MAX 90

unsigned long long int mFibonacci(unsigned long long int num[], int targetNum);

using namespace std;

int main(void) {
	int n, i;
	unsigned long long int* fNum;
	unsigned long long int result;

	cin >> n;

	fNum = new unsigned long long int[n + 1];
	
	memset(fNum, 0, sizeof(unsigned long long int) * (n+1) );
	
	

	result = mFibonacci(fNum, n);
	cout << result << endl;
	/*
	for (i = 0; i <= n; i++) {
		cout << i << " fNum : " << fNum[i] << endl;
	}
	cout << endl;
	*/
	delete[] fNum;
	fNum = NULL;

	return 0;
}

unsigned long long int mFibonacci(unsigned long long int num[], int targetNum) {
	if (targetNum == 0) {
		num[0] = 0;
		return 0;
	}else if (targetNum == 1) {
		num[1] = 1;
		return 1;
	}

	if (num[targetNum] == 0) {
		return num[targetNum] = mFibonacci(num, targetNum - 1) + mFibonacci(num, targetNum - 2);
	}else {
		return num[targetNum];
	}
}