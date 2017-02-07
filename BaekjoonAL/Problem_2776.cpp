#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;

int main(void) {
	int testCaseNumber;
	int noteOneNumber;
	int noteTwoNumber;
	vector<int> noteOne;


	scanf("%d", &testCaseNumber);

	for (int i = 0; i < testCaseNumber; i++) {
		scanf("%d", &noteOneNumber);

		int temp = 0;
		noteOne.clear();

		for (int j = 0; j < noteOneNumber; j++) {
			scanf("%d", &temp);
			noteOne.push_back(temp);
		}

		sort(noteOne.begin(), noteOne.end());

		scanf("%d", &noteTwoNumber);

		for (int j = 0; j < noteTwoNumber; j++) {
			scanf("%d", &temp);

			if (binary_search(noteOne.begin(), noteOne.end(), temp)) {
				puts("1");
			}
			else {
				puts("0");
			}
		}

	}



	return 0;
}