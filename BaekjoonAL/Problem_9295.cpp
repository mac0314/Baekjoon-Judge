#include <iostream>

#define MAX 2

using namespace std;

int main(void) {
	int t;
	int dice[MAX];

	cin >> t;

	for (int i = 0; i < t; i++) {
		int result = 0;

		for (int j = 0; j < MAX; j++) {
			cin >> dice[j];
		}

		for (int j = 0; j < MAX; j++) {
			result += dice[j];
		}

		cout << "Case " << i + 1 << ": " << result << endl;
	}

	return 0;
}