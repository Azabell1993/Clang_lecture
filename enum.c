#include <stdio.h>

enum Day {
	Sunday = 0,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int	main(void)
{
	enum Day D;

	D = Friday;

	printf("%d\n", D);

	return (0);
}
