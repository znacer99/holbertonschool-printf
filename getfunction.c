#include "main.h"
#include <stdarg.h>
/**
 * get_function - select function for conversion char
 * @arg: argument.
 * @s: char to check
 * Return: pointer to function
 */
int get_function(const char s, va_list arg)
{
	int i = 0;
	int j = 0;

	print_t type[] = {
		{'c', printcharacter},
		{'s', printstring},
		{'d', printint},
		{'i', printint},
		{'%', printpercent}};

	while (type[i].c != 0)
	{
		if (type[i].c == s)
		{
			j = j + type[i].f(arg);
			return (j);
		}
		i++;
	}

	return (0);
}
