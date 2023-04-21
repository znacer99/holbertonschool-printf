#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* _printf - Produces output according to a format.
* @format: Format string.
*
* Return: the number of characters printed (excluding the null byte used to
* end output to strings).
*/

int _printf(const char *format, ...)
{
va_list args;
int count = 0, i;
char *str;

va_start(args, format);
for (i = 0; format && format[i]; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
count += putchar(va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
count += printf("%s", str);
break;
case '%':
count += putchar('%');
break;
default:
/* unsupported conversion specifier, ignore it */
break;
}
}
else
count += putchar(format[i]);
}
va_end(args);
return count;
}
