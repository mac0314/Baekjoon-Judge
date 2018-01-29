#include <iostream>
#include <algorithm>

#define MAX 10001

int d[MAX][3];
int p[MAX];

using namespace std;

int main(void) {
	int n = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	for (int i = 1; i <= n; i++) {
		d[i][0] = max(max(d[i - 1][0], d[i - 1][1]), d[i - 1][2]);
		d[i][1] = d[i - 1][0] + p[i];
		d[i][2] = d[i - 1][1] + p[i];
	}

	int result = 0;

	result = max(max(d[n][0], d[n][1]), d[n][2]);

	cout << result << endl;

	return 0;
}