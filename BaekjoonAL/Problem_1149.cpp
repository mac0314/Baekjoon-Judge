#include <iostream>
#include <algorithm>

#define MAX 1001
#define RGB 3

using namespace std;
int a[MAX][RGB];
int d[MAX][RGB];

int main(void) {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < RGB; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
	}

	cout << min({ d[n][0], d[n][1], d[n][2] }) << endl;


	return 0;
}