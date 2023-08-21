#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#ifndef _MAIN
#define _MAIN

int _putchar(char c);
int _printf(const char *format, ...);
int int_to_string(int num, char *buffer, int bufferSize);
void printNumber(int num);

#endif
