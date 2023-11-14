#include "main.h"
#include <string.h>
#include <stdarg.h>

int print_char(va_list args);
int print_string(va_list args);
int print_percent();

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
			switch (format[i])
			{
				case 'c':
					j += print_char(args);
				       break;
				case 's':
				       j += print_string(args);
				      break;
				case '%':
      				       j += print_percent();
				       break;
				default:
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
