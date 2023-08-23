#include "main.h"


/**
 * print_unsigned_octal - Prints an unsigned integer in octal format
 *
 * @ap: A va_list containing the integer to print
 * @count: A pointer to a counter of printed characters
 */
void print_unsigned_octal(va_list ap, int *count)
{
	unsigned int num;
	char octal[100];
	int i, length;

	num = va_arg(ap, unsigned int);

	if (num == 0)
	{
		*count += _putchar('0');
		return;
	}
	for (i = 0; num != 0; i++)
	{
		octal[i] = (num % 8) + '0';
		num /= 8;
	}
	length = i;
	for (i = length - 1; i >= 0; i--)
		*count += _putchar(octal[i]);
}