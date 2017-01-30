#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	int n, f;
	int divisor;
	int rest;
	int result;


	cin >> n >> f;

	n /= 100;
	n *= 100;

	for (int i = 0; i < 100; i++) {
		rest = (n + i) % f;

		if (rest == 0) {
			result = (n + i) % 100;
			break;
		}


	}
	cout << setfill('0') << setw(2) << result << endl;

	return 0;
}