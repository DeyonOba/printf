#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 **/

int _printf(const char *format, ...)
{

	int i = 0; 
	int *count = malloc(sizeof(int));
	va_list args;

	*count = 0;
	va_start(args, format);
	
	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			i++;
			if (*(format + i) == 's')
			{
				char *str = va_arg(args, char *);
				_puts(str, count);
			}
			else if (*(format + i) == 'c')
			{
				char c = va_arg(args, int);
				_putchar(c, count);
			}

		}

		else
			_putchar(*(format + i), count);

		i++;
	}

	va_end(args);
	return (*count);    
}

int main(void)
{
	char str[] = "happy";
	char c = '&';
	int len, len1;

	_printf("%s ha%cppy\n", str, c);
	printf("%s ha%cppy\n", str, c);

	len = _printf("%s ha%cppy\n", str, c);
	len1 = printf("%s ha%cppy\n", str, c);

	printf("[%d, %d]", len, len1);

	return (0);
}

