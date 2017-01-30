#include <iostream>
#include <cstring>

#define MAX 50

using namespace std;

int main(void) {
	int computerNumber = 0;
	char computerName[MAX] = "";

	cin >> computerNumber;

	for (int i = 0; i < computerNumber; i++) {
		cin >> computerName;


		for (int j = 0; j < strlen(computerName); j++) {

			char nextChar = computerName[j];
			if (nextChar == 90) {
				// if character is Z
				nextChar = 65;
			}
			else {
				nextChar += 1;
			}
			computerName[j] = nextChar;
		}

		cout << "String #" << i + 1 << endl;
		cout << computerName << endl;
		cout << endl;
	}



	return 0;
}