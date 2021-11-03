#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

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
			switch (format[i])
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

