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

account check_id_pw(account ac[5]) {
	int check_id, check_pw;


}

void deposit() {
}

void withdrawal() {
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

// �Ѱ����� 
void balance(account ac) {
	
	

}

void exit_bank() {
}

int main(void) {
	//struct account type array
	account* ac = (account*)malloc(sizeof(account) * MAX);
	account current_ac;

	int num = 0;
	int n = 1;
	
	memset((void *) ac, 0, sizeof(account) * MAX);
	for (int i = 0; i < MAX; i++) {
		
	}
	/*
	for (int i = 0; i < MAX; i++) {
		memset((void *)&ac[i], 0, sizeof(account));
	}
	*/

	//five bank accounts function call
	input_account(ac);
	for (int i = 0; i < MAX; i++) {

		accountInfo(ac[i]);
	}
	/*
	while (n) {
		printf("==========EWHA BANK ATM==========\n\n");
		printf("1.\t DEPOSIT \n");
		printf("2.\t WITHDRAWL \n");
		printf("3.\t BALANCE \n");
		printf("4.\t QUIT \n");
		printf("Please choose the number from the menu : ");
		scanf("%d", &num);
		printf("----------------------------------\n");

		if (num == 1 || num == 2 || num == 3) {
			current_ac = check_id_pw(ac);
		}

		switch (num) {
		case 1:
			deposit();
			break;
		case 2:
			withdrawl();
			break;
		case 3:
			balance(current_ac);
			break;
		case 4:
			exit_bank();
			break;
		}
	}
	*/

	system("pause");
	return 0;
}