#include <iostream>

using namespace std;

int main(void) {
	int a, b, v;
	int currentPosition = 0;
	int restDay = 0;

	cin >> a >> b >> v;

	while (1) {
		restDay++;
		currentPosition += a;

		if (currentPosition >= v) {
			break;
		}

		currentPosition -= b;
	}

	cout << restDay << endl;
}