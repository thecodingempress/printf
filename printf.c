#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * printf - main file that prints out to stad output
 * @format: format specifier
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;
	
	int bytes, count, i;
	i = 0;
	count = 0;
	bytes = 0;
	function_picker print_funcs[1] = {
		{'c', print_char}
	};

	va_start(args, format);

	if (format == NULL)
		return (bytes);
	
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else
		{
			i++;

			while (count <= 1)
			{
				if (format[i] == print_funcs[count].specifier)
				{
					bytes += print_funcs[count].function_name(va_arg(args, void *));
				}

				count++;
			}
			count = 0;
		}

		i++;
	}

	va_end(args);
	return (bytes);
}
