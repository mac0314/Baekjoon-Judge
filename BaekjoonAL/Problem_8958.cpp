#include <iostream>
#include <cstring>


#define INPUT_MAX 80

using namespace std;

int main(void) {
	int testCaseNumber;
	int matchScore = 0;
	int totalScore = 0;
	char input[INPUT_MAX];

	cin >> testCaseNumber;

	for (int i = 0; i < testCaseNumber; i++) {
		cin >> input;

		int inputLength = strlen(input);

		for (int j = 0; j < inputLength; j++) {
			if (input[j] == 'O') {
				matchScore++;
				totalScore += matchScore;
			}
			else {
				matchScore = 0;
			}
		}

		cout << totalScore << endl;

		matchScore = 0;
		totalScore = 0;
	}



	return 0;
}