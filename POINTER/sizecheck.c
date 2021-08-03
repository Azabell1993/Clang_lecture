#include <stdio.h>

int main(void)
{
	/* 자료형의 크기를 체크하기 위한 변수 선언 */
	char 	Char;
	int 	Int;
	short 	Short;
	float 	Float;
	long 	Long;

	/* 자료형 배열의 크기 체크용 선언 */
	char	C_arr[100];
	int		I_arr[100];
	short	S_arr[100];
	float	F_arr[100];
	long	L_arr[100];

	printf("\n Char size : %d \n", 		sizeof(Char));
	printf("\t Char_arr size : %d\n", 	sizeof(C_arr));

	printf(" Int size : %d \n", 		sizeof(Int));
	printf("\t Int_arr size : %d\n",	sizeof(I_arr));

	printf(" Short size : %d\n",		sizeof(Short));
	printf("\t Short_arr size : %d\n", 	sizeof(S_arr));

	printf(" Float size : %d\n",		sizeof(Float));
	printf("\t Float_arr size : %d\n", 	sizeof(F_arr));

	printf(" Long size : %d\n",			sizeof(Long));
	printf("\t Long_arr size : %d\n",	sizeof(L_arr));

	//exit(0);
	return (0);
}
