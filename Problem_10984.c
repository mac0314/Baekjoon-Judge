#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define RoundOff(x, dig) (floor((x) * pow(10, dig) + 0.5) / pow(10, dig))

int main()
{
	int termNum;
	int subjectNum;
	int* subject;
	float* grade;
	int totalCredit;
	float gpa;
	int i, j;

	scanf("%d", &termNum);

	for (i = 0; i < termNum; i++) {
		scanf("%d", &subjectNum);

		subject = (int*)malloc(sizeof(int) * subjectNum);
		grade = (float*)malloc(sizeof(float) * subjectNum);

		for (j = 0, totalCredit = 0, gpa = 0; j < subjectNum; j++) {
			scanf("%d %f", &subject[j], &grade[j]);

			totalCredit += subject[j];
			gpa += subject[j] * grade[j];
		}

		gpa = (gpa / totalCredit);

		RoundOff(gpa, 1);

		printf("%d %.1f\n", totalCredit, gpa);
	}

	free(subject);
	free(grade);

	return 0;
}