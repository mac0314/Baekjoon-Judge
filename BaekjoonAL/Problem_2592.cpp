#include <iostream>

#define NUM_MAX 10

using namespace std;

int main(void) {
	int num[NUM_MAX] = {0};
	int frqNum[NUM_MAX] = {0};
	int average = 0;
	int mostFrqNum = 0;
	int mostFrqIdx = 0;
	int i, j;

	for (i = 0; i < NUM_MAX; i++) {
		cin >> num[i];
		average += num[i];
	}

	average /= NUM_MAX;

	for (i = 0; i < NUM_MAX; i++) {
		for (j = 0; j < NUM_MAX; j++) {
			if (num[i] == num[j]) {
				frqNum[i]++;
			}
		}
	}
	
	for (i = 0; i < NUM_MAX; i++) {
		if (mostFrqIdx < frqNum[i]) {
			mostFrqIdx = i;
		}
	}

	mostFrqNum = num[mostFrqIdx];

	cout << average << endl;
	cout << mostFrqNum << endl;

	return 0;
}