# include<stdio.h>
int main() {
	printf("请输入一个大于等于3的数，我可以计算出其中所有的素数\n");
	int a = 3;
	int b = 2;
	int n = 0;
	int c = 0;
	int num = 1;
	scanf_s("%d", &n);
	printf("2是素数\n");
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
			printf("%d是素数\n", a);
		}
		a++;
		b = 2;
		num = 1;
	}
	printf("以上便是小于等于%d的所有素数",n);
	return 0;
}