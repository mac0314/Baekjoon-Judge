#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {

	while (1) {
		string cipher;

		getline(cin, cipher);

		if (cipher.compare("END") == 0) {
			break;
		}
		else {
			/*
			for (int i = cipher.size() - 1; i >= 0; i--) {
				cout << cipher.at(i);
			}
			cout << endl;
			*/
			
			reverse(cipher.begin(), cipher.end());
			cout << cipher << endl;
		}

	}


	return 0;
}