#define _crt_secure_no_warmings
#include<stdio.h>
void swap(int *pa, int*py)
{
	int temp = 0;
	temp = *pa;
	*pa = *py;
	*py = temp;
}
int main()
{
	int a=1;
	int b=2;
	printf("����ǰa=%d ����ǰb=%d\n", a, b);
	swap(&a, &b);
	printf("������a=%d ������b=%d\n", a, b);
}