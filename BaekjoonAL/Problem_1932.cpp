#include <iostream>


#define MAX 501

using namespace std;

int a[MAX][MAX];
int d[MAX][MAX];

int main(void) {
	ios_base::sync_with_stdio(false);
	int n;
	int answer = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> a[i][j];
		}
	}

	d[0][0] = a[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			d[i][j] = d[i - 1][j] + a[i][j];

			if (j - 1 >= 0 && d[i][j] < d[i - 1][j - 1] + a[i][j]) {
				d[i][j] = d[i - 1][j - 1] + a[i][j];
			}
		}
	}

	answer = d[n - 1][0];
	for (int i = 0; i < n; i++) {
		if (answer < d[n - 1][i]) {
			answer = d[n - 1][i];
		}
	}

	cout << answer << '\n';

	return 0;
}