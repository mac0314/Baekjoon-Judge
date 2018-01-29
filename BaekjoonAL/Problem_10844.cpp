#include <iostream>

#define MOD 1000000000

int d[101][11];

using namespace std;

int main(void) {
	int n = 0;

	cin >> n;

	for (int i = 1; i <= 9; i++) {
		d[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;

			if (j - 1 >= 0) {
				d[i][j] += d[i - 1][j - 1];
			}
			if (j + 1 <= 9) {
				d[i][j] += d[i - 1][j + 1];
			}
			d[i][j] %= MOD;
		}
	}

	long long answer = 0;

	for (int i = 0; i <= 9; i++) {
		answer += d[n][i];

		answer %= MOD;
	}


	cout << answer << endl;

	return 0;
}