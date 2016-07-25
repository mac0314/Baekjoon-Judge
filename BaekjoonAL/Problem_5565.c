#include<stdio.h>

int main(void) {
	int totalCost;
	int bookCost[10] = { 0 };
	int num = 9;
	int i, result;

	scanf("%d", &totalCost);

	result = totalCost;

	for (i = 0; i < num; i++) {
		scanf("%d", &bookCost[i]);
		result -= bookCost[i];
	}

	printf("%d", result);

	return 0;
}