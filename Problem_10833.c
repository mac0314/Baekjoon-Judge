#include<stdio.h>

#define MAX 100

int main(void) {
	int schoolNum;
	int schoolStudent[MAX] = { 0 };
	int appleNum[MAX] = { 0 };
	int remainder = 0;
	int i;

	scanf("%d", &schoolNum);

	for (i = 0; i < schoolNum; i++) {
		scanf("%d %d", &schoolStudent[i], &appleNum[i]);
	}

	for (i = 0; i < schoolNum; i++) {
		remainder += appleNum[i] % schoolStudent[i];
	}

	printf("%d", remainder);

	return 0;
}
