#include <stdio.h>
#include <string.h>
int main() {
	char a[100] = { 0 }, s[100] = { 0 };
	int n, c = 0;

	scanf("%s", a);

	n = strlen(a);

	for (int i = 0; i<n; i++) {
		if (i == 0) {
			s[c] = a[0];
			c++;
		}
		else if (a[i] == 45) {
			i++;
			s[c] = a[i];
			c++;
		}
	}
	printf("%s\n", s);

	return 0;
}