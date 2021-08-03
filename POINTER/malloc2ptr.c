#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	short **pp;
	pp = (short**)malloc(sizeof(short*));
	*pp = (short*)malloc(sizeof(short));

	**pp = 100;
	printf("**pp : %d\n", **pp);

	free(*pp);
	free(pp);
}
