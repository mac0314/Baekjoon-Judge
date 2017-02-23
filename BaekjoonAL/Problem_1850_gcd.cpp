#include <iostream>


using namespace std;

long long int getGCD(long long int a, long long int b);

int main(void) {
	long long int a, b;
	long long int gcd;

	cin >> a >> b;

	gcd = getGCD(a, b);

	for (int i = 0; i < gcd; i++) {
		cout << "1";
	}
	cout << endl;

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