#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int int_to_string(int num, char *buffer, int bufferSize);
/**
 * struct specify - struct defines a specifier and it function pointer
 * @specifier: character specifier
 * @func: function pointer
 */
typedef struct specify
{
	char specifier;
	void (*func)(va_list ap, int *count);
} spec;

void print_char(va_list ap, int *count);
void print_string(va_list ap, int *count);
void print_percent(va_list ap, int *count);
void print_integer(va_list ap, int *count);

#endif
