#include<stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d\n", &a, &b, &c);

	if (a<1 || a>100)
		return 1;
	else if (b<1 || b>100)
		return 1;
	else if (c<1 || c>100)
		return 1;

	if (a>b)
		if (b >= c)
			printf("%d\n", b);
		else
			if (a>c)
				printf("%d\n", c);
			else
				printf("%d\n", a);
	else if (a<b)
		if (b>c)
			if (a>c)
				printf("%d\n", a);
			else
				printf("%d\n", c);
		else
			printf("%d\n", b);
	else
		printf("%d\n", b);

	return 0;
}