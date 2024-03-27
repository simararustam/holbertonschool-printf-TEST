#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * _printf - print something
 * @format: type specifier
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argumentList; /*List of Arguments*/
	int length = 0, i; /*Number of characters*/

	va_start(argumentList, format); /*Initialize argumentiList*/
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(argumentList, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			int stringLength = 0;

			stringLength = _puts(va_arg(argumentList, char *));
			i++;
			length += stringLength - 1;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			/*
			* length += itoa(va_arg(argumentList, int)) - 1;
			* i++;
			*/
			int value;
			unsigned int abs, a, len;
			unsigned int countn = 1;

			len = 0;

			value = va_arg(args, int);

			if (value < 0)
			{
				len = len + _putchar('-');
				abs = value * -1;
			}
			else
				abs = value;

				a = abs;
				while (a > 9)
				{
					a = a / 10;
					countn = countn * 10;
				}
				while (countn >= 1)
				{
					len = len + _putchar(((abs / countn) % 10) + '0');
					countn = countn / 10;
				}
				return (len);
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[0] == '%'  && format[1] == '\0')
			return (-1);
		else if (format[i] == '%'  && format[i + 1] != '%')
			_putchar(format[i]);

		length += 1;
	}
	va_end(argumentList);
	return (length);
}
