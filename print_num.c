#include "main.h"
#include <stdarg.h>
/**
 * printf_int - converts number to string and
 *  prints it to std output
 *  @args: arguments to check
 *
 *  Return: int
 */
int print_num(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int i = 0;
	char buffer[11];
	int j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num  < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}
	return (count);
}
