#define _crt_secure_no_warnings
#include<stdio.h>
struct stu//����ģ��
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void aaa(struct stu* p)//�������� ������������ *ָ������
{
	printf("%s %d %s %s\n",(*p).name,(*p).age,(*p).sex,(*p).tele);
	                       //�ṹ��ָ�����->����
	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->tele);

};
int main()
{
	struct stu s = { "zhangsan",20,"nan","19818585185" };//��������
	aaa(&s);
	return 0;
}