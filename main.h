<<<<<<< HEAD
#ifndef _MAIN
#define _MAIN
=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> f8e59e693ad16d44e68a3f09e74dd77ce5487785

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

<<<<<<< HEAD

int _putchar(char c);
int _printf(const char *format, ...);
int int_to_string(int num, char *buffer, int bufferSize);

/**
 * struct spec - Struct for format specifiers and their respective functions
 * @specifier: The format specifier
 * @func: The function associated with the format specifier
 *
 **/

typedef struct spec
=======
int _putchar(char c);
int _printf(const char *format, ...);
int int_to_string(int num, char *buffer, int bufferSize);
/**
 * struct specify - struct defines a specifier and it function pointer
 * @specifier: character specifier
 * @func: function pointer
 */
typedef struct specify
>>>>>>> f8e59e693ad16d44e68a3f09e74dd77ce5487785
{
	char specifier;
	void (*func)(va_list ap, int *count);
} spec;

void print_char(va_list ap, int *count);
void print_string(va_list ap, int *count);
void print_percent(va_list ap, int *count);
void print_integer(va_list ap, int *count);

#endif
