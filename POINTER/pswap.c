#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void)
{
	int start = 96, end = 5;

	printf("before : start = %d, end = %d\n", start, end);

	if(start > end)
	{
		swap(&start, &end);
	}

	printf("after : start = %d, end = %d\n", start, end);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
