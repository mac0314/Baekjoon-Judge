#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define CASE_MAX 10
#define TEXT_MAX 101


char str[CASE_MAX][TEXT_MAX];


int main(void) {
	int testCaseNum;
	int i, j;

	scanf("%d", &testCaseNum);

	for (i = 0; i < testCaseNum; i++) {
		scanf("%s", &str[i]);

		char temp[TEXT_MAX];
		char tempCh;
		int targetIdx = -1;
		int lastIdx = strlen(str[i]) - 1;
		int sameCount = 0;

		for (j = 0; j < lastIdx; j++) {
			if (str[i][j] < str[i][j + 1]) {
				if (tempCh = "") {
					tempCh = str[i][j];
					targetIdx = j;
				}
				if (str[i][j] >= tempCh) {
					tempCh = str[i][j];
					targetIdx = j;
				}
			}
		}

		if (targetIdx == -1) {
			continue;
		}

		for (j = lastIdx; j > targetIdx; j--) {
			if (str[i][targetIdx] < str[i][j]) {
				char temp;
				// swap
				temp = str[i][targetIdx];
				str[i][targetIdx] = str[i][j];
				str[i][j] = temp;

				break;
			}
		}

		strcpy(&temp, &str[i]);

		for (j = 1; j + targetIdx <= lastIdx; j++) {
			str[i][j + targetIdx] = temp[lastIdx + 1 - j];
		}
	}

	for (i = 0; i < testCaseNum; i++) {
		printf("%s\n", str[i]);
	}

	return 0;
}