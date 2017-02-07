#include <iostream>

using namespace std;

int main(void) {
	int n;
	int cResult = 100, sResult = 100;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int c, s;

		cin >> c >> s;

		if (c > s) {
			sResult -= c;
		}
		else if (c < s) {
			cResult -= s;
		}
	}

	cout << cResult << endl;
	cout << sResult << endl;

	return 0;
}