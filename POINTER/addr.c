#include <stdio.h>

int main(void)
{
	int Num1 = 8;
	int Num2 = 2;

	int *Ptr1 = &Num1;
	int *Ptr2 = &Num2;

	//단순 덧셈은 가능
	int sum = *Ptr1 + *Ptr2;

	printf("%d\n", sum);

	//개별적 포인터 주소 출력은 가능.
	printf("%p\n", Ptr1);
	printf("%p\n", Ptr2);

	//컴파일러에서 금기시되어서 막고있음...
	//printf("%p\n", Ptr1 + Ptr2);

	//빼는 것은 가능...
	printf("%p\n", Ptr1 - Ptr2);
}
