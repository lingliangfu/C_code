#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void a(int arr[],int sz)
{

	int i = 0;
	for (i = 0; i < sz - 1; i++)//����sz-1��,��Ϊ��0��ʼ����-1
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		//iѭ��һ��,j����sz-1-i��,��Ϊ1����1�������ƶ������յ�λ��,����sz-1����-i
		{
			if (arr[i] < arr[i + 1])
				//ǰһλ�ͺ�һλ���бȽ�,������������,��һ�ν�����9�αȽ�,�ڶ���8��
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
	//�ܴ�С���Ե���Ԫ�صĴ�С ,��ʾ���� arr ��Ԫ�صĸ���
	a(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}