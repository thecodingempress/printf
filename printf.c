#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - prints out output to stdout
 * @format: string char with required format
 * Return: no of chars printed
 */
int _printf(const char *format, ...)
{
	size_t i = 0;
	size_t j = 0;

	int print_char(va_list args);
	int print_string(va_list args);
	int print_percent(void);
	int handle_format(char format, va_list args);
	va_list(args);
	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j += handle_format(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}
