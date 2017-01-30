#include <iostream>

using namespace std;

int gcd(int a, int b);

int main(void) {
	int testCaseNumber = 0;
	int a = 0, b = 0;
	int gcdValue;
	int result = 0;


	cin >> testCaseNumber;

	for (int i = 0; i < testCaseNumber; i++) {
		cin >> a >> b;

		gcdValue = gcd(a, b);

		// least common multiple (LCM)
		result = (a / gcdValue) * (b / gcdValue) * gcdValue;

		cout << result << endl;
	}

	return 0;
}


// Get the greatest common denominator (GCD)
int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}