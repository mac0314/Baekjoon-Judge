#include<stdio.h>
#include<string.h>

typedef struct _node {
	int data;
	struct _node * next;
} Node;

typedef struct _listStack {
	Node * head;
	int num;
} ListStack;

typedef ListStack Stack;

void SInit(Stack * ps);
int SEmpty(Stack * ps);
int STop(Stack * ps);
void SPush(Stack * ps, int data);
int SPop(Stack * ps);
int SSize(Stack * ps);

int main(void) {

	Stack stack;
	int num, i;
	char * command[20];
	int data;
	int result;

	SInit(&stack);

	scanf("%d", &num);

	for (i = 0; i<num; i++) {
		scanf("%s", command);

		if (strcmp(command, "push") == 0) {
			scanf("%d", &data);
			SPush(&stack, data);
		}
		else if (strcmp(command, "pop") == 0) {
			result = SPop(&stack);
			printf("%d\n", result);
		}
		else if (strcmp(command, "size") == 0) {
			result = SSize(&stack);
			printf("%d\n", result);
		}
		else if (strcmp(command, "empty") == 0) {
			result = SEmpty(&stack);
			printf("%d\n", result);
		}
		else if (strcmp(command, "top") == 0) {
			result = STop(&stack);
			printf("%d\n", result);
		}
	}
	return 0;
}


void SInit(Stack * ps) {
	ps->head = NULL;
	ps->num = 0;
}

int SEmpty(Stack * ps) {
	if (ps->num == 0)
		return 1;
	else
		return 0;
}

int STop(Stack * ps) {
	if (SEmpty(ps))
		return -1;
	else
		return ps->head->data;
}

void SPush(Stack * ps, int data) {
	Node * newNode = (Node*)malloc(sizeof(Node));

	newNode->data = data;
	newNode->next = ps->head;
	ps->head = newNode;
	ps->num++;
}

int SPop(Stack * ps) {
	int rdata;
	Node * rnode;

	if (SEmpty(ps))
		return -1;

	rdata = ps->head->data;
	rnode = ps->head;

	ps->head = ps->head->next;
	ps->num--;
	free(rnode);

	return rdata;
}

int SSize(Stack * ps) {
	return ps->num;
}