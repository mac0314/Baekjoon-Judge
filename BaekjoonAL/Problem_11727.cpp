#include <iostream>

#define MAX 1001

int d[MAX];

using namespace std;

int main(void) {
	int n;

	cin >> n;

	d[1] = 1;
	d[2] = 3;

	for (int i = 3; i <= n; i++) {
		d[i] = (d[i - 1] + 2 * d[i - 2]) % 10007;
	}

	cout << d[n] % 10007;

	return 0;
}