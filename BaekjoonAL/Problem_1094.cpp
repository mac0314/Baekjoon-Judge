#include <iostream>


#define MAX 64

using namespace std;

int sumStickLength(int stick[MAX], int lastIdx);
void printTotalStick(int stick[MAX]);

int main(void) {
	int stick[MAX] = { 64 };
	int totalLength = 0;
	int targetLength = 0;
	int lastIdx = 0;
	int pieceCount = 0;

	//printTotalStick(stick);

	cin >> targetLength;

	while (1) {
		totalLength = sumStickLength(stick, lastIdx);

		if (totalLength > targetLength) {
			stick[lastIdx] = stick[lastIdx] / 2;
			stick[lastIdx + 1] = stick[lastIdx];

			totalLength = sumStickLength(stick, lastIdx);
			
			if (totalLength >= targetLength) {
				stick[lastIdx + 1] = 0;
			}
			else {
				lastIdx++;
			}
		}
		else {
			break;
		}

		//printTotalStick(stick);
	}

	pieceCount = lastIdx + 1;

	cout << pieceCount << endl;

	return 0;
}

int sumStickLength(int stick[MAX], int lastIdx) {
	int totalLength = 0;
	
	for (int i = 0; i <= lastIdx; i++) {
		totalLength += stick[i];
	}
	
	return totalLength;
}

void printTotalStick(int stick[MAX]) {
	// Array test
	for (int i = 0; i < MAX; i++) {
		cout << stick[i] << " ";
	}
	cout << endl;
}