#include "main.h"

/**
 * int_to_string - a function to convert integers to string
 * @num: the num of strings
 * @buffer: the loction of string
 * @bufferSize: the size of location
 *
 * Return: length of string
 **/
<<<<<<< HEAD

int int_to_string(int num, char *buffer, int bufferSize)
{
	int i, j, length, isNegative;
=======
int int_to_string(int num, char *buffer, int bufferSize)
{
	int i, j, length = 0, isNegative = 0;
>>>>>>> f8e59e693ad16d44e68a3f09e74dd77ce5487785

	if (num == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return (1);
	}
<<<<<<< HEAD
	isNegative = 0;
=======
>>>>>>> f8e59e693ad16d44e68a3f09e74dd77ce5487785
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
<<<<<<< HEAD
	length = 0;
=======
>>>>>>> f8e59e693ad16d44e68a3f09e74dd77ce5487785
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
<<<<<<< HEAD
		char temp;

		temp = buffer[i];
=======
		char temp = buffer[i];

>>>>>>> f8e59e693ad16d44e68a3f09e74dd77ce5487785
		buffer[i] = buffer[j];
		buffer[j] = temp;
	}
	return (length);
}
