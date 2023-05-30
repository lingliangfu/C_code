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
	printf("%d\n", a % 10);//直接余10，得最后一位
	printf("%d\n", a % 100 / 10);//直接余100，得最后两位
	printf("%d\n", a / 100);

	unsigned int num = 123;
	while (num)
	{
		printf("%d\n", num % 10);//直接余10，得最后一位
		num = num / 10;//除10, 减去第一位
	}
	return 0;
	*/