#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef unsigned int u_int;
//void test()
//{
//	/*static*/ int a = 1;
//	a++;
//	printf("%d\n", a);
//}

int main()
{
	/*unsigned int num = 100;
	u_int num2 = 100;*/
	//u_int = typedef unsigned int ����

	/*static - ��̬��
	1��static���ξֲ�����
	2��static����ȫ�ֱ���
	3��static���κ���*/

	/*int i = 0;
	while (i < 10) {
		test();
		i++;
	}*/

	/*����ȫ�ֱ���*/
	/*extern int g_val;
	printf("%d\n", g_val);*/

	extern int Add(int x, int y);
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}