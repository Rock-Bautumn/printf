#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * printintmin - prints an integer
 * Return: the number of chars printed
 */
int printintmin(void)
{
	int i = 0;
	char *num = "-2147483648";

	while (num[i])
	{

		write(1, &num[i], 1);
		i++;
	}
	return (i);
}

/**
 * printint - prints an integer
 * @n: the integer to print
 * Return: the number of chars printed
 */
int printint(va_list n)
{
	char *string;
	char *outstring;
	int i = 0;
	int x = va_arg(n, int);

	int *y = &x;

	if (x == -2147483648)
		return (printintmin());
	*y = x / -1;
	x = *y * -1;
	if (x == 0)
	{
		cprint('0');
		return (1);
	}
	if (!x)
		return (0);
	string = malloc(sizeof(char) * 12);
	if (string == NULL)
	{
		free(string);
	}
	outstring = _itoa(x, string);
	while (outstring[i] != '\0')
	{
		write(1, &outstring[i], 1);
		i++;
	}
	/*write(1, '\0', 1); */
	free(string);
	return (i);
}
