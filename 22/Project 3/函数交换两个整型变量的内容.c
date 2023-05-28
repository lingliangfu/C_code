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
	printf("交换前a=%d 交换前b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后a=%d 交换后b=%d\n", a, b);
}