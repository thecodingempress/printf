#include "main.h"
#include <stdarg.h>
/**
 * handle_format - checks the input formatted
 * @fomat: char rep format
 * @va_list args: list of args
 * 
 * Return: int
 */
int handle_format(char format, va_list args)
{
	switch (format)
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_string(args));
		case '%':
			return (print_percent());
		case 'd':
		case 'i':
			return print_num(args);
		default:
			_putchar('%');
			_putchar(format);
			return 2;
	}
}
