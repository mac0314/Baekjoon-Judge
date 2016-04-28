#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int testCaseNum;
	int* totalCost;
	int carCost;
	int optionTotalNum;
	int* optionNum;
	int* optionCost;
	int i, j;

	scanf("%d", &testCaseNum);

	totalCost = (int*)malloc(sizeof(int) * testCaseNum);

	for (i = 0; i < testCaseNum; i++) {
		scanf("%d", &carCost);

		scanf("%d", &optionTotalNum);

		optionNum = (int*)malloc(sizeof(int) * optionTotalNum);
		optionCost = (int*)malloc(sizeof(int) * optionTotalNum);

		totalCost[i] = carCost;
		if (optionTotalNum == 0) {

		}
		else {
			for (j = 0; j < optionTotalNum; j++) {
				scanf("%d %d", &optionNum[j], &optionCost[j]);
				totalCost[i] += optionNum[j] * optionCost[j];
			}
		}

		free(optionNum);
		free(optionCost);
	}

	for (i = 0; i < testCaseNum; i++) {
		printf("%d\n", totalCost[i]);
	}

	free(totalCost);

	return 0;
}

