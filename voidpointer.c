#include <stdio.h>

int GetData(void *p_data, char type);

int main(void)
{
	int data = 0x12345678;
	printf("type 1 : %d\n", GetData(&data, 1));
	printf("type 2 : %d\n", GetData(&data, 2));
	printf("type 4 : %d\n", GetData(&data, 4));
	return (0);
}

int GetData(void *p_data, char type)
{
	int result = 0;

	if(type == 1) result = *(char*)p_data;
	else if(type == 2) result = *(short*)p_data;
	else if(type == 4) result = *(int*)p_data;
	return (result);
}
