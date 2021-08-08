#include <stdio.h>

int main(void)
{
	int i;
	int sale[4] = {157, 209, 251, 312};

	i = 0;
	while(i < 4)
	{
		printf("\nAddress : %u sale[%d] = %d", &sale[i], i, sale[i]);
		i++;
	}

	return (0);
}
