#include<stdio.h>

int main() {

	int i, n, x, nth;
	
	scanf("%d %d\n", &n, &x);

	for (i = 0; i<n; i++) {
		scanf("%d ", &nth);
		if (nth < x)
			printf("%d ", nth);
	}

	return 0;
}