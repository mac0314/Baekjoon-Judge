#include <stdio.h>
#include <string.h>

#define MAX 101

int main()
{
	char input[MAX] = { 0 };
	int i;

	gets(input);

	for (i = 0; i < strlen(input); i++) {
		if (input[i] >= 65 && input[i] < 78 || input[i] >= 97 && input[i] < 110) {
			input[i] += 13;
		}
		else if (input[i] >= 78 && input[i] <= 90 || input[i] >= 110 && input[i] <= 122) {
			input[i] -= 13;
		}
	}

	printf("%s", input);

	return 0;
}