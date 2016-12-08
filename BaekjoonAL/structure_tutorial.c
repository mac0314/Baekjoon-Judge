#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define MAX 5 // �� ����

// ���� ����
typedef struct _account {
	int account_id;
	char name[50];
	double balance;
	char passwd[50];
}account;


// ������ �Է� �޴� �Լ�
void input_account(account* ac) {
	int account_id[5] = { 11111, 22222, 33333, 44444, 55555 };
	char* name[] = { "Susan Lee", "James Mason","Jane Han", "Brian Jacobs","Clara Wyoming" };
	double balance[5] = { 15345.24, 250000.34, 30000, 250000, 35600.34 };
	char* passwd[] = { "passwd1","passwd2","passwd3","passwd4","passwd5" };

	// ����ü�� �ϳ� �ϳ� ����������� 
	// �� ������ �ϳ��� ����
	// �ƴҼ��� ������(�Ѳ����� �ɼ��� ���� �򰥸�) ���۸����� Ȯ��

	for (int i = 0; i < MAX; i++) {
		//ac[i].account_id = (int)malloc(sizeof(int));
		
		//ac[i].balance = (double)malloc(sizeof(double));
		memset((void *) &ac[i].account_id, 0, sizeof(int));
		memset((void *) &ac[i].balance, 0, sizeof(double));
		memset((void *) &ac[i].name, 0, sizeof(char) * 50);
		memset((void *) &ac[i].passwd, 0, sizeof(char) * 50);

		ac[i].account_id = account_id[i];
		ac[i].balance = balance[i];

		// ���ڿ��� �Լ��� Ȱ���Ͽ� ������
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

	// ���ڿ��� �Լ��� Ȱ���Ͽ� ������
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