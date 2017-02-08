#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	
	while (1){
		string line;

		getline(cin, line);

		if (line.compare("EOI") == 0) {
			break;
		}

		transform(line.begin(), line.end(), line.begin(), ::toupper);
		//cout << "find : " << line.find("NEMO") << endl;
		//cout << "npos : " << string::npos << endl;
		if (line.find("NEMO") == string::npos) {
			cout << "Missing" << endl;
		}
		else {
			cout << "Found" << endl;
		}
	}

	return 0;
}