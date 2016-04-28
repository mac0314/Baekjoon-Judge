#include<stdio.h>
#include<stdlib.h>

void QuickSort(int arr[], int left, int right);
void Swap(int arr[], int idx1, int idx2);
int Partition(int arr[], int left, int right);

int main(void) {

	int* numArr;
	int num;
	int i, j;

	scanf("%d", &num);

	numArr = (int*)malloc(sizeof(int) * num);

	for (i = 0; i < num; i++) {
		scanf("%d", &numArr[i]);
	}

	QuickSort(numArr, 0, num - 1);

	for (i = 0; i < num; i++) {
		printf("%d\n", numArr[i]);
	}

	free(numArr);

	return 0;
}

void QuickSort(int arr[], int left, int right) {
	if (left <= right) {
		int pivot = Partition(arr, left, right);
		QuickSort(arr, left, pivot - 1);
		QuickSort(arr, pivot + 1, right);
	}
}

void Swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;

}

int Partition(int arr[], int left, int right) {
	int pivot;
	int low;
	int high;

	pivot = arr[left];
	low = left + 1;
	high = right;

	while (low <= high) {
		while (pivot > arr[low] && low <= right) {
			low++;
		}

		while (pivot < arr[high] && high >= (left + 1)) {
			high--;
		}

		if (low <= high)
			Swap(arr, low, high);
	}

	Swap(arr, left, high);

	return high;
}