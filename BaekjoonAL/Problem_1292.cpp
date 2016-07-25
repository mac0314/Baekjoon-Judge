#include <iostream>

#define NUM_MAX 1000

using namespace std;

int main(void) {
	int a, b;
	int minSeq, maxSeq;
	int minSum, maxSum;
	int minFullNum, maxFullNum;
	int sum, numRemained;
	int i;

	cin >> a >> b;

	if (a >= b) {
		maxSeq = a;
		minSeq = b;
	}else {
		maxSeq = b;
		minSeq = a;
	}

	for (i = 0; i < maxSeq; i++) {
		sum = (i + 1) * (i + 2) / 2;
		
		if ( sum >= maxSeq) {
			break;
		}
		maxFullNum = i + 1;
	}

	sum = maxFullNum * (maxFullNum + 1) / 2;
	numRemained = maxSeq - sum;
	/*
	cout << "maxSeq : " << maxSeq << endl;
	cout << "sum : " << sum << endl;
	cout << "maxFullNum : " << maxFullNum << endl;
	cout << "numRemained : " << numRemained << endl;
	*/
	for (maxSum = 0, i = 0; i <= maxFullNum; i++) {
		maxSum += i * i;
	}
	maxSum += numRemained * (maxFullNum + 1);

	//cout << "maxSum : " << maxSum << endl;

	for (i = 0; i < minSeq; i++) {
		sum = (i + 1) * (i + 2) / 2;

		if (sum >= minSeq) {
			break;
		}
		minFullNum = i + 1;
	}

	sum = minFullNum * (minFullNum + 1) / 2;
	numRemained = minSeq - sum;
	/*
	cout << "minSeq : " << minSeq << endl;
	cout << "sum : " << sum << endl;
	cout << "minFullNum : " << minFullNum << endl;
	cout << "numRemained : " << numRemained << endl;
	*/
	for (minSum = 0, i = 0; i <= minFullNum; i++) {
		minSum += i * i;
	}
	minSum += numRemained * (minFullNum + 1);

	//cout << "minSum : " << minSum << endl;

	cout << maxSum - minSum + minFullNum + 1 << endl;

	return 0;
}