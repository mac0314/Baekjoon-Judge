#include <iostream>
#include <cstring>
#include <stack>

#define MAX 50

using namespace std;

int main(void) {
	stack<char> charStack;

	char line[MAX];

	int testCaseNumber = 0;
	int stringLength = 0;

	cin >> testCaseNumber;


	for (int i = 0; i < testCaseNumber; i++) {
		while (!charStack.empty()) {
			charStack.pop();
		}

		cin >> line;

		stringLength = strlen(line);

		for (int j = 0; j < stringLength; j++) {

			if (j == stringLength - 1) {
				if (line[j] == ')') {
					if (charStack.size() == 1) {
						charStack.pop();
						cout << "YES" << endl;
						break;
					}

					cout << "NO" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}else {
				if (line[j] == '(') {
					charStack.push(line[j]);
				}else {
					if (charStack.empty()) {
						cout << "NO" << endl;
						break;
					}
					else {
						charStack.pop();
					}
				}
			}
		}

	}


	return 0;
}