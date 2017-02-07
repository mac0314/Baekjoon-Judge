#include <iostream>
#include <string>

#define ALPHABET_MAX 26

using namespace std;

int main(void) {
	string word;
	int position[ALPHABET_MAX];
	int check[ALPHABET_MAX];

	for (int i = 0; i < ALPHABET_MAX; i++) {
		position[i] = -1;
		check[i] = 0;
	}

	getline(cin, word);

	for (string::iterator it = word.begin(); it != word.end(); it++) {
		int idx = *it - 97;
		
		//cout << "idx : " << idx << endl;
		
		if (check[idx] == 0) {
			position[idx] = distance(word.begin(), it);
			check[idx] = -1;
		}
	}

	for (int i = 0; i < ALPHABET_MAX; i++) {
		cout << position[i] << " ";
	}
	cout << endl;


	return 0;
}