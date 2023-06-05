#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr = {0};
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	return 0;
}