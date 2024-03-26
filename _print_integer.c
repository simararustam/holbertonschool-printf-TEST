/*test file*/
#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * _printf - print something
 * @format: type specifier
 * Return: the number of characters printed
 */
int _printInteger(const char *format, ...)
{
	va_list argumentList; /*List of Arguments*/
	int length = 0, i; /*Number of characters*/

	va_start(argumentList, format); /*Initialize argumentiList*/
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'd')
		{
			_putchar(va_arg(argumentList, int));
			i++;
		}
	}
	va_end(argumentList);
	return (length);
}
