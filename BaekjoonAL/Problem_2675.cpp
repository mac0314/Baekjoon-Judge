#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int testCaseNumber;
	int repetitionNumber;
	string inputText;

	cin >> testCaseNumber;

	for (int i = 0; i < testCaseNumber; i++) {
		cin >> repetitionNumber;
		
		cin.clear();

		getline(cin, inputText);
		
		for (int j = inputText.size() - 1; j > 0; j--) {
			//cout << "j : " << j << endl;
			string c = "";
			for (int k = 0; k < repetitionNumber - 1; k++) {
				c += inputText.at(j);
			}
			//cout << "c : " << c << endl;
			//cout << "before : " << inputText << endl;
			inputText.insert(j, c);
			//cout << "after : " << inputText << endl;
		}

		inputText = inputText.substr(1);

		//cout << "N : " << repetitionNumber << ", text : " << inputText << endl;
		cout << inputText << endl;

		inputText.clear();
	}


	return 0;
}

