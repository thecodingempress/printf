#include "main.h"
#include <string.h>
#include <stdarg.h>
/**
 * _printf - prints output according to format
 * @format: character string with format
 *
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	char *s;

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
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				j++;
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char*);
				
				for (k = 0; s[k]; k++)
				{
					_putchar(s[k]);
					j++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				j++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				j += 2;
			}
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
