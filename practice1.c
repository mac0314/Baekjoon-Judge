#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define CASE_MAX 10
#define MAX 10000

int numArr[MAX];
int temp[MAX];

int main(void) {
int numCount;
int i, j;


scanf("%d", &numCount);

for (i = 0; i < numCount; i++) {
scanf("%d", &numArr[i]);
}


int tempInt = -1;
int targetIdx = -1;
int lastIdx = numCount;
int sameCount = 0;

for (j = 0; j < lastIdx; j++) {
if (numArr[j] > numArr[j + 1]) {
if (tempInt == -1) {
tempInt = numArr[j];
targetIdx = j;
}
if (numArr[j] <= tempInt) {
tempInt = numArr[j];
targetIdx = j;
}
}
}

if (targetIdx == -1) {
printf("-1\n");
system("pause");
return 0;
}

printf("target : %d\n", targetIdx);

for (j = lastIdx; j > targetIdx; j--) {
if (numArr[targetIdx] < numArr[j]) {
int temp;
// swap
temp = numArr[targetIdx];
numArr[targetIdx] = numArr[j];
numArr[j] = temp;

break;
}
}

for (i = 0; i < numCount; i++) {
temp[i] = numArr[i];
}


for (j = 1; j + targetIdx <= lastIdx; j++) {
numArr[j + targetIdx] = temp[lastIdx + 1 - j];
}

for (i = 0; i < numCount; i++) {
printf("%d ", numArr[i]);
}

system("pause");
return 0;
}