#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	for (i = 1; i < 10; i++)//第一行,每一次循环都会重置下面的for,j=1
	{
		for (j = 1; j<=i; j++)//第一行的内容
		{
			printf("%d*%d=%-2d ", i, j, i*j);//-2d,向左对齐,如果少于2位,补空格
		}
		printf("\n");//打印一行就换行
	}
	
	return 0;
}