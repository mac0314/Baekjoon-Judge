#include <iostream>

#define STUDENT_MAX 30
#define PRESENT_MAX 28

using namespace std;

int main(void) {
	int check[STUDENT_MAX] = {0};

	for (int i = 0; i < PRESENT_MAX; i++) {
		int studentNum;

		cin >> studentNum;

		check[studentNum - 1]++;
	}

	for (int i = 0; i < STUDENT_MAX; i++) {
		if (check[i] == 0) {
			cout << i + 1 << endl;
		}
	}

	return 0;
}