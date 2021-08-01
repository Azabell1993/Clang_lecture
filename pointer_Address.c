#include <stdio.h>


int main(void)
{
	int Num1 = 0x0000001;
	int Num2 = 0x0001234;
	int Num3 = 0x0000050;

	char Ch1 = '1';
	char Ch2 = '2';
	
	int *Ptr1 = &Num1;
	int *Ptr2 = &Num2;
	int *Ptr3 = &Num3;
	char *CP1 = &Ch1;
	char *CP2 = &Ch2;

	printf("------int pointer Address Size Step------\n");
	printf("%p\n", Ptr1);
	printf("%p\n", Ptr2);
	printf("%p\n", Ptr3);
	printf("------char pointer Address Size Step------\n");
	printf("%p\n", CP1);
	printf("%p\n", CP2);

	return (0);
}

