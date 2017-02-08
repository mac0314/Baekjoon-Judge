#include <iostream>


using namespace std;

int calcFactorial(int n);

int main(void) {
	int n;

	cin >> n;

	cout << calcFactorial(n) << endl;

	return 0;
}

int calcFactorial(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 0) {
		return 1;
	}
	return n * calcFactorial(n - 1);
}