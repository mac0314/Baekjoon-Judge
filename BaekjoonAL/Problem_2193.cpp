#include <iostream>

#define MAX 91

long long d[MAX][3];

using namespace std;

int main(void) {
	int n;

	cin >> n;

	d[1][0] = 0;
	d[1][1] = 1;

	for (int i = 2; i <= n; i++) {
		d[i][0] = d[i - 1][0] + d[i - 1][1];
		d[i][1] = d[i - 1][0];
	}

	long long result = d[n][0] + d[n][1];

	printf("%lld\n", result);


	return 0;
}