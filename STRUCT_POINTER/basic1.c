#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person
{
	char *firstName;
	char *lastName;
	char *title;
	unsigned int age;
} Person;

int main(void)
{
	Person *ptrPerson;
	ptrPerson = (Person*)malloc(sizeof(Person));

	//ptrPerson -> firstName = (char*)malloc(strlen("Park")+1);
	(*ptrPerson).firstName = (char*)malloc(strlen("Park ji woo")+1);

	//strcpy(ptrPerson -> firstName, "Park");
	strcpy((*ptrPerson). firstName, "Park ji woo");

	//ptrPerson -> age = 23;
	(*ptrPerson).age = 23;

	printf("%s\n", ptrPerson -> firstName);
	printf("%s\n", (*ptrPerson).firstName);
	
	printf("%d\n", ptrPerson -> age);
	printf("%d\n", (*ptrPerson).age);
}
