#include <stdio.h>
#include <string.h>

int main() {
	char input[101] = { 0 };
	char str[100][101] = { 0 };
	int i, j, n;

	scanf("%s", input);

	n = strlen(input);

	for (i = 0, j = 0; i < n; i++) {
		if (i != 0 && i % 10 == 0) {
			j++;
		}
		str[j][i % 10] = input[i];
	}

	n = ++j;

	for (i = 0; i < n; i++) {
		printf("%s\n", str[i]);
	}

	return 0;
}