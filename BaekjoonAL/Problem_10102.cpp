#include <iostream>

#define JUDGE_MAX 16

using namespace std;

int main(void) {
	int v;
	int aCount = 0;
	int bCount = 0;
	char vote[JUDGE_MAX];

	cin >> v;

	cin >> vote;

	for (int i = 0; i < v; i++) {
		if (vote[i] == 'A') {
			aCount++;
		}
		else if (vote[i] == 'B') {
			bCount++;
		}
	}

	if (aCount > bCount) {
		cout << "A" << endl;
	}
	else if (aCount < bCount) {
		cout << "B" << endl;
	}
	else {
		cout << "Tie" << endl;
	}

	return 0;
}