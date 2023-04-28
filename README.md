# C - PRINTF 📝
- as a project in the module of Holberton School, i created a printf function.
![App Screenshot](https://wallpaperaccess.com/full/1519085.jpg)

# DESCRIPTION

This repository contains C program for printf that is a function in the C standard library that is used to print output to the console (or terminal) window. The name printf stands for "print formatted", which means that it can print a combination of text and variable values that are formatted according to specific rules.

## TASKS

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

- Write a function that produces output according to a format.

1. Education is when you read the fine print. Experience is what you get if you don't

- Handle the following conversion specifiers.

2. Just because it's in print doesn't mean it's the gospel

- Create a man page for your function.

## Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Prototype

```bash
  int _printf(const char *format, ...);
```

- Returns: the number of characters printed (excluding the null - byte used to end output to strings).
- write output to stdout, the standard output stream.
- see man 3 printf for more detail.

# Compilation

- Our code will be compiled this way:

```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

# Betty style

- It will be checked using:

```bash
  betty-style.pl
```

and

```bash
  betty-doc.pl
```

# Testing the program

The main function is a special function that serves as the starting point for program execution. When a C program is run, the operating system loads the executable file and starts executing instructions at the memory location specified by the main function.

You must use the main.c file below to verify the code:

```bash
#include <limits.h>
 #include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

# Output Check

After compiling the program, the output must show the result below:

```bash
 alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```

## Authors

- [Naceur Ezzehi](https://github.com/znacer99)
