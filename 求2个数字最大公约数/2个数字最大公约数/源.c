//���Լ�����ᳬ������һλ
/*շת���������������a��b��
�� a% b������c
�� ��c = 0����b��Ϊ���������Լ��
�� ��c��0����a = b��b = c���ٻ�ȥִ�Т�
������27��15�����Լ������Ϊ��
27��15 ��12
15��12��3
12��3��0
��ˣ�3��Ϊ���Լ��
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", & a, &b);
	gcd(a, b);
	printf("%d\n", b);
}


#include <stdio.h>
int main() /* ��ٷ������Լ�� */
{
    int m, n, a, b, i, t;
    printf("Input two integer numbers:\n");
    scanf("%d,%d", &a, &b);
    m = a;
    n = b;
    for (i = 1; i <= a; i++)
        if (a % i == 0 && b % i == 0)
            t = i;
    printf("The greatest common divisor:%d\n", t);
    printf("The least common multiple:%d\n", m * n / t);
