#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 *_printf - printf function
 *@format: is a character string
 *Return: number of character printed
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
			char *str = va_arg(argList, char *);
			
			for (j = 0; str[j] != 0; j++)
				_putchar(str[j]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == 0)
		{
		}
		numChar++;
	}
	_putchar('\n');
	va_end(argList);
	return (numChar);
}
