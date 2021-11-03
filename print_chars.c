#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * printchar - prints a character
 * @c: the character to print
 * Return: the number of chars printed (1)
 */

int printchar(char c)
{
	if (!c)
		return (0);
	cprint(c);
	return (1);
}


/**
 * printstring - prints a string
 * @str: the string to print
 * Return: the number of chars printed
 */
int printstring(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, '\0', 1);
	return (i);
}
