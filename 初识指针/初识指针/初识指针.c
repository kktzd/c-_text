#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int a = 10;//a���ڴ��з���4���ֽ�
	//int* pa = &a;//pa������ŵ�ַ����c������pa��ָ�����
	//*pa = 20;//* �����ò����� *paͨ��pa����ĵ�ַ�ҵ�a��������a
	//printf("%d\n", *pa);

	////printf("%p\n", &a);//%p ר��������ӡ��ַ��

	//����ָ��Ĵ�С
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//���ۣ�32λָ���С��4���ֽڣ�64λָ��Ĵ�С��8���ֽ�

	return 0;
}