#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * printint - prints an integer
 * @n: the integer to print
 * Return: the number of chars printed
 */
int printint(int n)
{
	char *string;
	char *outstring;
	int i = 0;

	string = malloc(sizeof(char) * 12);
	if (string == NULL)
	{
		free(string);
	}
	outstring = _itoa(n, string);
	while (outstring[i] != '\0')
	{
		write(1, &outstring[i], 1);
		i++;
	}
	/*write(1, '\0', 1); */
	return (i);
}

