#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define MAX 5 // 총 개수

// 계좌 정보
typedef struct _account {
	int account_id;
	char name[50];
	double balance;
	char passwd[50];
}account;


// 데이터 입력 받는 함수
void input_account(account* ac) {
	int account_id[5] = { 11111, 22222, 33333, 44444, 55555 };
	char* name[] = { "Susan Lee", "James Mason","Jane Han", "Brian Jacobs","Clara Wyoming" };
	double balance[5] = { 15345.24, 250000.34, 30000, 250000, 35600.34 };
	char* passwd[] = { "passwd1","passwd2","passwd3","passwd4","passwd5" };

	// 구조체를 하나 하나 복사해줘야함 
	// 각 변수를 하나씩 복사
	// 아닐수도 있으니(한꺼번에 될수도 있음 헷갈림) 구글링으로 확인

	for (int i = 0; i < MAX; i++) {
		//ac[i].account_id = (int)malloc(sizeof(int));
		
		//ac[i].balance = (double)malloc(sizeof(double));
		memset((void *) &ac[i].account_id, 0, sizeof(int));
		memset((void *) &ac[i].balance, 0, sizeof(double));
		memset((void *) &ac[i].name, 0, sizeof(char) * 50);
		memset((void *) &ac[i].passwd, 0, sizeof(char) * 50);

		ac[i].account_id = account_id[i];
		ac[i].balance = balance[i];

		// 문자열은 함수를 활용하여 복사함
		strcpy(ac[i].name, name[i]);
		strcpy(ac[i].passwd, passwd[i]);
	}
}

void accountInfo(account ac){
	int account_id;
	char name[50] = "";
	double balance;
	char passwd[50] = "";

	account_id = ac.account_id;
	balance = ac.balance;

	// 문자열은 함수를 활용하여 복사함
	strcpy(name, ac.name);
	strcpy(passwd, ac.passwd);

	printf("ID : %d, Password : %s, Name : %s, balance : %f\n", account_id, passwd, name, balance);
	
	return;
}

int main(void) {
	//struct account type array
	account* ac = (account*)malloc(sizeof(account) * MAX);
	account current_ac;

	int num = 0;
	int n = 1;
	
	memset((void *) ac, 0, sizeof(account) * MAX);

	//five bank accounts function call
	input_account(ac);
	for (int i = 0; i < MAX; i++) {
		accountInfo(ac[i]);
	}

	system("pause");
	return 0;
}