#include "main.h"
/** inttostr - converts ints to strings
 * @num: number
 * @str: string to store resulting string
 *
 * Return: pointer to string
 */
char *inttostr(int num, char *str)
{
	int i = 0;
	int start;
	int rem;
	int end;
	char temp;
	int isNegative = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % 10;
		str[i++] = rem + '0';
		num  = num / 10;
	}

	if (isNegative)
	{
		str[i++] = '-';
	}

	str[i] = '\0';

	start = 0;
	end = i - 1;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end --;
	}

	return (str);
}
