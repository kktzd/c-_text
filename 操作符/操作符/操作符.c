#include <stdio.h>

int main()
{

	/*int a = 9 / 2;
	printf("%d\n", a);
	float a = 9 / 2.0;
	printf("%f\n", a);*/

	//sizeof��һ��������
	//�������ͻ��߱����Ĵ�С��Ҳ���Լ�������Ĵ�С
	/*int a = 10;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));*/
	
	/*int a = (int)3.14;*/	//������ǿ��ת��Ϊ����
	/*printf("%d\n", a);*/

	/*exp1 ? exp2 : exp3
	exp1������ex2���㣬�������ʽ�ṹ��exp2�Ľ��
	exp1��������exp3���㣬�������ʽ�ṹ��exp3�Ľ��*/
	/*int a = 0;
	int b = 3;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n", max);*/

	//���ű��ʽ
	//int a = 0;
	//int b = 3;
	//int c = 5;
	//int d = (a = b + 2, c = a - 4, b = c + 2);
	////���ű��ʽ�Ǵ����������μ����
	////�������ʽ�Ľ�������һ�����ʽ�Ľ��
	//printf("%d\n", d);

	/*�±������*/
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", arr[5]);

	return 0;
}