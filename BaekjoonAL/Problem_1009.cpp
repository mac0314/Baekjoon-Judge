#include <iostream>
#include <cmath>


using namespace std;

//1 1
//2 4 8 16 32 
//3 9 27 81 273
//4 16 64
//5 25
//6 36
//7 49 343 2401 16807
//8 64 512 4096 32768
//9 81 729

int list[10][4] = { {}, {1}, {6, 2, 4, 8}, {1, 3, 9, 7}, {6, 4}, {5}, {6}, {1, 7, 9, 3}, {6, 8, 4, 2}, {1, 9} };

int main(void) {
	int testCaseNumber = 0;
	int a, b;
	int mod;
	int result = 0;

	cin >> testCaseNumber;

	for (int i = 0; i < testCaseNumber; i++) {
		cin >> a >> b;

		a %= 10;

		//cout << "a : " << a << endl;

		if (a == 1 || a == 5 || a == 6) {
			result = a;
		}
		else if (a == 2 || a == 3 || a == 7 || a == 8) {
			mod = b % 4;
			result = list[a][mod];
		}
		else if (a == 4 || a == 9) {
			mod = b % 2;
			result = list[a][mod];
		}
		else if (a == 0) {
			result = 10;
		}

		cout << result << endl;
	}


	return 0;
}

