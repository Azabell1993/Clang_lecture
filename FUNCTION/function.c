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
	printf("sum : %d + %d = %d\n", a, b, Sum(a,b));
	printf("sub : %d - %d = %d\n", a, b, Sub(a,b));
	return (0);
}

void	printf_Hello()
{
	printf("Hello World!\n");
	printf("Add function printf\n");
	printf("\t\tHellooooo!\n\n");
}

int		Sum(int a, int b)
{
	int sum = a + b;
	
	if(sum == 0)
	{
		printf("sum은 0\n");
	}
	else if(sum > 0)
	{
		printf("sum은 양수\n");
	}
	else
	{
		printf("sum은 음수\n");
	}

	return (sum);
}

int		Sub(int a, int b)
{
	int sub = a - b;

	if(a > b)
	{
		//넣고 싶은 내용
		//4, 6을 기입했을 때 이 조건문이 발생하지 않음.

	}
	else
	{
		//넣고 싶은 내용
		//4, 6을 기입햇을 때 이 조건문이 발생함.
	}
	return (sub);
}


