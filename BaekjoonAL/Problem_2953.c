#include<stdio.h>

int main(void) {
	int total;
	int win;
	int a, b, c, d;
	int i, num;

	for (i = 0; i<5; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		total = a + b + c + d;
		if (i == 0) {
			win = total;
			num = i + 1;
		}
		else if (win < total) {
			win = total;
			num = i + 1;
		}
	}

	printf("%d %d\n", num, win);

	return 0;
}