#include <iostream>

unsigned long long int customFibonacci(unsigned long long int num[], int targetNum);

#define FIBO_NUM_MAX 68

using namespace std;

int main(void) {
	int testCaseNum;
	int i, j;
	unsigned long long int num[FIBO_NUM_MAX] = {0};
	unsigned long long int result;
	int n;

	cin >> testCaseNum;

	num[0] = 1;
	num[1] = 1;
	num[2] = 2;
	num[3] = 4;

	for (i = 0; i < testCaseNum; i++) {
		cin >> n;
		
		result = customFibonacci(num, n);

		cout << result << endl;
	}

	return 0;
}

unsigned long long int customFibonacci(unsigned long long int num[], int targetNum) {
	if (targetNum < 2) {
		return 1;
	}else if (targetNum == 2) {
		return 2;
	}else if (targetNum == 3) {
		return 4;
	}else {
		if (num[targetNum] == 0) {
			return num[targetNum] = (customFibonacci(num, targetNum - 1) + customFibonacci(num, targetNum - 2) + customFibonacci(num, targetNum - 3) + customFibonacci(num, targetNum - 4));
		}else {
			return num[targetNum];
		}
	}
}