#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);

	/* 단일 조건만 시행할때*/
	if(x > 0)
	{
		printf("x는 0보다 커요!!\n");
	}


	/* 참, 거짓을 나눠서 시행을 할 때 */
	if(x > 0)
	{
		printf("x는 0보다 커요!!\n");
	}
	else 
	{
		printf("x는 0보다 작아요!!\n");
	}


	/* 만약 ... 조건이 한개 더 추가된다면. */
	if(x > 100)
	{
		printf("우와 아주 커요!!\n");
	}
	else if(x > 0)     // <- 조건이 하나 더 들어가면 else if가 추가로 들어감..
	{
		printf("x는 0보다 커요!!\n");
	}
	else 				//항상 마지막 조건에는 else만 입력됨!!
	{
		printf("x는 0보다 작아요!!\n");
	}

	return (0);
}
