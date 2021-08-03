#include <stdio.h>
#define MAX 20

typedef struct Person{
	char name[MAX];
	unsigned short int age;
	float height;
	float weight;
} P;

int main(void)
{
	P data;

	printf("input the information at here\n");
	printf("name : ");
	//scanf("%s", data.name);
	scanf("%[^\n]s", data.name);

	//https://mgoons.tistory.com/6
	printf("age : ");
	scanf("%hu", &data.age);

	printf("height : ");
	scanf("%f", &data.height);

	printf("weight : ");
	scanf("%f", &data.weight);

	printf("\nThank you.\n");
	printf("Information\n");
	printf("%s \n age : %d, %1.fcm, %1.fkg\n",
			data.name, data.age, data.height, data.weight);
	return (0);
	
}
