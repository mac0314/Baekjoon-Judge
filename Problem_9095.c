#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int countArr[MAX];

int CountMethod(int num) {
	int count = 0;

	if (num > 1) {
		if (countArr[num - 1] == -1) {
			countArr[num - 1] = CountMethod(num - 1);
		}
		count += countArr[num - 1];
	}

	if (num > 2) {
		if (countArr[num - 2] == -1) {
			countArr[num - 2] = CountMethod(num - 2);
		}
		count += countArr[num - 2];
	}

	if (num > 3) {
		if (countArr[num - 3] == -1) {
			countArr[num - 3] = CountMethod(num - 3);
		}
		count += countArr[num - 3];
	}

	return count;
}

int main()
{
	int testCaseNum;
	int* num;
	int methodNum = 1;
	int i, j;

	scanf("%d", &testCaseNum);

	num = (int*)malloc(sizeof(int) * testCaseNum);

	for (i = 0; i < testCaseNum; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < testCaseNum; i++) {

		for (j = 0; j < MAX; j++) {
			countArr[j] = -1;
		}

		countArr[0] = 1;
		countArr[1] = 1;
		countArr[2] = 2;
		countArr[3] = 4;

		if (num[i] == 1) {
			printf("1\n");
		}
		else if (num[i] == 2) {
			printf("2\n");
		}
		else if (num[i] == 3) {
			printf("4\n");
		}
		else {
			methodNum = CountMethod(num[i]);
			printf("%d\n", methodNum);
		}
	}

	return 0;
}