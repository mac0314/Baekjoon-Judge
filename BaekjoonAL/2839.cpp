#include <iostream>


using namespace std;

int main(void) {
	int n = 0;
	int bagNumber = 0;

	cin >> n;

	if (n >= 5) {
		bagNumber += n / 5;
		n = n % 5;
	}

	if (n >= 3) {
		bagNumber += n / 3;
		n = n % 3;
	}

	if (n == 0) {
		cout << bagNumber << endl;
	}
	else {
		cout << -1 << endl;
	}


	return 0;
}