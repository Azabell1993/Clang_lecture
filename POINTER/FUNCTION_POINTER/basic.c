#include <stdio.h>

int (*fptr1)(int);

int square(int num)
{
	return num*num;
}

int main(void)
{
	int Num = 10;
	fptr1 = square;
	printf("%d squared is %d\n", Num, fptr1(Num));
	return (0);
}
