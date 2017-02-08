#include <iostream>
#include <cstring>
#include <algorithm>
#include <functional>

#define STRING_MAX 1000000
#define ALPHABET_MAX 26

using namespace std;

char input[STRING_MAX];

int main(void) {
	int t;
	int a, b;
	int mapping[ALPHABET_MAX];

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		cin.ignore();
		cin.clear();

		for (int j = 0; j < ALPHABET_MAX; j++) {
			char temp = j + 65;

			int x = temp - 65;
			int e = (a * x + b) % 26;

			mapping[j] = e;

		}

		cin >> input;

		int inputLength = strlen(input);

		for (int j = 0; j < inputLength; j++) {
			char cx = input[j];
			int x = cx - 65;
			
			input[j] = (char)(mapping[x] + 65);
		}

		cout << input << endl;
	}


	return 0;
}