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
int _printf(const char *format, ...)
{
	va_list argumentList; /*List of Arguments*/
	int length = 0, i; /*Number of characters*/

	va_start(argumentList, format); /*Initialize argumentiList*/
	for (i = 0; format[i] != '\0'; i++)
	{
		
	}
	va_end(argumentList);
	return (length);
}
