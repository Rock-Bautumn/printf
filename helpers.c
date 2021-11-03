#include <unistd.h>
#include "main.h"

/**
 * cprint - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always void
*/
void cprint(char c)
{
	write(1, &c, 1);
}

/**
 * _itoa - converts into to string
 * @value: the int to convert
 * @newString: String to store converted int
 * Return: string conversion of the int
 */
char *_itoa(int value, char *newString)
{
	int i = 0;
	int n = value;
	int r;

	newString[11] =  '\0';
	if (n < 0)
	{
		n = -n;
	}
	while (n)
	{
		r = n % 10;
		newString[11 - i - 1] = r + 48;
		n = n / 10;
		i++;
	}
	if (value < 0)
	{
		i++;
		newString[11 - i] = '-';
	}
	return (newString + 11 - i);
}

/**
 * printpercent - prints a percent sign
 * Return: 1 because it's one char long
 */
int printpercent(void)
{
	cprint('%');
	return (1);
}
