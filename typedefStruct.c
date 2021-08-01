#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	get_Name(unsigned const char *name);
char	get_Degree(unsigned const char *degree);
char	get_University(unsigned const char *university);
int		get_id(unsigned const int id);

unsigned const char *NA;
unsigned const char *DE;
unsigned const char *UNI;
unsigned const int ID;

int		main(void)
{
	strcpy(get_Name(*NA) , "Park ji woo");
	strcpy(get_Degree(*DE), "C_Masters");
	strcpy(get_University(*UNI), "C language School");

	int id1 = 0x00114583;


	printf("The name of the student is : %s\n", get_Name(*NA));
	printf("The degree of the student is : %s\n", get_Degree(*DE));
	printf("The university of the student is : %s\n", get_University(*UNI));
	printf("The id of the student is : %d\n", get_id(id1));

	return (0);
}


char	get_Name(unsigned const char *name)
{
	name = (unsigned const char*)malloc(sizeof(char) * 100);
	return (*name);
}

char 	get_Degree(unsigned const char *degree)
{
	degree = (unsigned const char*)malloc(sizeof(char) * 100);
	return (*degree);
}

char 	get_University(unsigned const char *university)
{
	university = (unsigned const char *university)malloc(sizeof(char) * 100);
	return (*university);
}

int		get_id(unsigned const int id)
{
	id = (unsigned const int)malloc(sizeof(int) * 100);
	return (id);
}
