#include <stdio.h>

int main()
{

	/*int a = 9 / 2;
	printf("%d\n", a);
	float a = 9 / 2.0;
	printf("%f\n", a);*/

	//sizeof是一个操作符
	//计算类型或者变量的大小，也可以计算数组的大小
	/*int a = 10;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));*/
	
	/*int a = (int)3.14;*/	//浮点型强制转换为整型
	/*printf("%d\n", a);*/

	/*exp1 ? exp2 : exp3
	exp1成立，ex2计算，整个表达式结构是exp2的结果
	exp1不成立，exp3计算，整个表达式结构是exp3的结果*/
	/*int a = 0;
	int b = 3;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n", max);*/

	//逗号表达式
	//int a = 0;
	//int b = 3;
	//int c = 5;
	//int d = (a = b + 2, c = a - 4, b = c + 2);
	////逗号表达式是从左至右依次计算的
	////整个表达式的结果是最后一个表达式的结果
	//printf("%d\n", d);

	/*下标操作符*/
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", arr[5]);

	return 0;
}