#include <stdio.h>
#include <string.h>

#define MAXLEN 1024

typedef char CHARArray[MAXLEN];
typedef unsigned char BYTE;

int main(void)
{
	CHARArray name;
	CHARArray city;
	BYTE age;

	strcpy(name, "Park ji woo");
	strcpy(city, "Seoul");
	age = 29;
	
	printf("Name : %s\n", name);
	printf("City : %s\n", city);
	printf("Age : %d\n", age);
	return (0);	
}
