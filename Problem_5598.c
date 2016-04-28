#include <stdio.h>
#include <string.h>

#define MAX 1001

int main()
{
	char input[MAX];
	int backNum;
	int i;

	scanf("%s", &input);

	for (i = 0; i < strlen(input); i++) {
		if (input[i] <= 67) {
			input[i] += 23;
		}
		else {
			input[i] -= 3;
		}
	}

	printf("%s", input);

	return 0;
}