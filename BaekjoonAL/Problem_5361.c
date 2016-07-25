#include<stdio.h>

int main(void) {
	int testCaseNum;
	int a[20], b[20], c[20], d[20], e[20];
	int i;
	float totalCost[20] = { 0 };

	scanf("%d", &testCaseNum);

	for (i = 0; i < testCaseNum; i++) {
		scanf("%d %d %d %d %d", &a[i], &b[i], &c[i], &d[i], &e[i]);
	}

	for (i = 0; i < testCaseNum; i++) {
		totalCost[i] = (float)a[i] * 350.34f + (float)b[i] * 230.90f + (float)c[i] * 190.55f + (float)d[i] * 125.30f + (float)e[i] * 180.90f;
		printf("$%.2f\n", totalCost[i]);
	}

	return 0;
}