#define _crt_secure_no_warmings
#include<stdio.h>
//打印1-100之间的素数
//7如果能被2,3,4,5,6整除,那它就不是素数

/*
int main()
{
	int i=0;
	for (i = 1; i <= 100; i++)//1到100
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= i - 1; j++)//检测是否能被2到i-1整除
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", i);
		}
	}
}
*/

//x不是素数,那一定会有2个因子x=a*b,如16=8*2,16=4*4,16一定可以被2到16开平方之间的数整除
//sqrt(16)是数学库函数(double),为16开平方,得4.
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)//1到100
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)//检测是否能被2到i的开方整除
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", i);
		}
	}
}