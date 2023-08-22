#include "main.h"

/*
 *
 */
int _puts (const char *s, int *count)
{
	while (*s != '\0')
	{
		_putchar(*s, count);
		s++;
	}
	return (0);
}
