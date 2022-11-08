#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int a = 10;//a在内存中分配4个字节
	//int* pa = &a;//pa用来存放地址，在c语言中pa叫指针变量
	//*pa = 20;//* 解引用操作， *pa通过pa里面的地址找到a，更改了a
	//printf("%d\n", *pa);

	////printf("%p\n", &a);//%p 专门用来打印地址的

	//计算指针的大小
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//结论：32位指针大小是4个字节，64位指针的大小是8个字节

	return 0;
}