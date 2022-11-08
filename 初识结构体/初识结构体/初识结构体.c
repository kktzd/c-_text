#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//创建一个学生类型
struct xs
{					//成员变量
	char name[20];
	int age;
	double cji;
};
int main()
{
	//初始化
	struct xs s = { "张三", 18, 80.5 };//结构图的创建的初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.cji);//结构体变量 .是成员变量

	struct xs* ps = &s;//将结构体放在指针变量里面打印
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).cji);//比较繁琐不推荐

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->cji);//推荐

	return 0;
}