#include <stdio.h>

int az_atoi(const char *s);

int main(void)
{
	//char num_char[4] = "123";
	char *num_char;

	printf("%d\n", az_atoi(num_char));

	return (0);
}

int	az_atoi(const char *s)
{
	int num;
	int cnt;
	
	num = 0;

	cnt = 0;
	while(s[cnt] != 0)
	{
		num = num * 10 + (s[cnt] - '0');
		//num = num * 10 + (s[cnt] - 48);
		cnt++;
	}
	return (num);
}
