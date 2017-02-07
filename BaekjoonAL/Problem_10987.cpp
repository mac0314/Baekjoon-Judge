#include <iostream>
#include <cstring>

#define WORD_MAX 101

using namespace std;

int main(void) {
	char word[WORD_MAX];
	int maxIdx = 0;
	int vowelCount = 0;

	cin >> word;

	maxIdx = strlen(word);

	for (int i = 0; i < maxIdx; i++) {
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
			vowelCount++;
		}
	}

	cout << vowelCount << endl;

	return 0;
}