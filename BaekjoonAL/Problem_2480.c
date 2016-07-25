#include<stdio.h>

#define MAX 3

int main(void) {
	int dice[MAX];
	int count = 1;
	int i, j;
	int sameNum = 0;
	int highNum = 0;
	int reward = 0;

	scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

	for (i = 0; i < MAX; i++) {
		for (j = i + 1; j < MAX; j++) {
			if ((dice[i] == dice[j]) && count != 3) {
				count++;
				sameNum = dice[i];
			}
		}
	}

	switch (count)
	{
	case 1:
		for (i = 0, highNum = dice[0]; i < MAX; i++) {
			for (j = i + 1; j < MAX; j++) {
				if (highNum < dice[j])
					highNum = dice[j];
			}
		}
		reward = highNum * 100;
		break;
	case 2:
		reward = 1000 + sameNum * 100;
		break;
	case 3:
		reward = 10000 + sameNum * 1000;
		break;
	default:
		break;
	}

	printf("%d", reward);

	return 0;
}
