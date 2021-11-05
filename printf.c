#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

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
	int (*ptr)(va_list);

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 37)
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == 37)
			{
				printedchars += printpercent();
			}
			else
			{
				ptr = get_op_func(format[i]);
				if (get_op_func(format[i]) == NULL)
				{
					printedchars += printpercent();
					if (format[i])
						printedchars += cprint(format[i]);
				}
				else
					printedchars += ptr(args);
			}
		}
		else
			printedchars += cprint(format[i]);
		i++;
	}
	return (printedchars);
}
