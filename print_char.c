#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints the char inputed with %c specifier
 * @args: arguments o evaluate
 * Return: number of chars printed
 */
int print_char(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
    return 1;
}
