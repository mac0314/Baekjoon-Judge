/*

#include <iostream>
#include <cstdlib>

#define COL_MAX 2


float calcFrogDistance(int** path, int* x, int* y, int testCaseNum);

using namespace std;

int main(void) {
	int testCaseNum;
	int** path;
	int* x;
	int* y;
	int i, j, count = 0;
	float frogDistance = 50;
	

	while (1) {
		cin >> testCaseNum;

		if (testCaseNum == 0) {
			break;
		}
		
		if (count != 0) {
			cout << endl;
		}

		path = (int**)malloc(sizeof(int*) * testCaseNum);
		x = (int*)malloc(sizeof(int) * testCaseNum);
		y = (int*)malloc(sizeof(int) * testCaseNum);
		count++;

		for (i = 0; i < testCaseNum; i++) {
			
			path[i] = (int*)malloc(sizeof(int) * testCaseNum);
			
			cin >> x[i] >> y[i];
			cin.ignore();
		}

		cout << "Scenario #" << count << endl;
		cout << fixed;		// fix decimal
		cout.precision(3);	// ex) 0.0l2
		cout.setf(ios::showpoint); // padding 0
		cout << "Frog Distance = " << frogDistance << endl;
		
		for (i = 0; i < testCaseNum; i++) {
			free(path[i]);
		}
		free(path);
		free(x);
		free(y);
	}

	return 0;
}



float calcFrogDistance(int** path, int* x, int* y, int testCaseNum) {
	int i, j;
	int fDistance;
	
	for (i = 0; i < testCaseNum; i++) {
		
	}

	return 1;
}

*/