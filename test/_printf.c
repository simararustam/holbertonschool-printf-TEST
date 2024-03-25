#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list argList;
	int numChar = 0, i;

	va_start(argList, format);
	
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%' || format[i + 1] == 'c')
		{
			_putchar(va_arg(argList, int));
			i++;
		}
		numChar++;
	}
	_putchar('\n');
	va_end(argList);
	return (numChar);
}
