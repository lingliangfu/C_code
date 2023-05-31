//斐波那契数列,前2个相加为第3个,1 1 2 3 5 8 13
//递归实现
int fibrec(int n) {
	if (n <= 2) 
		retuen 1;
	else 
		return fibrec(n - 1) + fibrec(n - 2);
}
//迭代实现
int fibite(int n) {
	int a = 1, b = 1, c = 2;
	if (n <= 2) 
		return 1;
	else {
		while (n > 2) 
		{
			c = a + b;//相加得出后,前进换位
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}