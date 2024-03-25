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
			char *string = va_arg(argumentList, char *);
			int stringLength = 0;
				
			/*Calculate length of string*/
			while (string[stringLength] != '\0')
			{
				stringLength++;
			}
				
			/*print string chacaters with number of characters in string*/
			write(1, string, stringLength);
			length += stringLength;
		}


        
        	length++;
        
    	}
    
    	va_end(argumentList);
    
    	return (length);
}
