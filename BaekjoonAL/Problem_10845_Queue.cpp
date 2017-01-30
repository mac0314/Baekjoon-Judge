#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

enum INPUT { PUSH = 0, POP, SIZE, EMPTY, FRONT, BACK };
typedef unordered_map<string, INPUT> MyMap;

// http://stackoverflow.com/questions/201593/is-there-a-simple-way-to-convert-c-enum-to-string/11586083#11586083
// String switch to Enum
struct cmdInputMap : public MyMap
{
	cmdInputMap()
	{
		this->operator[]("push") = PUSH;
		this->operator[]("pop") = POP;
		this->operator[]("size") = SIZE;
		this->operator[]("empty") = EMPTY;
		this->operator[]("front") = FRONT;
		this->operator[]("back") = BACK;
	};
	~cmdInputMap() {}
};

typedef int element;

typedef struct _node {
	element data;
	struct _node* next;
} Node;

typedef struct _lQueue {
	Node* front;
	Node* rear;
	int size;
}LQueue;

typedef LQueue Queue;

void qInit(Queue* pq);
void qPush(Queue* pq, element value);
int qPop(Queue* pq);
int qSize(Queue* pq);
int qEmpty(Queue* pq);
int qFront(Queue* pq);
int qBack(Queue* pq);

void cmdExecute(Queue* queue, string cmd, int value);

int main(void) {

	Queue queue;

	stringstream ss;

	string line;
	string cmd;

	int cmdNumber = 0;
	int value = 0;

	qInit(&queue);

	cin >> cmdNumber;
	cin.clear();
	cin.ignore();

	for (int i = 0; i < cmdNumber; i++) {

		getline(cin, line);

		ss.str(line);

		ss >> cmd >> value;
		ss.clear();

		//cout << cmd << " " << value << endl;
		
		cmdExecute(&queue, cmd, value);

	}


	return 0;
}


void qInit(Queue* pq) {
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}


void qPush(Queue* pq, element value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = value;
	newNode->next = NULL;

	if (pq->front) {
		pq->rear->next = newNode;
	}
	else {
		pq->front = newNode;
	}

	pq->rear = newNode;
	pq->size += 1;
}

element qPop(Queue* pq) {
	if (!pq->front) {
		return -1;
	}


	element data = pq->front->data;
	pq->front = pq->front->next;

	
	pq->size -= 1;

	return data;
}


int qSize(Queue* pq) {
	return pq->size;
}


int qEmpty(Queue* pq) {
	int result;

	if (pq->size) {
		result = 0;
	}
	else {
		result = 1;
	}

	return result;
}


element qFront(Queue* pq) {
	if (!pq->front) {
		return -1;
	}
	element data = pq->front->data;
	return data;
}


element qBack(Queue* pq) {
	if (!pq->front) {
		return -1;
	}
	element data = pq->rear->data;
	return data;
}

void cmdExecute(Queue* pq, string cmd, int value) {
	cmdInputMap cmdInputMap;

	int result = 0;

	switch (cmdInputMap[cmd]) {
	case PUSH: {
		qPush(pq, value);
		return;
	}
	case POP: {
		result = qPop(pq);
		break;
	}
	case SIZE: {
		result = qSize(pq);
		break;
	}
	case EMPTY: {
		result = qEmpty(pq);
		break;
	}
	case FRONT: {
		result = qFront(pq);
		break;
	}
	case BACK: {
		result = qBack(pq);
		break;
	}
	default: {
		break;
	}
	}

	cout << result << endl;

	return;
}