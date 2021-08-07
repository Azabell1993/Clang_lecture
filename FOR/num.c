#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int num;
	int sum;
	int count;

	sum = 0;
	count = 0;

	printf("반복하고 싶은 횟수 : ");
	scanf("%d", &count);

	i = 0;
	while(i < count)
	{
			scanf("%d", &num);

			if(num <= 0)
			{
				printf("양수만 허용합니다.\n");
				continue;
			}
			else if(num > 100)
			{
				printf(" 100이하의 양수로 다시 입력해주세요.\n");
				continue;
			}
			else
			{
				sum += num;
			}
		i++;
	}

	printf(" sum : %d", sum);

	return (0);
}
