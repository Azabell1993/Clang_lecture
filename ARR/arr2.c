#include <stdio.h>

int		main(void)
{
	unsigned char limit_table[3] = {4,2,3};
	unsigned char count[3][4];
	
	int age;
	int number;
	int member;
	int temp;
	int sum;

	age = 0;
	while(age < 3)
	{
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age+2);
		member = 0;
		while(member < limit_table[age])
		{
			printf("%dth : ", member + 1);

			scanf("%d", &temp);
			count[age][member] = (unsigned char)temp;
			member++;
		}
		age++;
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");

	age = 0;
	while(age < 3)
	{
		sum = 0;
		printf("%d0대 : ", age + 2);
		member = 0;
		while(member < limit_table[age])
		{
			sum = sum + count[age][member];
			member++;
		}
		printf("%5.2f\n", (double)sum / limit_table[age]);
		age++;
	}
}
