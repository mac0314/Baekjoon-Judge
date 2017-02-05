#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	int testCaseNumber = 0;

	cin >> testCaseNumber;

	for (int i = 0; i < testCaseNumber; i++) {
		int studentNumber = 0;
		int averageScore = 0;
		int upperCount = 0;
		float upperPercent = 0;
		int* studentScore;
		
		cin >> studentNumber;

		studentScore = new int[studentNumber + 1];

		for (int j = 0; j < studentNumber; j++) {
			cin >> studentScore[j];
			averageScore += studentScore[j];
		}
		averageScore /= studentNumber;

		for (int j = 0; j < studentNumber; j++) {
			if (studentScore[j] > averageScore) {
				upperCount++;
			}
		}

		upperPercent = ((float)upperCount / studentNumber) * 100;

		cout << fixed;
		cout.precision(3);
		cout.setf(ios::showpoint); // 끝의 0을 표시
		cout << upperPercent << "%" << endl;

		studentScore[studentNumber] = '\0';

		delete[] studentScore;
	}

	return 0;
}