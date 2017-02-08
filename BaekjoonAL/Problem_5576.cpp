#include <iostream>
#include <algorithm>
#include <functional>

#define STUDENT_MAX 10
#define STUDENT_SUM_MAX 3

using namespace std;

int main(void) {
	int w[STUDENT_MAX] = {0};
	int k[STUDENT_MAX] = {0};
	int wResult = 0;
	int kResult = 0;

	for (int i = 0; i < STUDENT_MAX; i++) {
		cin >> w[i];
	}

	sort(&w[0], &w[STUDENT_MAX], greater<int>());

	for (int i = 0; i < STUDENT_MAX; i++) {
		cin >> k[i];
	}

	sort(&k[0], &k[STUDENT_MAX], greater<int>());

	for (int i = 0; i < STUDENT_SUM_MAX; i++) {
		wResult += w[i];
		kResult += k[i];
	}

	cout << wResult << " " << kResult << endl;

	return 0;
}