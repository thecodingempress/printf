#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 *
 *
 */

int print_char(void * argument)
{
	char c = *(char* )argument;
	printf("The charact print_char gets: %c\n", c);
	_putchar(c);
}

