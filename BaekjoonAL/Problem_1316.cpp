#include <iostream>
#include <cstring>

#define STRING_MAX 101
#define ALPHABET_MAX 26

using namespace std;

int main(void) {
	int n = 0;
	int idx = 0;
	int lastIdx = 0;
	int count = 0;
	int check[ALPHABET_MAX];
	char word[STRING_MAX];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word;


		// Initialize
		idx = 0;
		lastIdx = 0;
		for (int j = 0; j < ALPHABET_MAX; j++) {
			check[j] = 0;
		}


		int length = strlen(word);
		for (int j = 0; j < length; j++) {
			int idx = word[j] - 97;

			if (check[idx] >= 1 && word[j] == word[j - 1]) {
				continue;
			}
			else {
				check[idx]++;
			}


		}


		for (int j = 0; j < ALPHABET_MAX; j++) {
			if (check[j] >= 2) {
				count++; // Not group number
				break;
			}
		}


	}

	cout << n - count << endl;


	return 0;
}