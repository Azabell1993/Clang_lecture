#include <stdio.h>

int main(void)
{
	int x;
	int y;

	scanf("%d %d", &x, &y);

	if(x > 0 && y > 0)
	{
		printf("1사분면\n");
	}
	if (x < 0 && y > 0)
	{
		printf("2사분면\n");
	}
	if (x < 0 && y < 0)
	{
		printf("3사분면\n");
	}
	if (x > 0 && y < 0)
	{
		printf("4사분면\n");
	}
	return (0);
}
