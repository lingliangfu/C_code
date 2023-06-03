#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void a(int arr[],int sz)
{

	int i = 0;
	for (i = 0; i < sz - 1; i++)//进行sz-1趟,因为从0开始所以-1
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		//i循环一次,j进行sz-1-i趟,因为1趟让1个数据移动到最终的位置,所以sz-1后再-i
		{
			if (arr[i] < arr[i + 1])
				//前一位和后一位进行比较,大了则往后移,第一次进行了9次比较,第二次8次
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}

}
int main()
{
	int arr[ ] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//总大小除以单个元素的大小 ,表示数组 arr 中元素的个数
	a(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}