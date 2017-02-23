#include <iostream>

using namespace std;

long long int getGCD(long long int a, long long int b);

int main(void) {
	long long int a, b;
	long long int gcd;
	long long int tempA, tempB;
	long long int lcm;

	cin >> a >> b;

	gcd = getGCD(a, b);

	tempA = a / gcd;
	tempB = b / gcd;

	lcm = gcd * tempA * tempB;

	cout << lcm << endl;

	return 0;
}

long long int getGCD(long long int a, long long int b) {
	if (b == 0) {
		return a;
	}
	else {
		return getGCD(b, a % b);
	}
}