#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

int main()
{
	int tmp[20] = { 0 };
	system("shutdown -s -t 60");

	while (1) {
		printf("请在一分钟之内输入我是弟中之弟，否则电脑关机！！！\n");
		scanf("%s", tmp);
		if (strcmp(tmp, "我是弟中之弟") == 0) {
			system("shutdown -a");
			break;
		}

	}
	return 0;
}