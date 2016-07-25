#include<stdio.h>

int main(void) {
	int XFee;
	int YBFee;
	int YBMax;
	int ExFee;
	int amount;
	int XTotal;
	int YTotal;
	int result;

	scanf("%d", &XFee);
	scanf("%d", &YBFee);
	scanf("%d", &YBMax);
	scanf("%d", &ExFee);
	scanf("%d", &amount);

	XTotal = XFee * amount;

	if (amount > YBMax)
		YTotal = YBFee + ExFee * (amount - YBMax);
	else
		YTotal = YBFee;

	if (XTotal > YTotal)
		result = YTotal;
	else
		result = XTotal;

	printf("%d\n", result);

	return 0;
}
