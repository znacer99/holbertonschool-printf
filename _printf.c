#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "_putchar.h"

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */
ssize_t _printf(const char *format, ...)
{
va_list args;
int count = 0, f = 0, i = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
while (format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else if (format[i] == '%' && format[i + 1] == '\0')
{
_putchar(format[i]);
count++;
break;
}
else if (format[i] == '%')
{
f = get_function(format[i + 1], args);
if (f != 0)
{
count += f;
i += 2;
continue;
}
else
{
_putchar(format[i]);
count++;
}
}
i++;
}
va_end(args);
return (count);
}
