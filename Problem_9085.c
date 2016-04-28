#include<stdio.h>

int main(void) {

	int testCaseNum;
	int num;
	int** numArr;
	int i, j;
	int sum = 0;

	scanf("%d", &testCaseNum);

	numArr = (int**)malloc(sizeof(int*) * testCaseNum);

	for (i = 0; i < testCaseNum; i++) {
		scanf("%d", &num);

		numArr[i] = (int*)malloc(sizeof(int) * num);

		for (j = 0; j < num; j++) {
			scanf("%d", &numArr[i][j]);
		}

		for (j = 0; j < num; j++) {
			sum += numArr[i][j];
		}

		printf("%d\n", sum);
		sum = 0;
	}

	for (i = 0; i < testCaseNum; i++) {
		free(numArr[i]);
	}
	free(numArr);

	return 0;
}