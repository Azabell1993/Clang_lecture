#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

static char *_bar = "-----------------------------------\n";

void	printx(const char *format, ...)
{
	va_list arg;
	int count;

	printf("%sERR : ", _bar);

	va_start(arg, format);
	count = vprintf(format, arg);
	va_end(arg);

	printf("n%s", _bar);
	exit(-1);
}

int		main(int argc, char **argv)
{
	printx("에러가 발생해서 종료합니다. 에러코드 = %d\n", 1234);
	printf("여기는 실행안욉니다.\n");

	return (0);
}
