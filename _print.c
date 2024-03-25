#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - print something
 * @format: type specifier
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argumentList; /*List of Arguments*/
    	int length = 0; /*Number of characters*/
    	int i; /*i is used for loop. Index of format string*/

    	va_start(argumentList, format); /*Initialize argumentiList*/
    
    	/*Loops and other thing need to be writed in between va_start and va_end*/
    	for (i = 0; format[i] != '\0'; i++)
    	{
        	if (format[i] != '%')
        	{
            		/*If there is no type specifier just print what we have*/
            		_putchar(format[i]);
        	}
        
		/*Part of printing character*/
        	/*If there is a % sign and after % sign there is c print character*/
        	if (format[i] == '%' && format[i + 1] == 'c')
       		{
			/*we use int below. Because characters are promoted to int when passed as variable arguments.*/
            		_putchar(va_arg(argumentList, int));
            		i++;
        	}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			int j;
			char *str;

			str = va_arg(argumentList, char *);
			if (str == NULL)
			str = "(null)";
	
			for (j = 0; str[j] != '\0'; j++)
				_putchar(str[j]);
			return (i);
		}


        
        	length++;
        
    	}
    
    	va_end(argumentList);
    
    	return (length);
}
