#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int d;
	//scanf("%d", &d);
	//switch (d) {
	//case 1:
	//	printf("����һ");
	//	break;
	//case 2:
	//	printf("���ڶ�");
	//	break;
	//case 3:
	//	printf("������");
	//	break;
	//case 4:
	//	printf("������");
	//	break;
	//case 5:
	//	printf("������");
	//	break;
	//case 6:
	//	printf("������");
	//	break;
	//case 7:
	//	printf("������");
	//	break;
	//default:	//default������������
	//	printf("��������д���");
	//}

	//int day;
	//scanf("%d", &day);
	//switch (day) {
	//	case 1:
	//	case 2:
	//	case 3:
	//	case 4:
	//	case 5:
	//		printf("������");
	//		break;		//break��switch�ĳ��ڡ�
	//	case 6:
	//	case 7:
	//		printf("��Ϣ��");
	//		break;
	//	default:
	//		printf("�������");
	//}

	//int ch = 0;
	//while ((ch = getchar()) != EOF) {
	//	//getchar�����ڼ����л�ȡ�ַ� - putchar�����һ���ַ�
	//	//EOF - end of file - �ļ�������ʾ
	//	putchar(ch);
	//}

	//char password[20] = {0};
	//printf("����������:>");
	//scanf("%s", password);//123456
	//printf("��ȷ������(Y/N):>");
	////���������еĶ���ַ�
	//int tmp = 0;
	//while ((tmp = getchar()) != '\n') {
	//	;
	//}

	//int ch = getchar();
	//if (ch == 'Y') {
	//	printf("ȷ�ϳɹ�");
	//}
	//else {
	//	printf("ȷ��ʧ��");
	//}

	//ֻ��ӡ����
	/*int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}*/

	for (int i = 0; i <= 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d", i);
	}

	return 0;
}