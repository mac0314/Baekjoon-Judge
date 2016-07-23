#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100



int** student;
int* color;


bool dfs(int v, int c) {
	int size;

	color[v] = c; //��� v�� c�� ĥ�Ѵ�.
	for (int i = 0; i < G[v].size(); ++i) {
		//������ �ִ� ��尡 ���� ���̸� false
		if (color[G[v][i]] == c) return false;
		//������ �ִ� ��尡 ���� ĥ���� ���� ������ -c�� ĥ�Ѵ�.
		if (color[G[v][i]] == 0 && !dfs(G[v][i], -c)) return false;
	}

	//��� ��带 ĥ�ߴٸ�
	return true;
}
//[��ó] �̺� �׷��� ���� | �ۼ��� LEO JINSOL KIM



int main(void) {

	int studentNum;

	int hateStudentNum;
	int i, j;


	scanf("%d", &studentNum);

	student = (int**)malloc(sizeof(int*) * studentNum);

	for (i = 0; i < studentNum; i++) {
		scanf("%d", &hateStudentNum);

		student[i] = (int*)malloc(sizeof(int) * hateStudentNum);

		for (j = 0; j < hateStudentNum; j++) {
			scanf("%d", &student[i][j]);
		}
	}






	for (i = 0; i < studentNum; i++) {
		free(student[i]);
	}

	free(student);

	system("pause");
	return 0;
}