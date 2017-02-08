#include <iostream>

using namespace std;

int main(void) {
	int t;
	int candyNum;
	int brotherNum;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int quotient;
		int remainder;

		cin >> candyNum >> brotherNum;

		quotient = candyNum / brotherNum;
		remainder = candyNum % brotherNum;

		cout << "You get " << quotient << " piece(s) and your dad gets " << remainder << " piece(s)." << endl;
	}
	
	return 0;
}