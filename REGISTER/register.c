#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <setjmp.h>

static jmp_buf glob_buffer;

void ssu_nested_func(int loc_var, int loc_volatile, int loc_register)
{
	printf("before longjmp, loc_var = %d, loc_volatile = %d, loc_register = %d\n", loc_var, loc_volatile, loc_register);
	longjmp(glob_buffer, 1);
}

int main(int argc, char *argv[], char *envpp[])
{
	register int loc_register;
	volatile int loc_volatile;

	int loc_var;

	loc_var = 10;		
	loc_volatile = 11;	//volatile
	loc_register = 12; 	//register

	//setjmp는 함수를 넘나드는 점프라서 goto보다 더 위험한 것이라서 os프로그래밍에서는 사용하지 않는 것을 권장함.
	if(setjmp(glob_buffer) != 0) {
	printf("afer longjmp , loc_var = %d, loc_volatile = %d, loc_register = %d\n", loc_var, loc_volatile, loc_register);
	exit(0);
	}

	loc_var = 80;
	loc_volatile = 81;
	loc_register = 82;

	ssu_nested_func(loc_var, loc_volatile, loc_register);
	
	exit(0);

}
