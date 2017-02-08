#include <iostream>

#define STUDENT_MAX 2
#define SUBJECT_MAX 4

using namespace std;

int main(void) {
	int subject[STUDENT_MAX][SUBJECT_MAX];
	int totalGrade[STUDENT_MAX] = { 0 };
	int maxIdx = 0;

	for (int i = 0; i < STUDENT_MAX; i++) {
		for (int j = 0; j < SUBJECT_MAX; j++) {
			cin >> subject[i][j];

			totalGrade[i] += subject[i][j];
		}

		if (totalGrade[maxIdx] < totalGrade[i]) {
			maxIdx = i;
		}
	}

	cout << totalGrade[maxIdx] << endl;
	


	return 0;
}