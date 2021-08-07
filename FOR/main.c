#include <stdio.h>

int main(void)
{
	int i;
	int age;

	printf("input the your age : ", &age);
	scanf("%d", &age);

	if(age < 20)
	{
		printf("미성년자\n");
	}
	else
	{
		printf("성인\n");
	}

	return (0);
}
