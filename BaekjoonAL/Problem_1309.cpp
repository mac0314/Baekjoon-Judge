#include<iostream>

#define HEIGHT_MAX 100001
#define WIDTH_MAX 3

int a[HEIGHT_MAX][WIDTH_MAX];
int d[HEIGHT_MAX][WIDTH_MAX];

using namespace std;

int main(void) {
	int n;

	cin >> n;


	d[0][0] = 1;

	for (int i = 1; i <= n; i++) {
		d[i][0] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2];
		d[i][1] = d[i - 1][0] + d[i - 1][2];
		d[i][2] = d[i - 1][0] + d[i - 1][1];

		for (int j = 0; j < WIDTH_MAX; j++) {
			d[i][j] %= 9901;
		}
	}

	cout << (d[n][0] + d[n][1] + d[n][2]) % 9901 << '\n';

	return 0;
}