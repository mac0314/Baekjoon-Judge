#include<stdio.h>

#define MAX 6

int main(void) {
	int fullSet[MAX] = { 1, 1, 2, 2, 2, 8 };
	int userSet[MAX] = { 0 };
	int setNeeded[MAX] = { 0 };
	int i;

	for (i = 0; i < MAX; i++) {
		scanf("%d", &userSet[i]);
		setNeeded[i] = fullSet[i] - userSet[i];
	}

	for (i = 0; i < MAX; i++) {
		printf("%d ", setNeeded[i]);
	}

	return 0;
}