#include <stdio.h>
#include <string.h>

#define MAX 51

int main()
{
	char changingOrder[MAX];
	int ballPosition = 1;
	int i;

	scanf("%s", &changingOrder);

	for (i = 0; i < strlen(changingOrder); i++) {
		switch (changingOrder[i])
		{
		case 'A':
			if (ballPosition == 1)
				ballPosition = 2;
			else if (ballPosition == 2)
				ballPosition = 1;
			break;
		case 'B':
			if (ballPosition == 2)
				ballPosition = 3;
			else if (ballPosition == 3)
				ballPosition = 2;
			break;
		case 'C':
			if (ballPosition == 3)
				ballPosition = 1;
			else if (ballPosition == 1)
				ballPosition = 3;
		default:
			break;
		}

	}

	printf("%d", ballPosition);

	return 0;
}