#include <iostream>

using namespace std;

int main(void) {
	int n, k;
	float result = 1;

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		result *= ((float)(n - i) / (k - i));
		//cout << result << endl;
	}

	cout << result << endl;

	return 0;
}