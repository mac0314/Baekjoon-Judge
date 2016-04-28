#include<stdio.h>

enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
	int x, y, i, day, totalDay = 0;

	scanf("%d %d", &x, &y);



	for (i = 1; i<x; i++) {
		if (i == 4 || i == 6 || i == 9 || i == 11)
			totalDay += 30;
		else if (i == 2)
			totalDay += 28;
		else
			totalDay += 31;
	}
	totalDay += y;

	day = totalDay % 7;

	switch (day) {
	case MON:
		printf("MON\n");
		break;
	case TUE:
		printf("TUE\n");
		break;
	case WED:
		printf("WED\n");
		break;
	case THU:
		printf("THU\n");
		break;
	case FRI:
		printf("FRI\n");
		break;
	case SAT:
		printf("SAT\n");
		break;
	case SUN:
		printf("SUN\n");
		break;
	}

	return 0;
}