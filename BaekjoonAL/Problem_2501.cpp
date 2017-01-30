#include <iostream>


using namespace std;

int main(void) {
	int* nFactor;
	int n, k;
	int divisor;
	int count = 0;
	int kthValue = 0;

	cin >> n >> k;

	nFactor = new int[n + 1];

	for (int i = 0; i < n; i++) {
		divisor = i + 1;
		nFactor[i] = n % divisor;
		//cout << nFactor[i];
		if (nFactor[i] == 0) {
			count++;
			if (count == k) {
				kthValue = divisor;
				break;
			}
		}
	}
	nFactor[n] = '\0';

	cout << kthValue << endl;
	

	delete[] nFactor;

	return 0;
}