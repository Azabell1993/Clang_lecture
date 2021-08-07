#include <stdio.h>

int main(void)
{
	int array[10];
	int i;
	int sum;

	//중요!!
	sum = 0;

	//i가 0이므로......
	i = 0;
	while(i < 10)
	{
		//0번째 학생에서 출발을 함..
		//그래서 +1을 해줌.
		printf("%d번째 학생 성적은? : ", i + 1);
		scanf("%d", &array[i]);
		i++;
	}

	i = 0;
	while(i < 10)
	{
		sum += array[i];
		i++;
	}

	printf("SUM : %d\n", sum);
	printf("avr : %.2f", (double)sum/10);

	return (0);
}
