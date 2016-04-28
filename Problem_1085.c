#include <stdio.h>
#include <math.h>

#define min(a, b) (a > b ? b : a)
#define calc(c, d) (2*c < d ? c : d-c)

int main(void) {

	int x, y, w, h;
	int temp;
	int minDistance;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	minDistance = min(calc(y, h), calc(x, w));

	printf("%d", minDistance);

	return 0;
}