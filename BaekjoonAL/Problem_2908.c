#include<stdio.h>

int main(void) {
	int n1[3];
	int n2[3];
	int c1;
	int c2;

	scanf("%1d%1d%1d", &n1[0], &n1[1], &n1[2]);
	scanf("%1d%1d%1d", &n2[0], &n2[1], &n2[2]);

	c1 = n1[2] * 100 + n1[1] * 10 + n1[0];
	c2 = n2[2] * 100 + n2[1] * 10 + n2[0];

	if (c1 > c2)
		printf("%d\n", c1);
	else
		printf("%d\n", c2);

	return 0;
}