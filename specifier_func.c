#include "main.h"

/**
 * print_integer - Prints an integer
 * @ap: A variable argument list containing an integer to be printed
 * @count: count number of characters
 *
 * Return: Nothing
 */
void print_integer(va_list ap, int *count)
{
	char *temp_ptr, *buffer;
	int num, length;

	num = va_arg(ap, int);
	buffer = malloc(sizeof(buffer));
	if (buffer == NULL)
		return;
	length = int_to_string(num, buffer, sizeof(buffer));
	if (length < 0)
		return;
	temp_ptr = buffer;
	while (*temp_ptr)
	{
		*count += _putchar(*temp_ptr);
		temp_ptr++;
	}
	free(buffer);
}

/**
 * print_char - Prints a character
 * @ap: A variable argument list containing a character to be printed
 * @count: count number of characters
 *
 * Return: Nothing
 */
void print_char(va_list ap, int *count)
{
	int c = va_arg(ap, int);
	*count += _putchar(c);
}

/**
 * print_string - Prints a string
 * @ap: A variable argument list containing a string to be printed
 * @count: count number of characters
 *
 * * Return: Nothing
 */
void print_string(va_list ap, int *count)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		return;
	while (*str)
	{
		*count += _putchar(*str);
		str++;
	}
}

/**
 * print_percent - Prints a percent sign
 * @ap: A variable argument list containing nothing
 * @count: count number of characters
 *
 * Return: Nothing
 */
void print_percent(va_list ap, int *count)
{
	(void) ap;
	*count += _putchar('%');
}
