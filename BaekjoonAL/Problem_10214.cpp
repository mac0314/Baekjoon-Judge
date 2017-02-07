#include <iostream>

#define INNING_MAX 9

using namespace std;

int main(void) {
	int t;
	
	cin >> t;

	for (int i = 0; i < t; i++) {
		int yResult = 0, kResult = 0;

		for (int j = 0; j < INNING_MAX; j++){
			int y, k;

			cin >> y >> k;
		
			yResult += y;
			kResult += k;
		}

		if (yResult > kResult) {
			cout << "Yonsei" << endl;
		}
		else if (yResult < kResult) {
			cout << "Korea" << endl;
		}
		else {
			cout << "Draw" << endl;
		}
	}

	return 0;
}