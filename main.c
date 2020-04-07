#include <stdio.h>

void add_new(void); // ���ο� ����ó �߰�
void list(void); // ����ó �����ֱ�
void search(void); // ����ó �˻�
void edit(void); // ����ó ����
void delete_contact(void); // ����ó ����
void Exit(int *a); // ������
void start(int *a); // ���� ȭ�� �Լ�

main(void) {
	int a = 1; // �ݺ��� �� a
	while (a == 1) { // ���� ȭ�� �Լ�
		start(a);
	}
}

void start(int *a) {
	int b = 0;

	printf(" **** Welcome to Contact Management System ****\n\n");
	printf("                 MAIN MENU\n");
	printf("          ==========================\n");
	printf("          [1] Add a new Contact\n");
	printf("          [2] List all Contact\n");
	printf("          [3] Search for contacr\n");
	printf("          [4] Edit a Contact\n");
	printf("          [5] Delete a Contacr\n");
	printf("          [0] Exit\n");
	printf("          ==========================\n");
	printf("          Enter the choice:");
	scanf_s("%d", &b); // ���� ȭ�鿡�� ������ ȭ������ �Ѿ�� ���� üũ
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	if (b == 1) {
		add_new();
	}
	else if (b == 2) {
		list();
	}
	else if (b == 3) {
		search();
	}
	else if (b == 4) {
		edit();
	}
	else if (b == 5) {
		delete_contact();
	}
	else if (b == 0) {
		Exit(*a);
	}


}

void add_new(void) { // ���ο� ����ó �߰�
	printf("1");
}

void list(void) { // ����ó �����ֱ�
	printf("          ==========================\n");
	printf("              LIST OF CONTACTS\n");
	printf("          ==========================\n\n");
	printf(" Name          Phone No          Address          E-maid ad\n");
	printf(" ===========================================================\n");

	printf(" ===========================================================\n");
}

void search(void) { // ����ó �˻�
	printf("3");
}

void edit(void) { // ����ó ����
	printf("          ==========================\n");
	printf("               EDIT A CONTACTS\n");
	printf("          ==========================\n\n");
	printf(" Name          Phone No          Address          E-maid ad\n");
	printf(" ===========================================================\n");

	printf(" ===========================================================\n");
}

void delete_contact(void) { // ����ó ����
	printf("5");
}

void Exit(int *a) { // ������
	*a = 2;
}