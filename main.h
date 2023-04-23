#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
typedef struct print
{
	char c;
	int (*f)(va_list);
} print_t;
int _printf(const char *format, ...);
int get_function(const char s, va_list args);

int printint(va_list arg);
int printpercent(va_list arg);
int printstring(va_list arg);
int printcharacter(va_list arg);

#endif
