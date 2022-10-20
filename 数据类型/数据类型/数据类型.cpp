#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>	//引用头文件

int main()
//{
//	//sizeof是c语言的关键字也是操作符，可以计算类型或者变量所占空间的大小。
//	printf("%d\n", 100);	//%d对应打印格式，代表整型
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//}
//	
//写一个两个整数相加的程序
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}
