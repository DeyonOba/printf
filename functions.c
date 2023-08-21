#include "main.h"
/**
 * int_to_string - a function to convert integers to string
 * @num: the num of strings
 * @buffer: the loction of string
 * @bufferSize: the size of location
 *
 * Return: length of string
 **/

int int_to_string(int num, char *buffer, int bufferSize)
{
	int i, j, len, isNeg;

	if (num == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return (1);
	}

	isNeg = 0;
	if (num < 0)
	{
		isNeg = 1;
		num = -num;
	}

	len = 0;
	while (num > 0)
	{
		buffer[len++] = (num % 10) + '0';
		num /= 10;
	}
	if (isNeg)
		buffer[len++] = '-';
	if (len >= bufferSize)
		return (-1);
	buffer[len] = '\0';

	for (i = 0; j = (len - 1); i < j; i++, j--)
	{
		char temp;

		temp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = temp;
	}
	return (len);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printNumber - a function to print out numbers
 * @num : number to be printed
 *
 * Return: Nothing
 **/

void printNumber(int num)
{
	char *digits
	int i;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	digits = malloc(sizeof(digits));

	if (digits == NULL)
		return;

	while (num > 0)
	{
		digits[count++] = (num % 10) + '0';
		num /= 10;
	}

	for (i = count - 1; i >= 0; i--)
		_putchar(digits[i]);

	free(digits);
}

