#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ��ѧ������
struct xs
{					//��Ա����
	char name[20];
	int age;
	double cji;
};
int main()
{
	//��ʼ��
	struct xs s = { "����", 18, 80.5 };//�ṹͼ�Ĵ����ĳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.cji);//�ṹ����� .�ǳ�Ա����

	struct xs* ps = &s;//���ṹ�����ָ����������ӡ
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).cji);//�ȽϷ������Ƽ�

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->cji);//�Ƽ�

	return 0;
}