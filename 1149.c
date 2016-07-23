#include <stdio.h>
#include <stdlib.h>

int main() {
	int houseNum;
	int* RCost;
	int* GCost;
	int* BCost;
	int* idx;
	int minCost;
	int totalCost;
	int i, j;


	scanf("%d", &houseNum);

	RCost = (int*)malloc(sizeof(int) * houseNum);
	GCost = (int*)malloc(sizeof(int) * houseNum);
	BCost = (int*)malloc(sizeof(int) * houseNum);
	idx = (int*)malloc(sizeof(int) * houseNum);

	for (i = 0; i < houseNum; i++) {
		scanf("%d %d %d", &RCost[i], &GCost[i], &BCost[i]);
	}




	free(RCost);
	free(GCost);
	free(BCost);
	free(idx);

	system("pause");
	return 0;
}