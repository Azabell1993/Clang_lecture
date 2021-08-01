#include <stdio.h>

int main(void)
{
	int pos_num;
	int num;
	int i;
	int temp_num;

	pos_num = 100;
	num = 0;

	char num_string[4] = "123";

	i = 0;
	while(i<3)
	{
		temp_num = num_string[i] - '0';
		num = num + temp_num * pos_num;
		pos_num = pos_num / 10;
		i++;
	}

	printf(" %s -> %d\n", num_string, num);

	return (0);
}
