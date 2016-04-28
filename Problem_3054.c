#include<stdio.h>

int main(void) {
	char str[20];
	int i, j, num;

	scanf("%s", str);

	num = strlen(str);

	for (i = 0; i < 5; i++) {
		for (j = 0; j < num; j++) {
			switch (i + 1)
			{
			case 1:
				printf(".");
				break;
			case 2:
				printf(".");
				break;
			case 3:
				if ((j + 1) % 3 == 0 || ((j + 1) % 3 == 1 && (j + 1) != 1))
					printf("*", str[j]);
				else
					printf("#", str[j]);
				break;
			case 4:
				printf(".");
				break;
			case 5:
				printf(".");
				break;
			}

			if ((j + 1) % 3 == 0) {
				switch (i + 1)
				{
				case 1:
					printf(".*.");
					break;
				case 2:
					printf("*.*");
					break;
				case 3:
					printf(".%c.", str[j]);
					break;
				case 4:
					printf("*.*");
					break;
				case 5:
					printf(".*.");
					break;
				}
			}
			else {
				switch (i + 1)
				{
				case 1:
					printf(".#.");
					break;
				case 2:
					printf("#.#");
					break;
				case 3:
					printf(".%c.", str[j]);
					break;
				case 4:
					printf("#.#");
					break;
				case 5:
					printf(".#.");
					break;
				}
			}
			if ((j + 1) == num) {
				switch (i + 1)
				{
				case 1:
					printf(".");
					break;
				case 2:
					printf(".");
					break;
				case 3:
					if ((j + 1) % 3 == 0)
						printf("*", str[j]);
					else
						printf("#", str[j]);
					break;
				case 4:
					printf(".");
					break;
				case 5:
					printf(".");
					break;
				}
				printf("\n");
			}
		}
	}
	return 0;
}