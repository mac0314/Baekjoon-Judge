#include<stdio.h>

int main() {
	int s[5];
	int average;
	int total = 0;
	int i;

	for (i = 0; i < 5; i++) {
		scanf("%d", &s[i]);
	}

	for (i = 0; i < 5; i++) {
		if (s[i] < 40)
			s[i] = 40;

		total += s[i];
	}
	average = total / 5;

	printf("%d\n", average);

	return 0;
}