#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

#ifndef _MAIN
#define _MAIN

int _putchar(char c);
int _printf(const char *format, ...);
int int_to_string(int num, char *buffer, int bufferSize);

typedef struct
{
	char specifier;
	void (*func)(va_list ap, int *count);
}spec;

void print_char(va_list ap, int *count);
void print_string(va_list ap, int *count);
void print_percent(va_list ap, int *count);
void print_integer(va_list ap, int *count);


#endif
