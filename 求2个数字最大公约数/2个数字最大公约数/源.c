//最大公约数不会超过其中一位
/*辗转相除法：有两整数a和b：
① a% b得余数c
② 若c = 0，则b即为两数的最大公约数
③ 若c≠0，则a = b，b = c，再回去执行①
例如求27和15的最大公约数过程为：
27÷15 余12
15÷12余3
12÷3余0
因此，3即为最大公约数
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
int main() /* 穷举法求最大公约数 */
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
