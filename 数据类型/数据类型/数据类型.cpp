#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>	//����ͷ�ļ�

int main()
//{
//	//sizeof��c���ԵĹؼ���Ҳ�ǲ����������Լ������ͻ��߱�����ռ�ռ�Ĵ�С��
//	printf("%d\n", 100);	//%d��Ӧ��ӡ��ʽ����������
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//}
//	
//дһ������������ӵĳ���
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}
