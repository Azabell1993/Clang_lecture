#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>

void	ft_putchar(char c);
void	az_printf(const char *format, ...);
int 	main(void)
{
	char Name[1024];

	int i;

	i = 0;
	while(Name[i] != '\n')
	{
		scanf("%c", &Name[i]);
		i++;
	}
	
	az_printf("%s", Name);

	return (0);
}

void	az_printf(const char *format, ...)
{
	va_list ap;
	char arr[50];
	int i;
	int Num;

	i = 0;
	while(*format)
	{
		if(strncmp(format, "%d", 2) == 0)
		{
			Num = va_arg(ap, int);
			sprintf(arr, "%d", Num);

			while(arr[i] != '\0')
			{
				ft_putchar(arr[i]);
				i++;
			}
			format += 2;
		}
		else if(strncmp(format, "%c", 2) == 0)
		{
			ft_putchar(va_arg(ap, int));
			format += 2;
		}
		else
		{
			ft_putchar(*format);
			format++;
		}
	}

	va_end(ap);	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
