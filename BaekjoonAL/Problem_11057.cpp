#include <iostream>

#define MOD 10007

#define MAX 1001
#define NUM_MAX 10

int d[MAX][NUM_MAX];

using namespace std;

int main(void) {
	int n = 0;

	cin >> n;

	for (int i = 0; i <= 9; i++) {
		d[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				d[i][j] += d[i - 1][k];
				d[i][j] %= MOD;
			}
		}
	}

	long long result = 0;

	for (int i = 0; i <= 9; i++) {
		result += d[n][i];
		result %= MOD;
	}

	cout << result << endl;

	return 0;
}