#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	for (i = 1; i < 10; i++)//��һ��,ÿһ��ѭ���������������for,j=1
	{
		for (j = 1; j<=i; j++)//��һ�е�����
		{
			printf("%d*%d=%-2d ", i, j, i*j);//-2d,�������,�������2λ,���ո�
		}
		printf("\n");//��ӡһ�оͻ���
	}
	
	return 0;
}