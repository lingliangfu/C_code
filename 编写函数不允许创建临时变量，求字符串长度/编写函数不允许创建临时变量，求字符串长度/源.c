#include<stdio.h>
int aaa(char* str)
{
	if (*str != '\0')//第一次是a，满足条件进入if，字符数至少为1
	{
		return 1 + aaa(str + 1);//字符数=1+(str + 1)剩下的bcdef
		                                 //后面的也进入aaa函数-2，变成+1+（str+1+1）剩下的cdef
	}                                                                   //后面的也进入aaa函数-3...
	else                                                                //最后遇到\0，return 0，返回0到函数-6，函数-6返回1到函数-5，函数-5返回2到函数-4...函数-2返回5到函数-1,函数-1返回6到主函数
		return 0;
}
int main()
{
	char arr[] = "abcdef";
	int len = aaa(arr);//数组传参发生降维,实参为首元素的地址，形参为指针
	printf("%d", len);
}