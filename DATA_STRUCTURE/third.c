#include <stdio.h>

int main(void)
{
	int i;
	int *ptr;

	int sale[2][2][4] = {63,84,140,130,157,209,251,312,59,80,130,135,149,187,239,310};

	ptr = &sale[0][0][0];
	i = 0;
	while(i<16)
	{
		printf("\naddress : %u sale %2d = %3d", ptr, i, *ptr);
		ptr++;
		i++;
	}
}
