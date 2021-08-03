#include <stdio.h>
#include <string.h>

#define MAXLEN 1024

typedef char CName[MAXLEN];
typedef unsigned char AGE;
typedef char SChool[MAXLEN];
typedef unsigned char SCORE;

char	get_Name();
int		get_Age();
char	get_School();
int		get_Score();
void	function_putchar(char c);

int main(void)
{
	printf("Name : "); get_Name();
	printf("Age : %X\n", get_Age());
	printf("School : "); get_School();
	printf("Score : %X\n", get_Score());

	return (0);
}

char	get_Name()
{
	CName name;
	strcpy(name, "Park Ji Woo\n");
	fputs(name, stdout);

	return (*name);
}

int		get_Age()
{
	AGE age;
	age = 0x00000029;
	return (age);
}

char	get_School()
{
	SChool school;
	strcpy(school,"C Language University\n");
	fputs(school, stdout);
	return (*school);
}

int		get_Score()
{
	SCORE score;
	score = 0x00000090;
	return (score);
}

