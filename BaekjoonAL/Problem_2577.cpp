#include <iostream>
#include <cstring>

#define NUMBER_MAX 10

using namespace std;

int main(void) {
	int a, b, c;
	int i = 0;
	int maxIdx;
	long long int result;
	int nArray[NUMBER_MAX] = {0};
	char cArray[NUMBER_MAX];

	cin >> a >> b >> c;

	result = a * b * c;

	//cout << result << endl;

	sprintf(cArray, "%d", result);

	//cout << "cArray : " << cArray << endl;

	maxIdx = strlen(cArray);

	//cout << "maxIdx : " << maxIdx << endl;

	for (int i = 0; i < NUMBER_MAX; i++) {
		//cout << cArray[i] << endl;
	}

	for (int i = 0; i < maxIdx; i++) {
		int idx = cArray[i] - 48; // char to int

		//cout << idx << endl;
		nArray[idx]++;
	}

	for (int i = 0; i < NUMBER_MAX; i++) {
		cout << nArray[i] << endl;
	}

	return 0;
}
