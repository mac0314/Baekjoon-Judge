#include <iostream>

#define LINE_MAX 3

bool checkTriangle(int line[LINE_MAX], int maxLenIdx);

using namespace std;

int main(void) {
	int line[LINE_MAX];
	int maxLenIdx;
	int maxLen;
	bool isTriangle = false;
	int i, count;

	while (1) {
		for (i = 0; i < LINE_MAX; i++) {
			cin >> line[i];
		}
		count = 0;
		maxLen = line[0];
		maxLenIdx = 0;
		for (i = 0; i < LINE_MAX; i++) {
			if (line[i] == 0) {
				count++;
				if (count == 3) {
					return 0;
				}
				else {
					isTriangle = false;
				}
			}
			else {
				if (maxLen < line[i]) {
					maxLenIdx = i;
					maxLen = line[i];
				}
			}
		}


		isTriangle = checkTriangle(line, maxLenIdx);

		if (isTriangle) {
			cout << "right" << endl;
		}
		else {
			cout << "wrong" << endl;
		}

	}

	return 0;
}

bool checkTriangle(int line[LINE_MAX], int maxLenIdx) {
	switch (maxLenIdx)
	{
	case 0:
		if ((line[0] * line[0]) == line[1] * line[1] + line[2] * line[2]) {
			return true;
		}
		break;
	case 1:
		if ((line[1] * line[1]) == line[0] * line[0] + line[2] * line[2]) {
			return true;
		}
		break;
	case 2:
		if ((line[2] * line[2]) == line[0] * line[0] + line[1] * line[1]) {
			return true;
		}
		break;
	default:
		break;
	}

	return false;
}