#include <stdio.h>

void printf_Hello();
int Sum(int a, int b);
int Sub(int a, int b);

int main(void)
{
	int a;
	int b;

	scanf("%d%d", &a, &b);
	
	printf_Hello();
	printf("sum : %d\n", Sum(a,b));
	printf("mi : %d\n", Sub(a,b));
	return (0);
}

void	printf_Hello()
{
	printf("Hello World!\n");
}

int		Sum(int a, int b)
{
	int sum = a + b;
	return (sum);
}

int		Sub(int a, int b)
{
	int sub = a - b;
	return (sub);
}

