#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		Data = 0x12345678;

int 	int_pointer();
int 	char_pointer();
int		void_pointer(void *vptr, char type);
int		Nameprintf();
void	function_putchar(char c);
void	space2_pointer();

int		main(void)
{
	/* basic poitner */
	printf("basic pointer : %d\n", int_pointer());

	/* int poitner */
	printf("char pointer : ");
	printf("%X ", char_pointer());
	printf("\n");

	/* void pointer */
	printf("void pointer char type 	: %X\n", void_pointer(&Data, 1));
	printf("void pointer short type : %X\n", void_pointer(&Data, 2));
	printf("void pointer int type 	: %X\n", void_pointer(&Data, 4));

	/* name pointer */
	Nameprintf();
	function_putchar('\n');
	
	return (0);
}

int		int_pointer()
{
	int Num = 5;
	int *ptr = &Num;

	return (*ptr);
}

int		Nameprintf()
{
	//char name[]도 되지만 포인터도 가능합니다.
	char *name = "ParkJiWoo";

	int i;
	i = 0;
	//위에서 *를 사용하여 포인터를 썻지만 자세한 건 강의에서.
	while(name[i] != '\0')
	{
		/* 이 함수를 불러오는 이유는 디스크립터와 배열 주소의 개념을 동시에 잡아주기 위해서 입니다. */
		function_putchar(name[i]);
		i++;
	}
	return (*name);
}

int		char_pointer()
{
	/* 상수로 선언을 한 Data를 갖고와서 임시적으로 (char*)선언을 해줍니다. */
	char *p = (char*)&Data;
	
	int i;
	i = 0;
	while(*p != '\0')
	{
		/* 출력할때 인자의 자료형이 다양하게 있는데 그것에 대해 학습을 하면서 포인터를 학습 */
		printf("%X ", *p);
		p++;
		i++;
	}
	return (*p);
}

int		void_pointer(void *vptr, char type)
{
	int 	result;

	/* void pointer의 임시적 형 변환 학습 */
	if(type == 1)
		result = *(char*)vptr;
	else if(type == 2)
		result = *(short*)vptr;
	else if(type == 4)
		result = *(int*)vptr;

	return (result);
}

void	function_putchar(char c)
{
	//write(   ,   ,   ,) 구글링으로 스스로 빈칸에 무엇이 들어가있는지 복습할 때 학습할 것.
	//디스크립터의 가장 기본이 되는 부분임.
	//이 본문 소스에서는 Nameprintf()함수에서 1바이트씩 가져가는 것이 목적이므로 1byte씩 가져가는 것이 목표.
	write(1, &c, 1);
}
