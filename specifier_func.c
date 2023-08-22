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
	*count += _putchar(' ');
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


/**
 * print_unsigned - Prints unsigned int
 * @ap: A variable argument list containing nothing
 * @count: count number of characters
 *
 * Return: Nothing
 */

void print_unsigned(va_list ap, int *count)
{
    char *temp_ptr, *buffer;
    int num, length;

    num = va_arg(ap, int);
    buffer = (char *)malloc(12);
    if (buffer == NULL)
        return;
    length = int_to_string(num, buffer, 12);
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

