#define _crt_secure_no_warmings
#include<stdio.h>
//��ӡ1-100֮�������
//7����ܱ�2,3,4,5,6����,�����Ͳ�������

/*
int main()
{
	int i=0;
	for (i = 1; i <= 100; i++)//1��100
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= i - 1; j++)//����Ƿ��ܱ�2��i-1����
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

//x��������,��һ������2������x=a*b,��16=8*2,16=4*4,16һ�����Ա�2��16��ƽ��֮���������
//sqrt(16)����ѧ�⺯��(double),Ϊ16��ƽ��,��4.
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)//1��100
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)//����Ƿ��ܱ�2��i�Ŀ�������
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