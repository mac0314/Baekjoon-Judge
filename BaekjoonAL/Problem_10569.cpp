#include <iostream>

using namespace std;

int main(void) {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int v, e;
		int sideNum;

		cin >> v >> e;

		sideNum = 2 - v + e;

		cout << sideNum << endl;
	}

	return 0;
}