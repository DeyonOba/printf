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
	int i, j, length = 0, isNegative = 0;

	if (num == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return (1);
	}
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
	while (num > 0)
	{
		buffer[length++] = (num % 10) + '0';
		num /= 10;
	}
	if (isNegative)
		buffer[length++] = '-';
	if (length >= bufferSize)
		return (-1);
	buffer[length] = '\0';
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = buffer[i];

		buffer[i] = buffer[j];
		buffer[j] = temp;
	}
	return (length);
}

