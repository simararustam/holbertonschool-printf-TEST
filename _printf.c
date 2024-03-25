#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list argList;
	int numChar = 0, i, j;

	va_start(argList, format);
	
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(argList, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			j = 0;
			char *str = va_arg(argList, char *);
			
			while (str[j] != 0)
			{
				_putchar(str[j]);
				j++;
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '!')
		{
			_putchar("%!");
			_putchar("%!\n");
		}
		numChar++;
	}
	_putchar('\n');
	va_end(argList);
	return (numChar);
}
