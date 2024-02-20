#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...);

/**
 * function_picker - pickes the right function
 *
 */

typedef struct function_picker
{
	char specifier;
	int (*function_name)(void*);
}function_picker;

int print_char(void *);
int _putchar(char c);

#endif
