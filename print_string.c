#include "main.h"
#include <stdarg.h>
#include <stddef.h>
int print_string(va_list args)
{
    char *s = va_arg(args, char*);
    int count = 0;
    size_t k = 0;

    for (k = 0; s[k]; k++)
    {
        _putchar(s[k]);
        count++;
    }
    return count;
}
