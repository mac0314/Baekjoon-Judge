#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAX 26

int main(void) {
	char str[1000001];
	int alphabetCount[MAX] = { 0 };
	int freqCount;
	int freqIdx;
	int len;
	int i;
	bool sameCount = false;
	char result;

	scanf("%s", &str);

	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] < 97) {
			alphabetCount[str[i] - 65]++;
		}
		else {
			alphabetCount[str[i] - 97]++;
		}
	}

	freqCount = alphabetCount[0];
	for (i = 1; i < MAX; i++) {
		if (freqCount < alphabetCount[i]) {
			freqCount = alphabetCount[i];
			freqIdx = i;
			sameCount = false;
		}
		else if (freqCount == alphabetCount[i]) {
			sameCount = true;
		}
	}

	if (sameCount) {
		printf("?\n");
	}
	else {
		printf("%c", freqIdx + 65);
	}

	return 0;
}