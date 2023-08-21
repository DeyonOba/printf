#include "main.h"
/**
 *
 *
 *
 *
 **/

int _printf(const char *format, ...)
{
	char *str;
	int c;

	va_list ap;
	va_start(ap, format);
	
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 's':
					{
						str = va_arg(ap, char *);
						while (*str)
							_putchar(*str++);
						break;
					}

				case 'c':
					{
						c = va_arg(ap, int);
						_putchar(c);
						break;
					}
				case '%':
					{
						_putchar('%');
						break;
					}
				default:
					{
						_putchar('%');
						_putchar(*format);
						break;
					}
			}
		}

		else
			_putchar(*format);

		format++;
	}

	va_end(ap);
	return 1;    
}
