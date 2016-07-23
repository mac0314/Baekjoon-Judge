#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100



int** student;
int* color;


bool dfs(int v, int c) {
	int size;

	color[v] = c; //노드 v를 c로 칠한다.
	for (int i = 0; i < G[v].size(); ++i) {
		//인접해 있는 노드가 같은 색이면 false
		if (color[G[v][i]] == c) return false;
		//인접해 있는 노드가 아직 칠해져 있지 않으면 -c로 칠한다.
		if (color[G[v][i]] == 0 && !dfs(G[v][i], -c)) return false;
	}

	//모든 노드를 칠했다면
	return true;
}
//[출처] 이분 그래프 판정 | 작성자 LEO JINSOL KIM



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