//쳲���������,ǰ2�����Ϊ��3��,1 1 2 3 5 8 13
//�ݹ�ʵ��
int fibrec(int n) {
	if (n <= 2) 
		retuen 1;
	else 
		return fibrec(n - 1) + fibrec(n - 2);
}
//����ʵ��
int fibite(int n) {
	int a = 1, b = 1, c = 2;
	if (n <= 2) 
		return 1;
	else {
		while (n > 2) 
		{
			c = a + b;//��ӵó���,ǰ����λ
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}