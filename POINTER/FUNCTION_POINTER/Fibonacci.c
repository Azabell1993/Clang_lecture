#include <stdio.h>

int (*fptr1)(int);

int square(int num)
{
	if(num <= 2)
	{
		return 1;
	}
	else
	{
		return square(num-1) + square(num-2);
	}
}

int main(void)
{
	int i;
	while(i <= 12)
	{
		printf("%d ", square(i));
		i++;
	}


	return (0);
}
