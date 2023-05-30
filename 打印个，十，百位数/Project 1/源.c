#include<stdio.h>
int main()
{
	int a=175;
	printf("%d\n", a % 10);//直接余10，得最后一位数
	printf("%d\n", a % 100 / 10);//直接余100，得最后两位数
	printf("%d\n", a / 100);
}