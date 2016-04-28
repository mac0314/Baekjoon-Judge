#include<stdio.h>

int main(void) {
	int i, num;
	int total = 0;
	int temp;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%1d", &temp);
		total += temp;
	}
	printf("%d\n", total);

	return 0;
}