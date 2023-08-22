#include "main.h"

/**
 * _printf - display text to stdout
 * @format: string/text format
 *
 * Return: number of character successful displayed
 */
int _printf(const char *format, ...)
{
	if (*format == NULL)
		return (-1);
	spec specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
	};
	int i, size, count = 0;
	va_list ap;

	va_start(ap, format);
	size = sizeof(specs) / sizeof(specs[0]);
	while (*format)
	{
		if (*format != '%')
		{
			count += _putchar(*format);
			format++;
			continue;
		}
		format++;

		for (i = 0; i < size; i++)
		{
			if (*format == specs[i].specifier)
			{
				specs[i].func(ap, &count);
				break;
			}
		}
		format++;
	}
	va_end(ap);
	return (count);
}

