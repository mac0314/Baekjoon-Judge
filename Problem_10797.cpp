#include <iostream>

#define CAR_NUM_MAX 5

using namespace std;
int main(void) {
	int day;
	int car[CAR_NUM_MAX] = { 0 };
	int i, illegalCount = 0;

	cin >> day;

	for (i = 0; i < CAR_NUM_MAX; i++) {
		cin >> car[i];
		if (day == car[i]) {
			illegalCount++;
		}
	}

	cout << illegalCount <<endl;

	return 0;
}