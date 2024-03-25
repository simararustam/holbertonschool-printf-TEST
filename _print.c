#include "main.h"
#include <stdarg.h>
/**
 * _printf - print something
 * @format: type specifier
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list argumentList; //List of Arguments
    int length = 0; //Number of characters
    int i; //i is used for loop. Index of format string
    //char *s;
    va_start(argumentList, format); //Initialize argumentList
    
    //Loops and other thing need to be writed in between va_start and va_end
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            //If there is no type specifier just print what we have
            putchar(format[i]);
        }
        
        //If there is a % sign and after % sign there is c print character
        if (format[i] == '%' && format[i + 1] == 'c')
        {
            putchar(va_arg(argumentList, int));
            i++;
        }
        else if (format[i] == '%' && format[i + 1] == 's')
        {
            putchar(va_arg(argumentList, char *));
        }
        
        length++;
        
    }
    
    va_end(argumentList);
    
    return (length);
}
