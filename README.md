##Our Printf Function
This repository contains a custom implementation of the printf function in the C programming language. The printf function is used to print formatted output to the standard output stream (stdout).

#Files
main.h: Header file containing function prototypes and necessary includes.
main.c: Source code file containing the implementation of the custom printf function.
#Function Description
int _printf(const char *format, ...)
This function takes a format string (format) and a variable number of arguments (...). It processes the format string and prints the formatted output to the standard output stream.

Parameters
format: A pointer to a constant character string that specifies the format of the output. This string can contain format specifiers such as %c, %s, %d, %i, and %%.
...: Variable number of arguments that correspond to the format specifiers in the format string.
Return Value
The function returns an integer value representing the number of characters printed to the standard output stream. If an error occurs, it returns -1.

Format Specifiers
%c: Print a single character.
%s: Print a string.
%d or %i: Print a decimal integer.
%%: Print a percent sign.
Usage
To use the custom printf function, include the main.h header file in your C program and call the _printf function with the desired format string and arguments.
