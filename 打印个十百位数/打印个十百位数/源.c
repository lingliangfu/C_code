#define _crt_decure_no_warnings
#include<stdio.h>

void a( int n)
{
	if (n > 9)
	{
		a(n/10);
	}
	printf("%d\n", n % 10);
}

int main()
{
	int num = 1234;
	a(num);
	return 0;
}
/*
	int a = 175;
	printf("%d\n", a % 10);//ֱ����10�������һλ
	printf("%d\n", a % 100 / 10);//ֱ����100���������λ
	printf("%d\n", a / 100);

	unsigned int num = 123;
	while (num)
	{
		printf("%d\n", num % 10);//ֱ����10�������һλ
		num = num / 10;//��10, ��ȥ��һλ
	}
	return 0;
	*/