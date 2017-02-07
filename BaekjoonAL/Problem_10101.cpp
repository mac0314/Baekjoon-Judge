#include <iostream>

#define VERTEX_MAX 3

using namespace std;

int main(void) {
	int angle[VERTEX_MAX];
	int sameAngle = 1;
	int sumAngle = 0;

	for (int i = 0; i < VERTEX_MAX; i++) {
		cin >> angle[i];
		sumAngle += angle[i];
	}

	if (sumAngle == 180) {
		if (angle[0] == angle[1]) {
			if (angle[1] == angle[2]) {
				sameAngle = 3;
			}
			else {
				sameAngle = 2;
			}
		}
		else {
			if (angle[1] == angle[2]) {
				sameAngle = 2;
			}

			if (angle[0] == angle[2]) {
				sameAngle = 2;
			}
		}

		//cout << sameAngle << endl;

		if (sameAngle == 3) {
			cout << "Equilateral" << endl;
		}
		else if (sameAngle == 2) {
			cout << "Isosceles" << endl;
		}
		else {
			cout << "Scalene" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}
	



	return 0;
}