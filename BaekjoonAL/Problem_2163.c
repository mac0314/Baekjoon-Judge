#include<stdio.h>

int main(void) {

	int n, m;
	int cutCount = 0;

	scanf("%d %d", &n, &m);

	if (n >= m) {
		cutCount = n - 1 + (m - 1) * n;
	}
	else {
		cutCount = m - 1 + (n - 1) * m;
	}

	printf("%d", cutCount);

	return 0;
}