#include <stdio.h>

#include <string.h>

int main()
{
    char name[24];
	/* extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream) */
    fgets(name, 24, stdin);
    printf("your name is %s\n", name);
    return 1;
}
