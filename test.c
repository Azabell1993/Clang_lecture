#include <stdio.h>
#include <stdlib.h>

int output_sum(int a, int b);

int main(void)
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	int Num1;
	int Num2;

	printf("sum : %d\n", output_sum(a,b));

	return (0);
}

int		output_sum(int a, int b)
{
	int sum = a + b;
	return (sum);
}

