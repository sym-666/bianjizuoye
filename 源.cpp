# include<stdio.h>
int main() {
	printf("������һ�����ڵ���3�������ҿ��Լ�����������е�����\n");
	int a = 3;
	int b = 2;
	int n = 0;
	int c = 0;
	int num = 1;
	scanf_s("%d", &n);
	printf("2������\n");
	while (a <= n)
	{
		while (b < a)
		{


			if (a % b == 0) {
				num = 0;

			}
			b++;
		}
		if (num == 1)
		{
			printf("%d������\n", a);
		}
		a++;
		b = 2;
		num = 1;
	}
	printf("���ϱ���С�ڵ���%d����������",n);
	return 0;
}