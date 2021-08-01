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
	char *name = "ParkJiWoo";

	int i;
	i = 0;
	while(name[i] != '\0')
	{
		//function_putchar(name[i]);
		printf("%c", name[i]);
		i++;
	}

	return (*name);
}

int		char_pointer()
{
	char *p = (char*)&Data;
	
	int i;
	i = 0;
	while(*p != '\0')
	{
		printf("%X ", *p);
		p++;
		i++;
	}

	return (*p);
}

int		void_pointer(void *vptr, char type)
{
	int 	result;

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
	write(1, &c, 1);
}

