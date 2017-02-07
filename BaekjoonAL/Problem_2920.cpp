#include <iostream>

#define NOTE_MAX 8

using namespace std;

int main(void) {
	int note[NOTE_MAX];
	int check = 0;
	int previousNote = 0;
	int orientationValue = 0;

	cin >> note[0];

	if (note[0] == 1) {
		check = 1;
		orientationValue = 2;
	}
	else if(note[0] == 8){
		check = -1;
		orientationValue = 7;
	}
	else {
		cout << "mixed" << endl;
	}

	for (int i = 1; i < NOTE_MAX; i++) {
		cin >> note[i];
		
		if (note[i] != orientationValue) {
			cout << "mixed" << endl;
			return 0;
		}
		
		if (check == 1) {
			orientationValue++;
		}
		else if (check == -1) {
			orientationValue--;
		}

	}

	if (check == 1) {
		cout << "ascending" << endl;
	}
	else if (check == -1) {
		cout << "descending" << endl;
	}


	return 0;
}