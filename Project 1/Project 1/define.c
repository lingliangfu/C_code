#include<stdio.h>
#define add(x,y)(x+y)
int main()
{
	int a = 1;
	int b = 1;
	add(a, b);
	printf("%d", add(a, b));
}