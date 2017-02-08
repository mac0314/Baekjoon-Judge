#include <iostream>

#define NUMBER_MAX 7
#define INFINITY 9999999

using namespace std;

int main(void) {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int min = INFINITY;
		int evenSum = 0;
		int num[NUMBER_MAX] = {0};

		for (int j = 0; j < NUMBER_MAX; j++) {
			cin >> num[j];
			if (num[j] % 2 == 0) {
				if (num[j] < min) {
					min = num[j];
				}

				evenSum += num[j];
			}
		}

		cout << evenSum << " " << min << endl;
	}

	return 0;
}