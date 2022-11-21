#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int d;
	//scanf("%d", &d);
	//switch (d) {
	//case 1:
	//	printf("星期一");
	//	break;
	//case 2:
	//	printf("星期二");
	//	break;
	//case 3:
	//	printf("星期三");
	//	break;
	//case 4:
	//	printf("星期四");
	//	break;
	//case 5:
	//	printf("星期五");
	//	break;
	//case 6:
	//	printf("星期六");
	//	break;
	//case 7:
	//	printf("星期天");
	//	break;
	//default:	//default用来出来错误
	//	printf("你输入的有错误");
	//}

	//int day;
	//scanf("%d", &day);
	//switch (day) {
	//	case 1:
	//	case 2:
	//	case 3:
	//	case 4:
	//	case 5:
	//		printf("工作日");
	//		break;		//break是switch的出口。
	//	case 6:
	//	case 7:
	//		printf("休息日");
	//		break;
	//	default:
	//		printf("输入错误");
	//}

	//int ch = 0;
	//while ((ch = getchar()) != EOF) {
	//	//getchar用于在键盘中获取字符 - putchar是输出一个字符
	//	//EOF - end of file - 文件结束表示
	//	putchar(ch);
	//}

	//char password[20] = {0};
	//printf("请输入密码:>");
	//scanf("%s", password);//123456
	//printf("请确认密码(Y/N):>");
	////清理缓冲区中的多个字符
	//int tmp = 0;
	//while ((tmp = getchar()) != '\n') {
	//	;
	//}

	//int ch = getchar();
	//if (ch == 'Y') {
	//	printf("确认成功");
	//}
	//else {
	//	printf("确认失败");
	//}

	//只打印数字
	/*int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}*/

	for (int i = 0; i <= 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d", i);
	}

	return 0;
}