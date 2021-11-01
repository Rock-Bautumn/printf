#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - Prints out text and data using a format specifier like the
 * standard printf()
 * @format: The string part that includes the format
 * Return: number of characters written
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int printedchars = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		/* if we have % at our index */
		if (format[i] == 37)
		{
			i++;
			switch(format[i])
			{
			case 'd':
				printedchars += printint(va_arg(args, int));
				break;
			case 'i':
				printedchars += printint(va_arg(args, int));
				break;
			case 'c':
				printedchars += printchar(va_arg(args, int));
				break;
 			case 's':
				printedchars += printstring(va_arg(args, char *));
				break;
			case '%':
				printedchars += printpercent();
				break;
			}
		}
		else
		{
			cprint(format[i]);
			printedchars++;
		}
		i++;
	}
	va_end(args);

	return (printedchars);
}

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
 * printint - prints an integer
 * @n: the integer to print
 * Return: the number of chars printed
 */
int printint(int n)
{
	char *string = itoa(n);
	int i = 0;

	while (string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++;
	}
	write(1, '\0', 1);
	return (i);
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

/**
 * printpercent - prints a percent sign
 * Return: 1 because it's one char long
 */
int printpercent(void)
{
	write(1, (char *)37, 1);
	return (1);
}
/**
 * itoa - converts into to string
 * @value: the int to convert
 * Return: string conversion of the int
 */
char* itoa(int value)
{
    int i = 0;
    int n = value;
    int r;
    char *newString;

    newString = malloc(sizeof(char) * 12);
    if (newString == NULL)
    {
	    free(newString);
	    return NULL;
    }
    newString[12] = '\0';
    if (n < 0)
    {
	    n = -n;
    }
    while (n)
    {
	    r = n % 10;
	    newString[12 - i - 1] = r + 48;
	    n = n / 10;
	    i++;
    }
    if (value < 0)
	    newString[12 - i - 1] = '-';

    return (newString + 12 - i);
}
