#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char w);
char *inttostr(int num, char *str);
int print_char(va_list args);
int print_string(va_list args);
int print_percent();
#endif
