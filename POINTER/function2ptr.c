#include <stdio.h>
#include <stdlib.h>

int GetMyData(int **q)
{
	*q = (int*)malloc(8);
	return (**q);
}

int main(void)
{
	int *p;
	GetMyData(&p);
	*p = 5;
	printf("%d\n", *p);
	free(p);
}
