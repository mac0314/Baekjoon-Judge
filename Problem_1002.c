#include<stdio.h>
#include<math.h>

int main() {
	int tNum = 0;
	int i;
	double x1, y1, r1, x2, y2, r2;
	double d;
	double aX, aY;
	int result;

	scanf("%d", &tNum);

	for (i = 0; i<tNum; i++) {
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		aX = x1 - x2;
		aY = y1 - y2;
		d = sqrt(aX * aX + aY * aY);

		if (d == 0)
			if (r1 == r2)
				result = -1;
			else
				result = 0;
		else if (d > (r1 + r2))
			result = 0;
		else if (d == (r1 + r2))
			result = 1;
		else {
			if (r1 > r2) {
				if (r1 > d + r2)
					result = 0;
				else if (r1 == d + r2)
					result = 1;
				else if (r1 < d + r2)
					result = 2;
			}
			else if (r1 < r2) {
				if (r2 > d + r1)
					result = 0;
				else if (r2 == d + r1)
					result = 1;
				else if (r2 < d + r1)
					result = 2;
			}
			else
				result = 2;
		}

		printf("%d\n", result);
	}

	return 0;
}