#include "main.h"

/**
 * itoa - Convert a long integer to its ASCII representation in a given base.
 * @value: value.
 * Return: A size.
 */
int _itoa(int value)
{
    char buffer[12];
    int i = 0, size = 0;
    int isNegative = 0;


    if (value < 0)
    {
        isNegative = 1;
        value = -value;
        size++;
    }


    do {
        buffer[i++] = (value % 10) + '0';
        value /= 10;
        size++;
    } while (value > 0);


    if (isNegative)
        buffer[i++] = '-';


    int j;
    for (j = i - 1; j >= 0; j--)
    {
        _putchar(buffer[j]);
    }

    return size;
}
