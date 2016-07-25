#include<stdio.h>

int main(void) {
	int i, num, input, maxNum, minNum;

	scanf("%d", &num);

	for (i = 0; i<num; i++) {
		scanf("%d", &input);
		if (i == 0) {
			maxNum = minNum = input;
		}
		if (maxNum < input)
			maxNum = input;
		if (minNum > input)
			minNum = input;
	}

	printf("%d %d\n", minNum, maxNum);

	return 0;
}