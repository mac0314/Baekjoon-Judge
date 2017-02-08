#include <iostream>
#include <cstring>

#define ALPHABET_MAX 26
#define INPUT_MAX 1001

using namespace std;

int main(void) {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		char input[INPUT_MAX];
		int check[ALPHABET_MAX] = {0};
		int inputLength = 0;
		int result = 0;

		cin >> input;

		inputLength = strlen(input);

		for (int j = 0; j < inputLength; j++) {
			int idx = input[j] - 65;

			check[idx]++;
		}

		for (int j = 0; j < ALPHABET_MAX; j++) {
			if (check[j] == 0) {
				result += (j + 65);
			}
		}

		cout << result << endl;
	}



	return 0;
}