#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function like printf
 * @format: the pointer of char
 * Return: 1
 */
int _printf(const char *format, ...)
{
	int count = 0, f = 0, i = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			putchar(*(format + i));
			count++;
		}
		if (format[i] == '%')
		{
			f = get_function(format[i + 1], args);
			if (f != 0)
			{
				count = count + f;
				i = i + 2;
				continue;
			}
			if (format[i] == '\0')
			{
				putchar(format[i]);
				count++;
			}
			else if ((format[i] == '%' && format[i + 1] == 'K') ||
					 (format[i] == '%' && format[i + 1] == '!'))
			{
				putchar(format[i]);
				count++;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
