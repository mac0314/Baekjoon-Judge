#include <iostream>


#define MAX 12


using namespace std;

int main(void) {
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		int d[MAX];

		d[1] = 1;
		d[2] = 2;
		d[3] = 4;

		for (int i = 4; i <= n; i++) {
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		}

		cout << d[n] << endl;	
	}

	return 0;
}