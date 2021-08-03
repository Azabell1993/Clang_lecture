#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned char *p_limit_table;
	unsigned char **p;

	int age;
	int age_step;
	int member;
	int temp;
	int sum;

	printf("20대부터 시작해서 연령층이 몇 개인가요. : ");
	scanf("%d", &age_step);

	p_limit_table = (unsigned char*)malloc(age_step);
	p = (unsigned char**)malloc(sizeof(unsigned char*)*age_step);

	age = 0;
	while(age < age_step)
	{
		printf("\n%d0대 연령의 윗몸 일으키기 휫수\n", age+2);
		printf("이 연령대는 몇 명입니까?\n");

		scanf("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;

		*(p+age) = (unsigned char*)malloc(*(p_limit_table + age));
		
		member = 0;
		while(member < *(p_limit_table + age))
		{
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(*(p+age) + member) = (unsigned char)temp;
			member++;
		}
		age++;
	}

	printf(" \n\n연령별 평균 윗몸 일으키기 횟수\n");

	age = 0;
	while(age < age_step)
	{
		sum = 0;
		printf("%d0대 : ", age + 2);

		member = 0;
		while(member < *(p_limit_table + age))
		{
			sum = sum + *(*(p+age)+member);
			member++;
		}

		printf("%5.2f\n", (double)sum / *(p_limit_table + age));

		free(*(p+age));

		age++;
	}

	free(p);
	free(p_limit_table);
	return (0);
}
