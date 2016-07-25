#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(void) {
	int matchNum;
	int width;
	int height;
	double diagonal = 0;
	int* matchLen;
	bool* IsMatchInBox;
	int i;

	scanf("%d %d %d", &matchNum, &width, &height);

	diagonal = sqrt((double)width * width + (double)height * height);

	matchLen = (int*)malloc(sizeof(int) * matchNum);
	IsMatchInBox = (bool*)malloc(sizeof(bool) * matchNum);

	for (i = 0; i < matchNum; i++) {
		scanf("%d", &matchLen[i]);
	}

	for (i = 0; i < matchNum; i++) {
		if (diagonal >= matchLen[i]) {
			IsMatchInBox[i] = true;
		}
		else {
			IsMatchInBox[i] = false;
		}
	}

	for (i = 0; i < matchNum; i++) {
		if (IsMatchInBox[i]) {
			printf("DA\n");
		}
		else {
			printf("NE\n");
		}
	}

	free(IsMatchInBox);
	free(matchLen);

	return 0;
}