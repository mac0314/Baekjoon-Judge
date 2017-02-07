#include <iostream>

using namespace std;

int main(void) {
	int n;
	int response;
	int cuteCount = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> response;

		if (response) {
			cuteCount++;
		}
	}

	if (cuteCount > (n - cuteCount)) {
		cout << "Junhee is cute!" << endl;
	}
	else {
		cout << "Junhee is not cute!" << endl;
	}

	return 0;
}