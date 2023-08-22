#include "main.h"

/**
 * print_space - Prints empty
 * @ap: A variable argument list containing a string to be printed
 * @count: count number of characters
 *
 * * Return: Nothing
 */

void print_space(va_list ap, int *count)
{
	(void) ap;
	*count += -1;
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
