#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{	
	int a = 0;
	while (a < 30000)
	{
		printf("ѧϰ%d\n", a);
		a++;
	}
	if (a == 30000)
	{
		printf("��ɽ");
	}
	return 0;
}
	