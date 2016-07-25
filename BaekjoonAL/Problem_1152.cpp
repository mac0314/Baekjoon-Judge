#include <iostream>

#define STR_MAX 1000001

char str[STR_MAX];

using namespace std;

int main(void) {
	
	int count = 0;
	int i;
	bool word = false;


	cin.getline(str, STR_MAX);

	//cout << str << endl;

	for (i = 0; str[i] != NULL; i++) {
		if (str[i] != ' ') {
			if (!word) {
				count++;
			}
			word = true;
		}else {
			word = false;
		}
	}

	cout << count << endl;

	return 0;
}