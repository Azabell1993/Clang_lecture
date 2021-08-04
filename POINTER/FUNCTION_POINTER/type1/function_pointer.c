#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		Sum(int a, int b);
int		Sub(int a, int b);

int		main(void)
{
	char	op_flag[3] = {'+', '-', '/'};

	int		i;
	int		(*P[2])(int, int) = {&Sum, &Sub};
	
	int 	Num1;
	int		Num2;
	
	/* input method setting */
	Num1 = 6;
	Num2 = 4;

	printf("Int형 자료형의 더하기, 빼기 결과 입니다.\n");

	i = 0;
	while(i < 2)
	{
		printf("%d %c %d = %d\n", Num1, op_flag[i], Num2, (*P[i])(Num1, Num2));
		i++;
	}

	printf("float 자료형으로 변환... \n");
	printf("%d %c %d = %.2f\n", Num1, op_flag[2], Num2, (float)((*P[0])(Num1, Num2)/2));

	return (0);
}

int		Sum(int a, int b)
{
	int *Num1 = &a;
	int *Num2 = &b;

	int sum = *Num1 + *Num2;
	return (sum);
}

int		Sub(int a, int b)
{
	int *Num1 = &a;
	int *Num2 = &b;

	int sub = *Num1 - *Num2;
	return (sub);
}
