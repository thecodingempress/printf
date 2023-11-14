#include <unistd.h>
#include <string.h>
/**
 * _putchar - prints the characters given
 *
 * Return: 0
 */

int _putchar(char w)
{
	write(1, &w, 1);
	return (0);
}
