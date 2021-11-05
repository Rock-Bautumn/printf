#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * printchar - prints a character
 * @n: the character to print
 * Return: the number of chars printed (1)
 */

int printchar(va_list n)
{
	char c = va_arg(n, int);

	if (c == '\0')
	{
		cprint('\0');
		return (1);
	}
	if (!c)
		return (0);
	cprint(c);
	return (1);
}


/**
 * printstring - prints a string
 * @args: the string to print
 * Return: the number of chars printed
 */
int printstring(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (*str == '\0' || str == (char *)0)
		return (0);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, '\0', 1);
	return (i);
}
