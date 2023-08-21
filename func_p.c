#include "main.h"

/**
 * print_char - Prints a character
 * @ap: A variable argument list containing a character to be printed
 *
 * Return: The number of characters printed
 */

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	
	return (1);
}

/**
 * print_string - Prints a string
 * @ap: A variable argument list containing a string to be printed
 *
 * Return: The number of characters printed
 */

int print_string(va_list ap)
{
	char *str;
	int count = 0;

	str = va_arg(ap, char *);

	if(!str)
		str = "(nill)";
	
	while (*str)
	{
		_putchar(*str);
		count++;
	}

	return (count);
}

/**
 * print_percent - Prints a percent sign
 * @ap: A variable argument list containing nothing
 *
 * Return: The number of characters printed
 */

int print_percent(va_list ap)
{
	(void) ap;
	_putchar('%');

	return (1);
}

/**
 * print_integer - Prints an integer
 * @ap: A variable argument list containing an integer to be printed
 *
 * Return: The number of characters printed
 */

int print_integer(va_list ap)
{
	char *temp, *temp_ptr;
	int d, count;

	d = va_ar(ap, int);
	temp = malloc(12);
	int_to_string(d, temp, sizeof(temp));
	temp_ptr = temp;

	while (*temp_ptr)
	{
		count += _putchar(*temp_ptr);
		temp_ptr++;
	}

	free(temp);
}

/**
 * print_binary - Prints a binary number
 * @ap: A variable argument list containing an unsigned integer to be printed as binary
 *
 * Return: The number of characters printed
 */

int print_binary(va_list ap)
{
	unsigned int n;
	int count;

	count = 0;
	n= va_arg(ap, unsigned int);

	count += printNumber(n);
	
	return (count);	
