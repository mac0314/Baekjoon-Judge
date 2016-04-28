#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int** adjMatrix;
int* visited;
int vertaxNum;
int** pathMatrix;

void DFS(int vertax) {
	visited[vertax]++;

	for (int i = 0; i < vertaxNum; i++) {
		if (adjMatrix[vertax][i] == 1 && visited[i] < 2)
			DFS(i);
	}
}

int main(void) {


	int i, j;

	scanf("%d", &vertaxNum);

	adjMatrix = (int**)malloc(sizeof(int*) * vertaxNum);
	visited = (int*)malloc(sizeof(int) * vertaxNum);
	pathMatrix = (int**)malloc(sizeof(int*) * vertaxNum);

	for (i = 0; i < vertaxNum; i++) {
		adjMatrix[i] = (int*)malloc(sizeof(int) * vertaxNum);
		pathMatrix[i] = (int*)malloc(sizeof(int) * vertaxNum);
	}

	for (i = 0; i < vertaxNum; i++) {

		visited[i] = 0;

		for (j = 0; j < vertaxNum; j++) {
			scanf("%d", &adjMatrix[i][j]);
		}
	}

	for (i = 0; i < vertaxNum; i++) {

		DFS(i);

		for (j = 0; j < vertaxNum; j++) {
			if (i == j && visited[j] != 2) {
				pathMatrix[i][j] = 0;
				visited[j] = 0;
				continue;
			}

			pathMatrix[i][j] = visited[j];
			visited[j] = 0;
		}
	}

	for (i = 0; i < vertaxNum; i++) {
		for (j = 0; j < vertaxNum; j++) {
			if (pathMatrix[i][j] == 2) {
				pathMatrix[i][j]--;
			}

			printf("%d ", pathMatrix[i][j]);
		}

		printf("\n");
	}

	for (i = 0; i < vertaxNum; i++) {
		free(adjMatrix[i]);
		free(pathMatrix[i]);
	}

	free(visited);
	free(adjMatrix);
	free(pathMatrix);

	return 0;
}