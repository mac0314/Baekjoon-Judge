#include<stdio.h>


int main() {
	int iNum; //initial number 
	int cNum; //current number
	int length = 0; //cycle length
	int fNum; //1st num ex) 1
	int sNum; //2nd num ex) 10
	int pNum; //plus num
	int i;

	scanf("%d", &iNum);

	cNum = iNum;

	while (1) {

		fNum = cNum % 10;
		sNum = cNum / 10;

		pNum = fNum + sNum;

		cNum = fNum * 10 + pNum % 10;

		length++;

		if (iNum == cNum)
			break;

	}

	printf("%d\n", length);

	return 0;
}