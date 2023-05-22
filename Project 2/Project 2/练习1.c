#define _crt_secure_no_warnings
#include<stdio.h>
struct stu//类型模板
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void aaa(struct stu* p)//返回类型 函数名（类型 *指针名）
{
	printf("%s %d %s %s\n",(*p).name,(*p).age,(*p).sex,(*p).tele);
	                       //结构体指针变量->命名
	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->tele);

};
int main()
{
	struct stu s = { "zhangsan",20,"nan","19818585185" };//创建类型
	aaa(&s);
	return 0;
}