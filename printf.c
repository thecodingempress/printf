#include "main.h"
#include <string.h>
#include <stdarg.h>

int print_char(va_list args);
int print_string(va_list args);
int print_percent();
int handle_format(char format, va_list args);

int _printf(const char *format, ...)
{
	size_t i = 0;
	size_t j = 0;

	va_list(args);
	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	while (format && format[i])
	{	if (format[i] == '%')
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
