#include <stdio.h>
#include <setjmp.h>
#include <stdnoreturn.h>

jmp_buf jump_buffer;

noreturn void a(int count)
{
	printf("a(%d) calld\n", count);
	longjmp(jump_buffer, count+1);
}

int main(void)
{
	volatile int count = 0;
	if(setjmp(jump_buffer) != 9)
		a(count++);
}
