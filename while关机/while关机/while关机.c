#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

int main()
{
	int tmp[20] = { 0 };
	system("shutdown -s -t 60");

	while (1) {
		printf("����һ����֮���������ǵ���֮�ܣ�������Թػ�������\n");
		scanf("%s", tmp);
		if (strcmp(tmp, "���ǵ���֮��") == 0) {
			system("shutdown -a");
			break;
		}

	}
	return 0;
}