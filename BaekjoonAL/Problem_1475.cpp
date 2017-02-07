#include <iostream>
#include <cstring>


#define INDEX_MAX 8
#define NUMBER_MAX 10

using namespace std;

int main(void) {
	int roomNum;
	int setNum = 1;
	int set[NUMBER_MAX] = {0};
	char cRoomNum[INDEX_MAX];

	cin >> roomNum;

	sprintf(cRoomNum, "%d", roomNum);

	int maxIdx = strlen(cRoomNum);

	for (int i = 0; i < maxIdx; i++) {
		int tempNum = cRoomNum[i] - 48; // char to int

		if (set[tempNum] < setNum) {
			set[tempNum]++;
		}
		else {
			if (tempNum == 6) {
				int replacement = setNum - set[9];
				if (replacement > 0) {
					set[9]++;
				}
				else {
					setNum++;
					set[tempNum]++;
				}
			}else if(tempNum == 9){
				int replacement = setNum - set[6];
				if (replacement > 0) {
					set[6]++;
				}
				else {
					setNum++;
					set[tempNum]++;
				}
			}
			else {
				setNum++;
				set[tempNum]++;
			}
		}
	}

	cout << setNum << endl;

	return 0;
}