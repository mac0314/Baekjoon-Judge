#include <iostream>
#include <algorithm>

#define MAX 1001

int p[MAX];
int d[MAX];

using namespace std;

int main(void) {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	d[0] = 0;
	for (int i = 1; i <= n; i++) {
		d[i] = 0;

		for (int j = 1; j <= i; j++) {
			d[i] = max(d[i], d[i - j] + p[j]);
		}
	}

	cout << d[n] << endl;

	return 0;
}

