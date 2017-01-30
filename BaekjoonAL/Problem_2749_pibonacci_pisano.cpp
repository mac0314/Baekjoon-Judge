#include <iostream>

const int MOD = 1000000;
const int PISANO_PERIOD = MOD / 10 * 15;

int fibonacci[PISANO_PERIOD] = { 0, 1 };

using namespace std;

// https://www.acmicpc.net/blog/view/28
int main(void) {
	long long number = 0;

	cin >> number;
	
	for (int i = 2; i < PISANO_PERIOD; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		fibonacci[i] %= MOD;
	}

	cout << fibonacci[number % PISANO_PERIOD] << endl;

	return 0;
}