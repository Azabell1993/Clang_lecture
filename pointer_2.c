#include <stdio.h>
#include <stdlib.h>

int		step_1();
int		step_2();
int		step_3();

int		main(void)
{
	printf("**STEP 1**\n");
	printf("input one pointer Data : %d\n", step_1());
	printf("**STEP 2**\n");
	printf("input one pointer Data : %d\n", step_2());
	printf("**STEP 3**\n");
	printf("input two pointer Data : %d\n", step_3());
}

int 	step_1()
{
	int 	Num;

	scanf("%d", &Num);

	int	*Ptr = &Num;

	return (*Ptr);
}

int		step_2()
{
	int		*Ptr;

	Ptr = (int*)malloc(4);

	scanf("%d", Ptr);

	return (*Ptr);
}

int		step_3()
{
	unsigned int	**pp;
	pp 	= (unsigned int**)malloc(sizeof(int*));
	*pp = (unsigned int*)malloc(sizeof(int));

	**pp = 234;

	return (**pp);
}
