#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu() {
	printf("****************\n");
	printf("**** 1 play ****\n");
	printf("**** 0 exit ****\n");
	printf("****************\n");
}
void game() {
	int a = 0;
	int ret = rand() % 100 + 1;
	/*printf("%d\n", ret);*/
	while (1) {
		scanf("%d", &a);
		if (a > ret) {
			printf("�´���\n");
		}
		else if (a < ret) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}

int main() {
	int input = 0;
	srand((unsigned)time(NULL));

	do {
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��");
			break;
		}
	} while (input);

	return 0;
}