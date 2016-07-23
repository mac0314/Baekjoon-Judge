#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int* opCount;

int main()
{
	int num;
	int minOpCount;

	scanf("%d", &num);

	opCount = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		opCount[i] = -1;
	}

	minOpCount = RecursiveMethod(num);

	printf("%d", minOpCount);

	//free(opCount);

	system("pause");
	return 0;
}

int RecursiveMethod(int num) {

	if (num == 0) {
		return 0;
	}

	if (opCount[num - 1] > 0) {
		return opCount[num - 1];
	}

	opCount[num - 1] = RecursiveMethod(num - 1) + 1;

	if (opCount[num - 1] % 3 == 0) {
		int temp = RecursiveMethod(num / 3) + 1;

		if (opCount[num - 1] > temp)
			opCount[num - 1] = temp;
	}
	else if (opCount[num - 1] % 2 == 0) {
		int temp = RecursiveMethod(num / 2) + 1;

		if (opCount[num - 1] > temp)
			opCount[num - 1] = temp;
	}

	return opCount[num - 1];
}
