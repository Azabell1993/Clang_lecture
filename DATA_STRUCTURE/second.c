#include <stdio.h>

int main(void)
{
	int i;
	int *ptr;

	int sale[2][4] = {63,84,140,130,157,209,251,312};

	ptr = &sale[0][0];
	i = 0;
	while(i<8)
	{
		printf("\n address : %u sale %d = %d", ptr,i,*ptr);
		ptr++;
		i++;
	}

	return (0);
}
